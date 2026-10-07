
int FUN_100285000(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = 0;
  bVar3 = DAT_1011b89e0 != 0;
  if (bVar3) {
    iVar1 = *(int *)(DAT_1011b89e0 + 0x3a100);
  }
  uVar2 = (uint)bVar3;
  if (DAT_1011b89e8 != 0) {
    uVar2 = bVar3 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b89e8 + 0x3a100);
  }
  if (DAT_1011b89f0 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b89f0 + 0x3a100);
  }
  if (DAT_1011b89f8 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b89f8 + 0x3a100);
  }
  if (DAT_1011b8a00 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b8a00 + 0x3a100);
  }
  if (DAT_1011b8a08 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b8a08 + 0x3a100);
  }
  if (DAT_1011b8a10 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b8a10 + 0x3a100);
  }
  if (DAT_1011b8a18 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b8a18 + 0x3a100);
  }
  if (DAT_1011b8a20 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b8a20 + 0x3a100);
  }
  if (DAT_1011b8a28 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b8a28 + 0x3a100);
  }
  if (DAT_1011b8a30 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b8a30 + 0x3a100);
  }
  if (DAT_1011b8a38 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b8a38 + 0x3a100);
  }
  if (DAT_1011b8a40 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b8a40 + 0x3a100);
  }
  if (DAT_1011b8a48 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b8a48 + 0x3a100);
  }
  if (DAT_1011b8a50 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b8a50 + 0x3a100);
  }
  if (DAT_1011b8a58 != 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + *(int *)(DAT_1011b8a58 + 0x3a100);
  }
  return (iVar1 + 2) * uVar2;
}

