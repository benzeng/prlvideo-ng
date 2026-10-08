
void FUN_100a2bbb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102280f48;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100a2bbcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 0x20))();
    return;
  }
  return;
}

