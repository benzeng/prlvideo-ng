
void FUN_100380a30(long param_1,int param_2)

{
  (*DAT_1011c5b80)(1,param_1 + 0xc);
  (*DAT_1011c5e90)(1,param_1 + 0xc);
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 == 0x84f5) {
    if (*(int *)(param_1 + 0x38) != 3) {
      *(undefined4 *)(param_1 + 0x38) = 3;
      *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 2;
    }
    if (*(int *)(param_1 + 0x3c) != 3) {
      *(undefined4 *)(param_1 + 0x3c) = 3;
      *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 4;
    }
  }
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 3;
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0xfff;
  return;
}

