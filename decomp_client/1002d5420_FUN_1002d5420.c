
void FUN_1002d5420(long *param_1,undefined8 param_2,undefined8 param_3,bool *param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  uVar1 = QVariant::toUInt(param_4);
                    /* WARNING: Could not recover jumptable at 0x0001002d544a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}

