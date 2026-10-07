
void FUN_1008ca690(long param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 1) != 0)) {
    if ((*(uint *)(param_1 + 8) & 2) != 0) {
      FUN_10081e1a0(*(undefined8 *)(param_1 + 0x18));
      FUN_10081e1a0(*(undefined8 *)(param_1 + 0x20));
    }
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

