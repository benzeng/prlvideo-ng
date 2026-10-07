
void FUN_100289a90(long param_1,long param_2)

{
  if ((*(uint *)(param_1 + 0x1084) & 0xf0000000) == 0x20000000) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0xb) = 9;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(long *)(param_2 + 0x88) + 8);
    *(undefined1 *)(param_2 + 10) = 5;
  }
  return;
}

