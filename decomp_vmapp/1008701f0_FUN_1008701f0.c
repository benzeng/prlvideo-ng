
void FUN_1008701f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) != 0) {
      FUN_10084b4b0();
    }
    if (*(long *)(lVar1 + 0x38) != 0) {
      FUN_10081e1a0();
    }
    FUN_10081e1a0(lVar1);
    return;
  }
  return;
}

