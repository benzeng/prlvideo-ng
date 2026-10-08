
undefined8 FUN_100cd1d20(long *param_1,long *param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_100cd05d0(param_1,4);
  uVar4 = 0;
  if ((char)param_1[0xd] == '\0') {
    return 0;
  }
  uVar1 = *(uint *)((long)param_1 + 0x1c);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_2 + 6);
  if (param_3 == 0) {
    *(uint *)((long)param_1 + 0x6c) = *(uint *)((long)param_1 + 0x6c) & ~uVar2;
  }
  else {
    *(uint *)((long)param_1 + 0x6c) = *(uint *)((long)param_1 + 0x6c) | uVar2;
  }
  switch((int)param_1[4]) {
  case 1:
    if (((*(uint *)((long)param_1 + 0x14) ^ *(uint *)(param_1 + 8)) & 0xfffffff) != 0) {
      return 0;
    }
    if (uVar1 != uVar2) {
      return 0;
    }
    if ((param_3 == 0) && (*(char *)((long)param_1 + 0x49) == '\0')) {
      return 0;
    }
    param_1[0x13] = param_2[5];
    param_1[0x12] = param_2[4];
    param_1[0x11] = param_2[3];
    param_1[0x10] = param_2[2];
    lVar3 = *param_2;
    param_1[0xf] = param_2[1];
    param_1[0xe] = lVar3;
    *(int *)(param_1 + 0x14) = (int)param_1[5];
    (**(code **)(*(long *)param_1[0xc] + 0xd8))((long *)param_1[0xc],param_1 + 0xe,param_3);
    *(byte *)((long)param_1 + 0x49) = param_3;
    break;
  default:
    goto switchD_100cd1d87_caseD_2;
  case 3:
    if ((uVar1 != uVar2) || (param_3 != 1)) {
      (**(code **)(*param_1 + 0x130))(param_1);
      return 0;
    }
    if (((*(uint *)((long)param_1 + 0x14) ^ *(uint *)(param_1 + 8)) & 0xfffffff) != 0) {
      return 0;
    }
    if ((int)param_1[0xb] == 0) {
      return 0;
    }
    *(int *)(param_1 + 0x14) = (int)param_2[6];
    param_1[0x13] = param_2[5];
    param_1[0x12] = param_2[4];
    param_1[0x11] = param_2[3];
    param_1[0x10] = param_2[2];
    lVar3 = *param_2;
    param_1[0xf] = param_2[1];
    param_1[0xe] = lVar3;
    QTimer::start((int)param_1[10]);
    break;
  case 5:
    param_3 = param_3 ^ 1;
  case 4:
    if (param_3 == 0) {
      return 0;
    }
    if (uVar1 != uVar2) {
      return 0;
    }
    if ((~*(uint *)(param_1 + 8) & *(uint *)((long)param_1 + 0x14) & 0xfffffff) != 0) {
      return 0;
    }
    if ((code *)param_1[5] != (code *)0x0) {
      (*(code *)param_1[5])(param_1[6]);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  uVar4 = 3;
switchD_100cd1d87_caseD_2:
  return uVar4;
}

