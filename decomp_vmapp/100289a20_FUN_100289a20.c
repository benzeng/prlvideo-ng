
void FUN_100289a20(long param_1,long param_2)

{
  if ((*(uint *)(param_1 + 0x1084) & 0xf0000000) == 0x20000000) {
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0x708;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(byte **)(param_2 + 0x88) + 8);
    *(undefined2 *)(param_2 + 8) = 1;
    *(undefined1 *)(param_2 + 0xf) = 0x80;
    *(undefined4 *)(param_2 + 0x1c) = 10;
    *(uint *)(param_2 + 0x24) = (uint)**(byte **)(param_2 + 0x88);
  }
  return;
}

