
uint FUN_1003fea50(long param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  
  lVar3 = *(long *)(param_1 + 0x830);
  uVar4 = *(uint *)(lVar3 + 0x10);
  do {
    puVar1 = (uint *)(lVar3 + 0x10);
    LOCK();
    uVar2 = *puVar1;
    bVar5 = uVar4 == uVar2;
    if (bVar5) {
      *puVar1 = uVar4 & 0xfffffffe;
      uVar2 = uVar4;
    }
    uVar4 = uVar2;
    UNLOCK();
  } while (!bVar5);
  return uVar4 & 1;
}

