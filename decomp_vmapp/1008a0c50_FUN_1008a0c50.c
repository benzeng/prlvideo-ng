
undefined8 FUN_1008a0c50(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_10081ddd0(0x28,"x_name.c",0x88);
  if (plVar1 == (long *)0x0) {
    FUN_100887ce0(0xd,0xab,0x41,"x_name.c",0x96);
  }
  else {
    lVar2 = FUN_100884e10();
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_10087ccc0();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        plVar1[3] = 0;
        *(undefined4 *)(plVar1 + 4) = 0;
        *(undefined4 *)(plVar1 + 1) = 1;
        *param_1 = plVar1;
        return 1;
      }
    }
    FUN_100887ce0(0xd,0xab,0x41,"x_name.c",0x96);
    if (*plVar1 != 0) {
      FUN_100884dd0();
    }
    FUN_10081e1a0(plVar1);
  }
  return 0;
}

