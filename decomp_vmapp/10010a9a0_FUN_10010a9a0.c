
undefined8 FUN_10010a9a0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  LOCK();
  uVar2 = **(uint **)(param_1 + 0x48);
  **(uint **)(param_1 + 0x48) = 0xffffffff;
  UNLOCK();
  if (uVar2 < 3) {
    *(uint *)(*(long *)(param_1 + 0x48) + 0x10) = uVar2;
    *(uint *)(param_1 + 0x50) = uVar2;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x50);
  }
  lVar1 = *(long *)(param_1 + 0x58 + (long)(int)uVar2 * 8);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar3;
}

