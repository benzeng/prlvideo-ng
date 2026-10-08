
long * FUN_1000742b0(long *param_1,long *param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  QArrayData *pQVar3;
  QTextStream *pQVar4;
  QTextStream *local_b8;
  QDebug local_b0 [8];
  QTextStream *local_a8;
  QDebug local_a0 [8];
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  pQVar4 = (QTextStream *)*param_2;
  pQVar4[0x20] = (QTextStream)0x0;
  QString::fromUtf8_helper((char *)&local_80,0x1eeaa60);
  QTextStream::operator<<(pQVar4,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100074328;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100074328:
  pQVar4 = (QTextStream *)*param_2;
  if (pQVar4[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar4,' ');
    pQVar4 = (QTextStream *)*param_2;
  }
  pQVar4[0x20] = (QTextStream)0x0;
  QString::fromUtf8_helper((char *)&local_78,0x1db970b);
  QTextStream::operator<<(pQVar4,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007439a;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10007439a:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QString::toLatin1();
  pQVar3 = local_88 + *(long *)(local_88 + 0x10);
  pQVar4 = (QTextStream *)*param_2;
  if (pQVar3 != (QArrayData *)0x0) {
    _strlen((char *)pQVar3);
  }
  QString::fromUtf8_helper((char *)&local_70,(int)pQVar3);
  QTextStream::operator<<(pQVar4,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100074420;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100074420:
  pQVar4 = (QTextStream *)*param_2;
  if (pQVar4[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar4,' ');
    pQVar4 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_68,0x1eeaa60);
  QTextStream::operator<<(pQVar4,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007448c;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10007448c:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000744d0;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_1000744d0:
  pQVar4 = (QTextStream *)*param_2;
  pQVar4[0x20] = (QTextStream)0x0;
  QString::fromUtf8_helper((char *)&local_60,0x1db9720);
  QTextStream::operator<<(pQVar4,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007452b;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10007452b:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  FUN_100060bb0();
  FUN_100062330(&local_98,*(undefined4 *)(param_3 + 8));
  QString::toLatin1();
  pQVar3 = local_90 + *(long *)(local_90 + 0x10);
  pQVar4 = (QTextStream *)*param_2;
  if (pQVar3 != (QArrayData *)0x0) {
    _strlen((char *)pQVar3);
  }
  QString::fromUtf8_helper((char *)&local_58,(int)pQVar3);
  QTextStream::operator<<(pQVar4,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000745cf;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1000745cf:
  pQVar4 = (QTextStream *)*param_2;
  if (pQVar4[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar4,' ');
    pQVar4 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_50,0x1eeaa60);
  QTextStream::operator<<(pQVar4,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007463b;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10007463b:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100074685;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100074685:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000746bb;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1000746bb:
  pQVar4 = (QTextStream *)*param_2;
  pQVar4[0x20] = (QTextStream)0x0;
  QString::fromUtf8_helper((char *)&local_48,0x1db9735);
  QTextStream::operator<<(pQVar4,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100074716;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100074716:
  local_a8 = (QTextStream *)*param_2;
  if (local_a8[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_a8,' ');
    local_a8 = (QTextStream *)*param_2;
  }
  *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + 1;
  FUN_1000761f0(local_a0,&local_a8,param_3 + 0x10);
  QDebug::~QDebug(local_a0);
  QDebug::~QDebug((QDebug *)&local_a8);
  pQVar4 = (QTextStream *)*param_2;
  pQVar4[0x20] = (QTextStream)0x0;
  QString::fromUtf8_helper((char *)&local_40,0x1db974a);
  QTextStream::operator<<(pQVar4,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000747c2;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1000747c2:
  local_b8 = (QTextStream *)*param_2;
  if (local_b8[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_b8,' ');
    local_b8 = (QTextStream *)*param_2;
  }
  *(int *)(local_b8 + 0x18) = *(int *)(local_b8 + 0x18) + 1;
  FUN_1000761f0(local_b0,&local_b8,param_3 + 0x18);
  QDebug::~QDebug(local_b0);
  QDebug::~QDebug((QDebug *)&local_b8);
  pQVar4 = (QTextStream *)*param_2;
  pQVar4[0x20] = (QTextStream)0x1;
  QTextStream::operator<<(pQVar4,' ');
  lVar2 = *param_2;
  *param_1 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_1;
}

