
void FUN_1008d85a0(int *param_1)

{
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    FUN_10081e1a0(*(undefined8 *)(param_1 + 2));
    if (*param_1 == 3) {
      FUN_10081e1a0(*(undefined8 *)(param_1 + 8));
      FUN_10081e1a0(*(undefined8 *)(param_1 + 10));
      FUN_10081e1a0(*(undefined8 *)(param_1 + 0xc));
    }
  }
  FUN_10081e1a0(param_1);
  return;
}

