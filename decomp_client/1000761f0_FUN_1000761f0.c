
undefined8 * FUN_1000761f0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  QTextStream QVar1;
  Node *pNVar2;
  Node *pNVar3;
  int iVar4;
  long *plVar5;
  QTextStream *pQVar6;
  QTextStream *local_58;
  QTextStream *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  pQVar6 = (QTextStream *)*param_2;
  QVar1 = pQVar6[0x20];
  pQVar6[0x20] = (QTextStream)0x0;
  QString::fromUtf8_helper((char *)&local_48,0x1db9877);
  QTextStream::operator<<(pQVar6,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007626a;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10007626a:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  pNVar2 = (Node *)*param_3;
  iVar4 = *(int *)(pNVar2 + 0x20);
  if (iVar4 != 0) {
    plVar5 = *(long **)(pNVar2 + 8);
    do {
      pNVar3 = (Node *)*plVar5;
      if (pNVar3 != pNVar2) {
        pQVar6 = (QTextStream *)*param_2;
        if (pNVar3 == pNVar2) goto LAB_1000763f5;
        goto LAB_1000762d0;
      }
      iVar4 = iVar4 + -1;
      plVar5 = plVar5 + 1;
    } while (iVar4 != 0);
  }
  pQVar6 = (QTextStream *)*param_2;
LAB_1000763f5:
  QTextStream::operator<<(pQVar6,')');
  pQVar6 = (QTextStream *)*param_2;
  if (pQVar6[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar6,' ');
    pQVar6 = (QTextStream *)*param_2;
  }
  pQVar6[0x20] = QVar1;
  if (QVar1 != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar6,' ');
    pQVar6 = (QTextStream *)*param_2;
  }
  *param_1 = pQVar6;
  *(int *)(pQVar6 + 0x18) = *(int *)(pQVar6 + 0x18) + 1;
  return param_1;
LAB_1000762d0:
  do {
    QTextStream::operator<<(pQVar6,'(');
    if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
      QTextStream::operator<<((QTextStream *)*param_2,' ');
    }
    QDebug::putString((QChar *)param_2,
                      *(long *)(*(long *)(pNVar3 + 0x10) + 0x10) + *(long *)(pNVar3 + 0x10));
    pQVar6 = (QTextStream *)*param_2;
    if (pQVar6[0x20] != (QTextStream)0x0) {
      QTextStream::operator<<(pQVar6,' ');
      pQVar6 = (QTextStream *)*param_2;
    }
    QString::fromUtf8_helper((char *)&local_40,0x1eeaa6a);
    QTextStream::operator<<(pQVar6,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100076375;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100076375:
    pQVar6 = (QTextStream *)*param_2;
    if (pQVar6[0x20] != (QTextStream)0x0) {
      QTextStream::operator<<(pQVar6,' ');
      pQVar6 = (QTextStream *)*param_2;
    }
    *(int *)(pQVar6 + 0x18) = *(int *)(pQVar6 + 0x18) + 1;
    local_58 = pQVar6;
    operator<<((QDebug *)&local_50,(QDebug *)&local_58,pNVar3 + 0x18);
    QTextStream::operator<<(local_50,')');
    if (local_50[0x20] != (QTextStream)0x0) {
      QTextStream::operator<<(local_50,' ');
    }
    QDebug::~QDebug((QDebug *)&local_50);
    QDebug::~QDebug((QDebug *)&local_58);
    pNVar3 = (Node *)QHashData::nextNode(pNVar3);
    pQVar6 = (QTextStream *)*param_2;
  } while (pNVar3 != (Node *)*param_3);
  goto LAB_1000763f5;
}

