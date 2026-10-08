
void FUN_100818960(long *param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0xc) {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x0001008189ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    case 1:
      FUN_10025d6e0();
      return;
    case 2:
      FUN_10025dd10(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_10025f640(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_10025f970(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_10025f300();
      return;
    case 6:
      FUN_10025ffa0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 7:
      goto switchD_1008189a0_caseD_7;
    case 8:
      uVar1 = FUN_10025c180();
      if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)*param_4 = uVar1;
      return;
    case 9:
      uVar1 = FUN_10025c250();
      if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)*param_4 = uVar1;
      return;
    case 10:
      uVar1 = FUN_10025f7e0();
      if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)*param_4 = uVar1;
      return;
    case 0xb:
      uVar1 = FUN_10025c7b0();
      if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)*param_4 = uVar1;
      return;
    default:
      return;
    }
  }
  if (param_3 == 3) {
    puVar2 = (undefined4 *)*param_4;
    if (*(int *)param_4[1] != 0) {
      *puVar2 = 0xffffffff;
      return;
    }
  }
  else {
    if (param_3 != 4) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    puVar2 = (undefined4 *)*param_4;
    if (*(int *)param_4[1] != 0) {
      *puVar2 = 0xffffffff;
      return;
    }
  }
  *puVar2 = 2;
  return;
switchD_1008189a0_caseD_7:
  uVar1 = FUN_10025bc00();
  if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
    return;
  }
  *(undefined4 *)*param_4 = uVar1;
  return;
}

