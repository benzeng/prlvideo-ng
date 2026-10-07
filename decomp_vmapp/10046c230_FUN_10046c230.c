
void FUN_10046c230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_100473400();
  (**(code **)(*plVar1 + 0x60))(plVar1);
  FUN_10046c2a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010046c271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1);
  return;
}

