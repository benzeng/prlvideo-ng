
undefined8 * FUN_100673a80(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  QTextStream QVar1;
  long lVar2;
  long lVar3;
  QTextStream *pQVar4;
  QTextStream *local_58;
  QTextStream *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  pQVar4 = (QTextStream *)*param_2;
  QVar1 = pQVar4[0x20];
  pQVar4[0x20] = (QTextStream)0x0;
  QString::fromUtf8_helper((char *)&local_48,0x1e0caa4);
  QTextStream::operator<<(pQVar4,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100673af9;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100673af9:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  lVar2 = *param_3;
  if (*(long *)(lVar2 + 0x10) == 0) {
    pQVar4 = (QTextStream *)*param_2;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x20);
    pQVar4 = (QTextStream *)*param_2;
    if (lVar3 != lVar2 + 8) {
      do {
        QTextStream::operator<<(pQVar4,'(');
        if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
          QTextStream::operator<<((QTextStream *)*param_2,' ');
        }
        QDebug::putString((QChar *)param_2,
                          *(long *)(*(long *)(lVar3 + 0x18) + 0x10) + *(long *)(lVar3 + 0x18));
        pQVar4 = (QTextStream *)*param_2;
        if (pQVar4[0x20] != (QTextStream)0x0) {
          QTextStream::operator<<(pQVar4,' ');
          pQVar4 = (QTextStream *)*param_2;
        }
        QString::fromUtf8_helper((char *)&local_40,0x1eeaa6a);
        QTextStream::operator<<(pQVar4,&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100673be1;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_100673be1:
        pQVar4 = (QTextStream *)*param_2;
        if (pQVar4[0x20] != (QTextStream)0x0) {
          QTextStream::operator<<(pQVar4,' ');
          pQVar4 = (QTextStream *)*param_2;
        }
        *(int *)(pQVar4 + 0x18) = *(int *)(pQVar4 + 0x18) + 1;
        local_58 = pQVar4;
        operator<<((QDebug *)&local_50,(QDebug *)&local_58,lVar3 + 0x20);
        QTextStream::operator<<(local_50,')');
        if (local_50[0x20] != (QTextStream)0x0) {
          QTextStream::operator<<(local_50,' ');
        }
        QDebug::~QDebug((QDebug *)&local_50);
        QDebug::~QDebug((QDebug *)&local_58);
        lVar3 = QMapNodeBase::nextNode();
        pQVar4 = (QTextStream *)*param_2;
      } while (lVar3 != *param_3 + 8);
    }
  }
  QTextStream::operator<<(pQVar4,')');
  pQVar4 = (QTextStream *)*param_2;
  if (pQVar4[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar4,' ');
    pQVar4 = (QTextStream *)*param_2;
  }
  pQVar4[0x20] = QVar1;
  if (QVar1 != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar4,' ');
    pQVar4 = (QTextStream *)*param_2;
  }
  *param_1 = pQVar4;
  *(int *)(pQVar4 + 0x18) = *(int *)(pQVar4 + 0x18) + 1;
  return param_1;
}

