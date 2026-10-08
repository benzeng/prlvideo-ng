
undefined8 FUN_100230a60(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = CAbstractTask::getCurrentSubTask();
  uVar4 = 0x80000001;
  switch(uVar1) {
  case 0:
    FUN_100230bb0(param_1);
    break;
  case 1:
    FUN_100230d00(param_1);
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x000100230aad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
    return uVar4;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x000100230abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 200))(param_1);
    return uVar4;
  case 4:
    lVar3 = 0;
    if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar3 = param_1[4];
    }
    iVar2 = FUN_100319ae0(lVar3);
    if ((int)param_1[5] == iVar2) {
      return 0;
    }
    switch(iVar2) {
    case 1:
                    /* WARNING: Could not recover jumptable at 0x000100230b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0xe8))(param_1);
      return uVar4;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x000100230b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0xf0))(param_1);
      return uVar4;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x000100230b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
      return uVar4;
    case 4:
                    /* WARNING: Could not recover jumptable at 0x000100230b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0x100))(param_1);
      return uVar4;
    default:
      return 0;
    }
  case 5:
                    /* WARNING: Could not recover jumptable at 0x000100230b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0xd0))(param_1);
    return uVar4;
  case 6:
                    /* WARNING: Could not recover jumptable at 0x000100230b13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0xd8))(param_1);
    return uVar4;
  case 7:
                    /* WARNING: Could not recover jumptable at 0x000100230b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0xe0))(param_1);
    return uVar4;
  default:
    goto switchD_100230a8a_default;
  }
  uVar4 = 0;
switchD_100230a8a_default:
  return uVar4;
}

