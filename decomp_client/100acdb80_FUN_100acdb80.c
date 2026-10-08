
undefined8 FUN_100acdb80(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x58);
  QMutex::unlock();
  if (iVar1 == 1) {
    uVar2 = FUN_100ad9180(*(undefined8 *)(param_1 + 0x78),param_2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

