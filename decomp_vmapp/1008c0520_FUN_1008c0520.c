
void FUN_1008c0520(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1[1] != 0) {
    FUN_100885590(plVar1[1],FUN_1008c0e80);
  }
  if (*plVar1 != 0) {
    FUN_10087cd20();
  }
  FUN_10081e1a0(plVar1);
  return;
}

