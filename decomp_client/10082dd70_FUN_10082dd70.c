
void FUN_10082dd70(long *param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (param_2 == 0xc) {
    if ((param_3 == 3) && (*(uint *)param_4[1] < 2)) {
      uVar1 = FUN_10082e280();
      *(undefined4 *)*param_4 = uVar1;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
switchD_10082ddb1_default:
    return;
  }
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x60);
    uVar1 = *(undefined4 *)param_4[1];
    break;
  case 1:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x60);
    uVar1 = 0;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00010082ddec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x68))();
    return;
  case 3:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x70);
    goto LAB_10082de0e;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00010082de01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x78))();
    return;
  case 5:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x80);
LAB_10082de0e:
                    /* WARNING: Could not recover jumptable at 0x00010082de1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4[1],param_4[2]);
    return;
  default:
    goto switchD_10082ddb1_default;
  }
                    /* WARNING: Could not recover jumptable at 0x00010082dde1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar1);
  return;
}

