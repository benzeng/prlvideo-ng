
void FUN_1006f24e0(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0001006f24fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x1b0))(*(long **)(param_1 + 0x10),1);
    return;
  }
  return;
}

