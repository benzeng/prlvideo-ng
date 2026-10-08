
void FUN_100c9baa0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1[1] != 0) {
    FUN_100c60790(plVar1[1],FUN_100c9c400);
  }
  if (*plVar1 != 0) {
    FUN_100c57f20();
  }
  FUN_100bf3910(plVar1);
  return;
}

