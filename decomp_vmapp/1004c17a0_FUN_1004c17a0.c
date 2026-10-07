
undefined8 FUN_1004c17a0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  LOCK();
  lVar1 = *(long *)(param_1 + 0x30);
  if (param_2 == lVar1) {
    *(long *)(param_1 + 0x30) = 0;
    lVar1 = param_2;
  }
  UNLOCK();
  uVar2 = 0xffffffff;
  if (lVar1 == param_2) {
    uVar2 = 0xf0000000;
  }
  return uVar2;
}

