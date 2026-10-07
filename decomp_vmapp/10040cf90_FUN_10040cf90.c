
void FUN_10040cf90(long param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 8) = 0x96c70636d;
  *(undefined4 *)(param_1 + 0x20) = 0x20;
  *(undefined4 *)(param_1 + 0x14) = 1;
  iVar1 = (*(uint *)(param_1 + 0x1c) & 0x7ffffff) << 2;
  *(int *)(param_1 + 0x18) = iVar1;
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}

