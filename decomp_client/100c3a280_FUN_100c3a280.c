
void FUN_100c3a280(long param_1)

{
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_100c33190();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_100c26640();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  FUN_100c37b00(param_1);
  return;
}

