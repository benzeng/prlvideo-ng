
undefined8 FUN_1000c2c60(long param_1)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar2 = (int)param_1 + 0x70;
  QSemaphore::acquire(iVar2);
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  QSemaphore::release(iVar2);
  pvVar1 = _malloc(0x4a0);
  uVar3 = 0;
  if (pvVar1 != (void *)0x0) {
    ___bzero(pvVar1,0x4a0);
    iVar2 = FUN_1000c2900(param_1,pvVar1);
    if (iVar2 == 0) {
      _free(pvVar1);
    }
    else {
      uVar3 = 1;
      FUN_1000a79f0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),1);
      QWaitCondition::wakeOne();
    }
  }
  return uVar3;
}

