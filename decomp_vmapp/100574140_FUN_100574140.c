
void FUN_100574140(long *param_1)

{
  char cVar1;
  undefined1 local_40 [24];
  undefined4 local_28;
  code *local_20;
  long *local_18;
  
  if (((long *)param_1[0x242] != (long *)0x0) && (param_1[0x243] != 0)) {
    cVar1 = (**(code **)(*(long *)param_1[0x242] + 0x48))();
    if (cVar1 == '\0') {
      local_20 = FUN_1005740f0;
      local_28 = 0;
      local_18 = param_1;
      cVar1 = (**(code **)(*(long *)param_1[0x242] + 0x18))((long *)param_1[0x242],local_40);
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 0x310))(param_1);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100574178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1);
  return;
}

