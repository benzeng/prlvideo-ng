
void FUN_1003b5250(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = param_1;
  param_1[2] = param_1;
  ___bzero(param_1 + 3,0x8030);
  return;
}

