
void FUN_10080a290(long param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_10088bc70(*(undefined8 *)(param_1 + 0x30));
    FUN_10088ae30(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10081e1a0();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10081e1a0();
  }
  FUN_10081e1a0(param_1);
  return;
}

