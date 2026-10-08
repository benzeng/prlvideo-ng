
void FUN_10068ce40(undefined8 *param_1,long *param_2,long *param_3)

{
  QTextStream QVar1;
  long lVar2;
  QTextStream *pQVar3;
  long lVar4;
  long local_50;
  QDebug local_48 [8];
  QString local_40;
  undefined1 local_31;
  
  pQVar3 = (QTextStream *)*param_2;
  QVar1 = pQVar3[0x20];
  pQVar3[0x20] = (QTextStream)0x0;
  QTextStream::operator<<(pQVar3,'(');
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  lVar2 = *param_3;
  if (*(int *)(lVar2 + 8) < *(int *)(lVar2 + 0xc)) {
    lVar4 = 0;
    do {
      if ((int)lVar4 != 0) {
        pQVar3 = (QTextStream *)*param_2;
        QString::fromUtf8_helper((char *)&local_40,0x1eeaa6a);
        QTextStream::operator<<(pQVar3,&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10068cf17;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_10068cf17:
        if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
          QTextStream::operator<<((QTextStream *)*param_2,' ');
        }
        lVar2 = *param_3;
      }
      local_50 = *param_2;
      *(int *)(local_50 + 0x18) = *(int *)(local_50 + 0x18) + 1;
      FUN_10068d0e0(local_48,(QDebug *)&local_50,
                    *(undefined8 *)(lVar2 + 0x10 + (*(int *)(lVar2 + 8) + lVar4) * 8));
      QDebug::~QDebug(local_48);
      QDebug::~QDebug((QDebug *)&local_50);
      lVar4 = lVar4 + 1;
      lVar2 = *param_3;
    } while (lVar4 < (long)*(int *)(lVar2 + 0xc) - (long)*(int *)(lVar2 + 8));
  }
  QTextStream::operator<<((QTextStream *)*param_2,')');
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  pQVar3[0x20] = QVar1;
  if (QVar1 != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  *param_1 = pQVar3;
  *(int *)(pQVar3 + 0x18) = *(int *)(pQVar3 + 0x18) + 1;
  return;
}

