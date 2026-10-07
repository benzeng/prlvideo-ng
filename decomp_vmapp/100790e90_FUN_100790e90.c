
undefined8 FUN_100790e90(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 8) = 1;
  }
  else {
    uVar2 = (ulong)uVar1;
  }
  UNLOCK();
  return CONCAT71((int7)(uVar2 >> 8),(int)uVar2 == 0);
}

