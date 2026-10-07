
void FUN_1000b1f90(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)(param_1 + 0x10d8);
  do {
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x10d8);
    bVar3 = uVar2 == uVar1;
    if (bVar3) {
      *(uint *)(param_1 + 0x10d8) = param_2 | uVar2;
      uVar1 = uVar2;
    }
    uVar2 = uVar1;
    UNLOCK();
  } while (!bVar3);
  return;
}

