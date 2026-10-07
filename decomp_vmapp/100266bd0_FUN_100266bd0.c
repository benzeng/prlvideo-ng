
void FUN_100266bd0(undefined8 *param_1)

{
  QString *pQVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  
  *param_1 = &PTR_FUN_100baf1e0;
  pQVar1 = (QString *)(param_1 + 0x23);
  QFile::remove(pQVar1);
  pQVar2 = pQVar1->field0_0x0;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100266c24;
      pQVar2 = pQVar1->field0_0x0;
    }
    QArrayData::deallocate((QArrayData *)pQVar2,2,8);
  }
LAB_100266c24:
  QMutex::~QMutex((QMutex *)(param_1 + 0x21));
  *param_1 = &PTR_FUN_100baf140;
  CVmParallelPort::~CVmParallelPort((CVmParallelPort *)(param_1 + 1));
  return;
}

