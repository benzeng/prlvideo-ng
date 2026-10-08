
void FUN_100c42be0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      FUN_100c36170();
    }
    FUN_100bf3910(plVar1);
    return;
  }
  return;
}

