
void FUN_1004319d0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0x280;
  *(undefined4 *)(param_1 + 0xc) = 400;
  *(undefined4 *)(param_1 + 0x10) = 8;
  ___bzero(param_1 + 0x24,0x400);
  return;
}

