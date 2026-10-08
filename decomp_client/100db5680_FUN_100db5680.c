
void FUN_100db5680(long param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  (**(code **)(*(long *)(param_1 + -8) + 0xd0))(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x000100db56c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xa0))(*(long **)(param_1 + 8),param_2,param_3,param_4);
  return;
}

