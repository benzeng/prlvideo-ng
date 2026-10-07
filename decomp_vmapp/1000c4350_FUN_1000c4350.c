
void FUN_1000c4350(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = param_4;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_2;
  ___bzero(param_1 + 6,0x438);
  return;
}

