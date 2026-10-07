
void FUN_1008679e0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      FUN_10085af70();
    }
    FUN_10081e1a0(plVar1);
    return;
  }
  return;
}

