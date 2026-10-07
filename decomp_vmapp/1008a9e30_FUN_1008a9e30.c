
void FUN_1008a9e30(long param_1)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 8) & 2) != 0)) {
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10081e1a0();
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10081e1a0();
    }
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

