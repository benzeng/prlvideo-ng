
bool FUN_100892a00(long param_1)

{
  if (param_1 != 0) {
    FUN_10088ae30(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return param_1 != 0;
}

