
undefined8 FUN_004038d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  
  memset(&prl_xfunctions,0,0x1d0);
  puVar2 = PTR___log_level_0061bd30;
  if (PTR_s_libXrandr_so_0061c200 == (undefined *)0x0) {
    if (DAT_0061d310 != 0) {
LAB_00403964:
      lVar7 = 0;
      while( true ) {
        uVar1 = *(undefined8 *)((long)&PTR_s_XOpenDisplay_0061b8a0 + lVar7);
        uVar4 = dlsym(DAT_0061d310,uVar1);
        *(undefined8 *)((long)&prl_xfunctions + lVar7) = uVar4;
        lVar5 = dlerror();
        if (lVar5 != 0) break;
        lVar7 = lVar7 + 8;
        if (lVar7 == 0x1d0) {
          if (*(int *)PTR___log_level_0061bd30 < 2) {
            return 0;
          }
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"X functions were loaded successfully");
          return 0;
        }
      }
      FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Could not load X function [%s]: %s",uVar1,lVar5);
      goto LAB_004039c6;
    }
  }
  else {
    ppuVar6 = &PTR_s_libXrandr_so_0061c200;
    puVar3 = PTR_s_libXrandr_so_0061c200;
    lVar7 = DAT_0061d310;
    do {
      DAT_0061d310 = lVar7;
      if (1 < *(int *)puVar2) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Try %s X server\'s library...",puVar3);
      }
      DAT_0061d310 = dlopen(*ppuVar6,0x102);
      if (DAT_0061d310 != 0) goto LAB_00403964;
      puVar3 = ppuVar6[1];
      ppuVar6 = ppuVar6 + 1;
      lVar7 = 0;
    } while (puVar3 != (undefined *)0x0);
  }
  FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Could not load X server\'s library");
LAB_004039c6:
  FUN_00403850();
  return 1;
}

