
void FUN_100402b10(long param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  uint local_14;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if ((*(uint *)(param_1 + 8) & 0xfc) != 0) {
    local_14 = *(uint *)(param_1 + 8) & 0xfc;
    uVar4 = *(uint *)(lVar3 + 0xc0);
    do {
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0xc0);
      bVar5 = uVar4 == uVar2;
      if (bVar5) {
        *(uint *)(lVar3 + 0xc0) = local_14 | uVar4;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      UNLOCK();
    } while (!bVar5);
    if (*(int *)(lVar3 + 0xc4) == 0) {
      *(undefined4 *)(lVar3 + 0xc4) = *(undefined4 *)(param_1 + 0x28);
    }
  }
  FUN_10070aec0();
  LOCK();
  piVar1 = (int *)(lVar3 + 0x98);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) {
    return;
  }
  FUN_1003fee10(lVar3);
  return;
}

