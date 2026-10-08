
void FUN_100cd0350(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102259920;
  QObject::disconnect(*(QObject **)(param_1 + 0x50),(char *)0x0,(QObject *)0x0,(char *)0x0);
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  pQVar1 = *(QArrayData **)(param_1 + 0x38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100cd03c1;
      pQVar1 = *(QArrayData **)(param_1 + 0x38);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100cd03c1:
  QObject::~QObject(param_1);
  return;
}

