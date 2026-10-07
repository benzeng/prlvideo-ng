
undefined8 FUN_1002a3270(long *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (2 < DAT_1011b55f8) {
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar3 = FUN_1002a2f00((int)param_1[4]);
    uVar4 = FUN_1002a2f00(param_2);
    FUN_1008e3970("AudioDS","LocalDevices",3,"%s: set state: %s -> %s",uVar2,uVar3,uVar4);
  }
  if ((char)param_1[2] == '\0') {
    return 0x80000001;
  }
  iVar1 = (int)param_1[4];
  if (iVar1 == param_2) {
    return 0;
  }
  if (param_2 == 2) {
    if (iVar1 != 1) {
      return 0x80000001;
    }
    uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return 0x80000001;
      }
      if (iVar1 != 1) {
        return 0x80000001;
      }
      (**(code **)(*param_1 + 0x60))(param_1);
      uVar2 = 0;
      goto LAB_1002a3357;
    }
    if (iVar1 == 2) {
      (**(code **)(*param_1 + 0x68))(param_1);
      uVar2 = 0;
      goto LAB_1002a3357;
    }
    if (iVar1 != 0) {
      return 0x80000001;
    }
    uVar2 = (**(code **)(*param_1 + 0x70))(param_1);
  }
  if ((int)uVar2 < 0) {
    return uVar2;
  }
LAB_1002a3357:
  *(int *)(param_1 + 4) = param_2;
  return uVar2;
}

