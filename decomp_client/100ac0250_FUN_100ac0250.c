
void FUN_100ac0250(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10223a080;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10223a0f8;
  FUN_100ababd0(param_1 + 0x10);
  _CGImageRelease(*(undefined8 *)(param_1 + 0x50));
  if (*(long *)(param_1 + 0x58) != 0) {
    _CGImageRelease();
  }
  FUN_100ac1f60(param_1 + 0x60);
  pQVar1 = *(QArrayData **)(param_1 + 0x48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100ac02d1;
      pQVar1 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100ac02d1:
  FUN_100aba8d0(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

