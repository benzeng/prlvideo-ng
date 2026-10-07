
void FUN_1004050f0(long param_1)

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
    uVar4 = *(uint *)(lVar3 + 0x10);
    do {
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0x10);
      bVar5 = uVar4 == uVar2;
      if (bVar5) {
        *(uint *)(lVar3 + 0x10) = local_14 | uVar4;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      UNLOCK();
    } while (!bVar5);
  }
  FUN_10070aec0();
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_100405140(lVar3);
    return;
  }
  return;
}

