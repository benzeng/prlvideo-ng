
void FUN_10054a0f0(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f2c30;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  pQVar1 = *(QArrayData **)(param_1 + 0x30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10054a146;
      pQVar1 = *(QArrayData **)(param_1 + 0x30);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10054a146:
  QObject::~QObject(param_1);
  return;
}

