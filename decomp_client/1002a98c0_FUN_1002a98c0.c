
undefined8 FUN_1002a98c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  QFutureInterfaceBase *pQVar2;
  undefined8 uVar3;
  
  pQVar2 = operator_new(0x30);
  QFutureInterfaceBase::QFutureInterfaceBase(pQVar2,0);
  *(undefined ***)pQVar2 = &PTR_FUN_1022729d8;
  QFutureInterfaceBase::refT();
  *(undefined4 *)(pQVar2 + 0x18) = 0;
  *(undefined ***)pQVar2 = &PTR_FUN_102272a88;
  *(undefined ***)(pQVar2 + 0x10) = &PTR_FUN_102272ab8;
  *(undefined8 *)(pQVar2 + 0x20) = param_2;
  piVar1 = (int *)*param_3;
  *(int **)(pQVar2 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar3 = QThreadPool::globalInstance();
  FUN_1002aa950(param_1,pQVar2,uVar3);
  return param_1;
}

