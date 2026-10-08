
void FUN_100be2de0(long param_1)

{
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_100c66520();
    FUN_100bf3910(*(undefined8 *)(param_1 + 0xd0));
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_100c66520();
    FUN_100bf3910(*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_100cb4280();
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_100cb4280();
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  return;
}

