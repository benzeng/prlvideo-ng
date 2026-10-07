
void FUN_10070aef0(long param_1,undefined4 param_2)

{
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 8;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010070af05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x48))();
    return;
  }
  return;
}

