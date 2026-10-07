
void FUN_100262c30(undefined8 *param_1)

{
  QString *pQVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  
  *param_1 = &PTR_FUN_100baeec0;
  param_1[1] = &PTR_metaObject_100baef10;
  *(undefined1 *)(param_1 + 0x25) = 0;
  if (-1 < *(int *)(param_1 + 0x23)) {
    _tcflush(*(int *)(param_1 + 0x23),3);
    _close(*(int *)(param_1 + 0x23));
    *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  }
  pQVar1 = (QString *)(param_1 + 0x24);
  QFile::remove(pQVar1);
  QThread::wait((ulong)(param_1 + 1));
  pQVar2 = pQVar1->field0_0x0;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100262cd2;
      pQVar2 = pQVar1->field0_0x0;
    }
    QArrayData::deallocate((QArrayData *)pQVar2,2,8);
  }
LAB_100262cd2:
  CVmSerialPort::~CVmSerialPort((CVmSerialPort *)(param_1 + 4));
  QThread::~QThread((QThread *)(param_1 + 1));
  return;
}

