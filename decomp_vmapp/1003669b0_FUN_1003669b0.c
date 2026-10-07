
void FUN_1003669b0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 local_5c;
  
  (*DAT_1011c5770)(*(undefined4 *)(param_1 + 0x234));
  uVar2 = *(uint *)(param_1 + 0x224) & *(uint *)(param_1 + 0x220);
  if (uVar2 != 0) {
    local_5c = 0;
    uVar1 = 0;
    do {
      if ((uVar2 & 1) != 0) {
        lVar3 = (ulong)uVar1 * 0x20;
        iVar4 = *(int *)(param_1 + 0x10 + lVar3);
        if (iVar4 != local_5c) {
          (*DAT_1011c5708)(0x8892,iVar4);
          local_5c = iVar4;
        }
        (*DAT_1011c72b0)(uVar1,*(undefined4 *)(param_1 + 0x20 + lVar3),
                         *(undefined4 *)(param_1 + 0x1c + lVar3),
                         *(undefined1 *)(param_1 + 0x24 + lVar3),
                         *(undefined4 *)(param_1 + 0x18 + lVar3),
                         (long)*(int *)(param_1 + 0x14 + lVar3));
        (*DAT_1011c7200)(uVar1,*(undefined4 *)(param_1 + 0x28 + lVar3));
        (*DAT_1011c5c90)(uVar1);
      }
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 >> 1;
    } while (uVar2 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x230);
  if (uVar2 != 0) {
    iVar4 = 0;
    do {
      if ((uVar2 & 1) != 0) {
        (*DAT_1011c7180)(0,0,0,DAT_100b39678,iVar4);
      }
      iVar4 = iVar4 + 1;
      uVar2 = uVar2 >> 1;
    } while (uVar2 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x228);
  if (uVar2 != 0) {
    uVar1 = 0;
    do {
      if ((uVar2 & 1) != 0) {
        (*DAT_1011c5bd8)(uVar1);
        lVar3 = (ulong)uVar1 * 0x20;
        *(undefined8 *)(param_1 + 0x28 + lVar3) = 0;
        *(undefined8 *)(param_1 + 0x20 + lVar3) = 0;
        *(undefined8 *)(param_1 + 0x18 + lVar3) = 0;
        *(undefined8 *)(param_1 + 0x10 + lVar3) = 0;
      }
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 >> 1;
    } while (uVar2 != 0);
  }
  return;
}

