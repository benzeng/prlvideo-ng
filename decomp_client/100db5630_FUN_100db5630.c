
void FUN_100db5630(long *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  (**(code **)(*param_1 + 0xd0))();
                    /* WARNING: Could not recover jumptable at 0x000100db5671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0xa0))((long *)param_1[2],param_2,param_3,param_4);
  return;
}

