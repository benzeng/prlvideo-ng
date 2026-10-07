
undefined8 FUN_10010b210(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
  }
  LOCK();
  uVar1 = **(uint **)(lVar3 + 0x48);
  **(uint **)(lVar3 + 0x48) = 0xffffffff;
  UNLOCK();
  if (uVar1 < 3) {
    *(uint *)(*(long *)(lVar3 + 0x48) + 0x10) = uVar1;
    *(uint *)(lVar3 + 0x50) = uVar1;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50);
  }
  lVar3 = *(long *)(lVar3 + 0x58 + (long)(int)uVar1 * 8);
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
  }
  return uVar2;
}

