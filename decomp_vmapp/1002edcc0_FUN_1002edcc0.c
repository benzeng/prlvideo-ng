
uint FUN_1002edcc0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  do {
    uVar1 = *(uint *)(param_1 + 0x1c);
    uVar3 = uVar1 + 1;
    if (uVar1 == 0xffff) {
      uVar3 = 1;
    }
    LOCK();
    uVar2 = *(uint *)(param_1 + 0x1c);
    if (uVar1 == uVar2) {
      *(uint *)(param_1 + 0x1c) = uVar3;
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  return uVar1 & 0xffff;
}

