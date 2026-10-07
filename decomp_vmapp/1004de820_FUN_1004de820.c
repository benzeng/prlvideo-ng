
void FUN_1004de820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc3698;
  if ((long *)param_1[4] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004de83b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[4] + 8))();
    return;
  }
  return;
}

