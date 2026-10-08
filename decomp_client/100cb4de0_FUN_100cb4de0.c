
void FUN_100cb4de0(int *param_1)

{
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    FUN_100bf3910(*(undefined8 *)(param_1 + 2));
    if (*param_1 == 3) {
      FUN_100bf3910(*(undefined8 *)(param_1 + 8));
      FUN_100bf3910(*(undefined8 *)(param_1 + 10));
      FUN_100bf3910(*(undefined8 *)(param_1 + 0xc));
    }
  }
  FUN_100bf3910(param_1);
  return;
}

