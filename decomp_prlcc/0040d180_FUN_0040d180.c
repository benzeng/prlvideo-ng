
undefined8 FUN_0040d180(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  
  if (PTR_s_libdbus_1_so_2_0061c7c0 == (undefined *)0x0) {
LAB_0040d1f9:
    if (DAT_0061d988 != 0) {
LAB_0040d207:
      ppuVar3 = &PTR_s_dbus_error_init_0061ba80;
      puVar6 = &dbus_syms;
      uVar4 = 0;
      while( true ) {
        puVar5 = *ppuVar3;
        uVar1 = dlsym(DAT_0061d988,puVar5);
        *puVar6 = uVar1;
        lVar2 = dlerror();
        if (lVar2 != 0) break;
        uVar4 = uVar4 + 1;
        ppuVar3 = ppuVar3 + 1;
        puVar6 = puVar6 + 1;
        if (uVar4 == 0xd) {
          if (*(int *)PTR___log_level_0061bd30 < 2) {
            return 0;
          }
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"DBus lib loaded");
          return 0;
        }
      }
      FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: %p",(&dbus_syms)[uVar4 & 0xffffffff]);
      FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Failed to load symbol \'%s\': %s",puVar5,lVar2);
      goto LAB_0040d2af;
    }
  }
  else {
    ppuVar3 = &PTR_s_libdbus_1_so_2_0061c7c0;
    puVar5 = PTR_s_libdbus_1_so_2_0061c7c0;
    lVar2 = DAT_0061d988;
    do {
      DAT_0061d988 = lVar2;
      DAT_0061d988 = dlopen(puVar5,0x102);
      if (DAT_0061d988 != 0) {
        if (*(int *)PTR___log_level_0061bd30 < 2) goto LAB_0040d207;
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Using lib \'%s\'",*ppuVar3);
        goto LAB_0040d1f9;
      }
      ppuVar3 = ppuVar3 + 1;
      puVar5 = *ppuVar3;
      lVar2 = 0;
    } while (puVar5 != (undefined *)0x0);
  }
  FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Failed to load DBus lib");
LAB_0040d2af:
  FUN_0040d110();
  return 1;
}

