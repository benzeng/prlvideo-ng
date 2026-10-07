
void FUN_100268510(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_100bbe480;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bbe500;
  QObject::setParent(*(QObject **)(param_1 + 0x130));
  QObject::deleteLater();
  pQVar1 = *(QArrayData **)(param_1 + 0x118);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100268586;
      pQVar1 = *(QArrayData **)(param_1 + 0x118);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100268586:
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100baf140;
  CVmParallelPort::~CVmParallelPort((CVmParallelPort *)(param_1 + 0x18));
  QObject::~QObject(param_1);
  return;
}

