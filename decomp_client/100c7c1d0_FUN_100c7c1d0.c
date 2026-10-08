
undefined8 FUN_100c7c1d0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_100bf3540(0x28,"x_name.c",0x88);
  if (plVar1 == (long *)0x0) {
    FUN_100c62ee0(0xd,0xab,0x41,"x_name.c",0x96);
  }
  else {
    lVar2 = FUN_100c60010();
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_100c57ec0();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        plVar1[3] = 0;
        *(undefined4 *)(plVar1 + 4) = 0;
        *(undefined4 *)(plVar1 + 1) = 1;
        *param_1 = plVar1;
        return 1;
      }
    }
    FUN_100c62ee0(0xd,0xab,0x41,"x_name.c",0x96);
    if (*plVar1 != 0) {
      FUN_100c5ffd0();
    }
    FUN_100bf3910(plVar1);
  }
  return 0;
}

