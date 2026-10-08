
void FUN_1006f2480(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001006f249d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x1b0))(*(long **)(param_1 + 0x10),2);
    return;
  }
  return;
}

