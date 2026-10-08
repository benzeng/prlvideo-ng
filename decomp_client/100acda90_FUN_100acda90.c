
undefined8 FUN_100acda90(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x58);
  QMutex::unlock();
  if (iVar1 == 1) {
    uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x78) + 0x9d8) + 0x80))();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

