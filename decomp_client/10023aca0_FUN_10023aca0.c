
undefined8 FUN_10023aca0(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar3 = param_1[4];
  }
  lVar3 = FUN_100325f60(lVar3);
  if (lVar3 != 0) {
    lVar3 = 0;
    if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar3 = param_1[4];
    }
    uVar4 = FUN_100325f60(lVar3);
    FUN_1003439d0(uVar4,1);
  }
  if ((int)param_1[5] != 2) {
    lVar3 = 0;
    if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar3 = param_1[4];
    }
    iVar1 = FUN_100325aa0(lVar3);
    if (iVar1 == (int)param_1[5]) {
      return 0;
    }
  }
  lVar3 = 0;
  if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar3 = param_1[4];
  }
  uVar2 = FUN_100325aa0(lVar3);
  switch(uVar2) {
  case 1:
                    /* WARNING: Could not recover jumptable at 0x00010023ad62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0xe0))(param_1);
    return uVar4;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00010023ad74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0xe8))(param_1);
    return uVar4;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x00010023ad86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0xf0))(param_1);
    return uVar4;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00010023ad98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
    return uVar4;
  default:
    return 0;
  }
}

