
void FUN_10069a400(long param_1)

{
  char *pcVar1;
  
  FUN_1008e3970("","dimg",0,"CStructImage:");
  if (*(char *)(param_1 + 0x28) == '\0') {
    pcVar1 = "no";
  }
  else {
    pcVar1 = "yes";
  }
  FUN_1008e3970("","dimg",0,"Is initialized: %s",pcVar1);
  FUN_1008e3970("","dimg",0,"Maximum file size: %llu bytes",*(undefined8 *)(param_1 + 0x30));
  FUN_1008e3970("","dimg",0,"Last size for rollback: %llu bytes",*(undefined8 *)(param_1 + 0x18090))
  ;
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010069a4b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}

