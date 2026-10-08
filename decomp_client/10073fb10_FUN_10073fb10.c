
long * FUN_10073fb10(long *param_1,long *param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  QTextStream *pQVar3;
  QTextStream *local_70;
  QTextStream *local_68;
  QDebug local_60 [8];
  QDebug local_58 [8];
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  pQVar3 = (QTextStream *)*param_2;
  pQVar3[0x20] = (QTextStream)0x0;
  QString::fromUtf8_helper((char *)&local_50,0x1e144f9);
  QTextStream::operator<<(pQVar3,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073fb85;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10073fb85:
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_48,0x1e1450b);
  QTextStream::operator<<(pQVar3,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073fbf3;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10073fbf3:
  local_70 = (QTextStream *)*param_2;
  if (local_70[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_70,' ');
    local_70 = (QTextStream *)*param_2;
  }
  *(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + 1;
  FUN_10073e900(&local_68,&local_70,param_3);
  pQVar3 = local_68;
  QString::fromUtf8_helper((char *)&local_40,0x1e1451c);
  QTextStream::operator<<(pQVar3,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073fc77;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10073fc77:
  if (local_68[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_68,' ');
  }
  *(int *)(local_68 + 0x18) = *(int *)(local_68 + 0x18) + 1;
  FUN_10073f670(local_58,local_60,param_3 + 0x58);
  QDebug::~QDebug(local_58);
  QDebug::~QDebug(local_60);
  QDebug::~QDebug((QDebug *)&local_68);
  QDebug::~QDebug((QDebug *)&local_70);
  pQVar3 = (QTextStream *)*param_2;
  pQVar3[0x20] = (QTextStream)0x1;
  QTextStream::operator<<(pQVar3,' ');
  lVar2 = *param_2;
  *param_1 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_1;
}

