
void FUN_100608df0(undefined2 *param_1)

{
  *param_1 = 2;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  ___bzero(param_1 + 0x28,0xa8);
  *(undefined4 *)(param_1 + 0x18) = 0x54584554;
  *(undefined4 *)(param_1 + 0x1a) = 0x482b4c58;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  return;
}

