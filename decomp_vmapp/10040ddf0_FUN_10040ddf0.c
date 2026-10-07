
void FUN_10040ddf0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  *(undefined2 *)(param_1 + 0x30) = 0x101;
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(lVar3 + 8);
  if (uVar1 != 0) {
    lVar4 = 0;
    do {
      uVar2 = *(uint *)(lVar3 + 0x10 + lVar4 * 4);
      bVar5 = *(int *)(lVar3 + 0x30 + lVar4 * 4) != 0;
      if ((ulong)uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x10 + lVar4 * 4) = 0x3f800000;
      }
      else {
        *(undefined1 *)(param_1 + 0x31) = 0;
        if (uVar2 < 0x1f) {
          *(undefined4 *)(param_1 + 0x10 + lVar4 * 4) = (&DAT_100b40a90)[uVar2];
        }
        else {
          *(undefined4 *)(param_1 + 0x10 + lVar4 * 4) = 0;
          bVar5 = true;
        }
      }
      if (*(char *)(param_1 + 0x30) == '\0') {
        bVar5 = false;
      }
      *(bool *)(param_1 + 0x30) = bVar5;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < uVar1);
  }
  return;
}

