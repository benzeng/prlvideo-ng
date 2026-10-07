
void FUN_1004730a0(undefined8 param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x60))(param_2);
  FUN_1004730f0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001004730cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x68))(param_2);
  return;
}

