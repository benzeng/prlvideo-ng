
void FUN_100401540(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  FUN_1008e3970("","HddUtils",0,"hdd: cmode %d");
                    /* WARNING: Could not recover jumptable at 0x000100401585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 200))
            (*(long **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x50));
  return;
}

