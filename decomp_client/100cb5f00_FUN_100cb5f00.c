
undefined8 FUN_100cb5f00(long *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((*(code **)(*param_1 + 8) != (code *)0x0) &&
     (iVar2 = (**(code **)(*param_1 + 8))(param_1), iVar2 == 0)) {
    return 0xffffffff;
  }
  if ((*(byte *)((long)param_1 + 0x29) & 1) != 0) {
    FUN_100c64f80(FUN_100cb6050,param_1);
  }
  iVar2 = FUN_100c60800(param_1[1]);
  lVar5 = *param_1;
  if (0 < iVar2) {
    iVar2 = 0;
    uVar6 = 0xffffffff;
    do {
      pcVar1 = *(code **)(lVar5 + 0x10);
      if (pcVar1 != (code *)0x0) {
        uVar4 = FUN_100c60820(param_1[1],iVar2);
        iVar3 = (*pcVar1)(param_1,uVar4);
        if (iVar3 == 0) goto LAB_100cb601a;
      }
      iVar2 = iVar2 + 1;
      iVar3 = FUN_100c60800(param_1[1]);
      lVar5 = *param_1;
    } while (iVar2 < iVar3);
  }
  if (*(code **)(lVar5 + 0x18) != (code *)0x0) {
    iVar2 = (**(code **)(lVar5 + 0x18))(param_1);
    uVar6 = 0xfffffffe;
    if (iVar2 == -1) goto LAB_100cb601a;
    if (iVar2 == 0) {
      uVar6 = 0xffffffff;
      goto LAB_100cb601a;
    }
  }
  iVar2 = FUN_100c60800(param_1[1]);
  iVar3 = 0;
  if (iVar2 < 1) {
    uVar6 = 0;
  }
  else {
    do {
      pcVar1 = *(code **)(*param_1 + 0x20);
      if (pcVar1 != (code *)0x0) {
        uVar6 = FUN_100c60820(param_1[1],iVar3);
        iVar2 = (*pcVar1)(param_1,uVar6);
        uVar6 = 0xfffffffe;
        if ((iVar2 == -1) || (uVar6 = 0xffffffff, iVar2 == 0)) break;
      }
      iVar3 = iVar3 + 1;
      iVar2 = FUN_100c60800(param_1[1]);
      uVar6 = 0;
    } while (iVar3 < iVar2);
  }
LAB_100cb601a:
  if ((*(code **)(*param_1 + 0x28) != (code *)0x0) &&
     (iVar2 = (**(code **)(*param_1 + 0x28))(param_1), iVar2 == 0)) {
    return 0xffffffff;
  }
  return uVar6;
}

