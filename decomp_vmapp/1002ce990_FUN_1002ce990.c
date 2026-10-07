
uint FUN_1002ce990(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  
  uVar3 = DAT_1011c565c;
  lVar5 = *(long *)(param_1 + 0x40);
  if ((*(byte *)(lVar5 + 0x1020) & 0x30) != 0) {
    uVar4 = *(uint *)(lVar5 + 0x202c);
    do {
      LOCK();
      uVar2 = *(uint *)(lVar5 + 0x202c);
      bVar6 = uVar4 == uVar2;
      if (bVar6) {
        *(uint *)(lVar5 + 0x202c) = uVar4 & 0xfffffff7;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      UNLOCK();
    } while (!bVar6);
    lVar5 = *(long *)(param_1 + 0x40);
  }
  uVar4 = *(uint *)(lVar5 + 0x202c);
  do {
    LOCK();
    uVar2 = *(uint *)(lVar5 + 0x202c);
    bVar6 = uVar4 == uVar2;
    if (bVar6) {
      *(uint *)(lVar5 + 0x202c) = uVar4 | 1;
      uVar2 = uVar4;
    }
    uVar4 = uVar2;
    UNLOCK();
  } while (!bVar6);
  FUN_1002ce770(param_1);
  lVar5 = *(long *)(param_1 + 0x40);
  uVar4 = *(uint *)(lVar5 + 0x202c);
  do {
    puVar1 = (uint *)(lVar5 + 0x202c);
    LOCK();
    uVar2 = *puVar1;
    bVar6 = uVar4 == uVar2;
    if (bVar6) {
      *puVar1 = uVar4 & 0xfffffffe;
      uVar2 = uVar4;
    }
    uVar4 = uVar2;
    UNLOCK();
  } while (!bVar6);
  FUN_1002cc7e0(param_1);
  uVar4 = FUN_1002c8690(param_1);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  return uVar4;
}

