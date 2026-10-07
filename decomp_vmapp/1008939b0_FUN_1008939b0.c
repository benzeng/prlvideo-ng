
bool FUN_1008939b0(long param_1)

{
  if (param_1 != 0) {
    FUN_10081e1a0(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return param_1 != 0;
}

