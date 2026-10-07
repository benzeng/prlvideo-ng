
long * FUN_100878c80(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (DAT_1011c0868 == 0) {
    DAT_1011c0868 = FUN_100879660();
  }
  plVar2 = (long *)FUN_10081ddd0(0x48,"dso_lib.c",0x6a);
  if (plVar2 == (long *)0x0) {
    FUN_100887ce0(0x25,0x71,0x41,"dso_lib.c",0x6c);
  }
  else {
    plVar2[8] = 0;
    plVar2[7] = 0;
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[1] = 0;
    *plVar2 = 0;
    lVar3 = FUN_100884e10();
    plVar2[1] = lVar3;
    if (lVar3 == 0) {
      FUN_100887ce0(0x25,0x71,0x41,"dso_lib.c",0x73);
    }
    else {
      if (param_1 == 0) {
        param_1 = DAT_1011c0868;
      }
      *plVar2 = param_1;
      *(undefined4 *)(plVar2 + 2) = 1;
      if (*(code **)(param_1 + 0x40) == (code *)0x0) {
        return plVar2;
      }
      iVar1 = (**(code **)(param_1 + 0x40))(plVar2);
      if (iVar1 != 0) {
        return plVar2;
      }
    }
    FUN_10081e1a0(plVar2);
  }
  return (long *)0x0;
}

