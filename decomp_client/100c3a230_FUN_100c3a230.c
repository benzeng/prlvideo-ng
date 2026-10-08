
void FUN_100c3a230(long param_1)

{
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_100c33190();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_100c266b0();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  FUN_100c37ac0(param_1);
  return;
}

