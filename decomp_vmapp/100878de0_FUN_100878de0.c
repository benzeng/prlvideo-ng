
undefined8 FUN_100878de0(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == (long *)0x0) {
    uVar3 = 0x43;
    uVar4 = 0x88;
  }
  else {
    iVar1 = FUN_10081d580(param_1 + 2,0xffffffff,0x1c,"dso_lib.c",0x8c);
    if (0 < iVar1) {
      return 1;
    }
    lVar2 = *param_1;
    if (*(code **)(lVar2 + 0x10) != (code *)0x0) {
      iVar1 = (**(code **)(lVar2 + 0x10))(param_1);
      if (iVar1 == 0) {
        uVar3 = 0x6b;
        uVar4 = 0x9a;
        goto LAB_100878e92;
      }
      lVar2 = *param_1;
    }
    if ((*(code **)(lVar2 + 0x48) == (code *)0x0) ||
       (iVar1 = (**(code **)(lVar2 + 0x48))(param_1), iVar1 != 0)) {
      FUN_100884dd0(param_1[1]);
      if (param_1[7] != 0) {
        FUN_10081e1a0();
      }
      if (param_1[8] != 0) {
        FUN_10081e1a0();
      }
      FUN_10081e1a0(param_1);
      return 1;
    }
    uVar3 = 0x66;
    uVar4 = 0x9f;
  }
LAB_100878e92:
  FUN_100887ce0(0x25,0x6f,uVar3,"dso_lib.c",uVar4);
  return 0;
}

