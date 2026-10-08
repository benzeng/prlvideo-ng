
void FUN_100c4b3f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) != 0) {
      FUN_100c266b0();
    }
    if (*(long *)(lVar1 + 0x38) != 0) {
      FUN_100bf3910();
    }
    FUN_100bf3910(lVar1);
    return;
  }
  return;
}

