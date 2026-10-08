
void FUN_10081df60(long *param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
    uVar1 = *(undefined4 *)param_4[1];
    break;
  case 1:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
    uVar1 = 0x80000275;
    break;
  case 2:
    FUN_100292e90(param_1,*(undefined4 *)param_4[1]);
    return;
  case 3:
    FUN_100292ff0();
    return;
  case 4:
    uVar1 = FUN_1002929d0();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010081dfa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}

