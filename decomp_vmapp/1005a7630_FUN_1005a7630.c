
void FUN_1005a7630(undefined4 param_1,long param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined4 *)(param_2 + 0x20) = param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_2 + 0x18) + 0x188);
                    /* WARNING: Could not recover jumptable at 0x0001005a7649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(long **)(param_2 + 0x18),param_2,param_3,UNRECOVERED_JUMPTABLE);
  return;
}

