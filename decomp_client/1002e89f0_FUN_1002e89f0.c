
void FUN_1002e89f0(long *param_1)

{
  undefined *puVar1;
  QTextStream *pQVar2;
  QArrayData *local_78;
  QTextStream *local_70;
  QDebug local_68 [8];
  QTextStream *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar2 = operator_new(0x50);
  QTextStream::QTextStream(pQVar2,&local_58,2);
  *(undefined **)(pQVar2 + 0x10) = puVar1;
  *(undefined4 *)(pQVar2 + 0x18) = 1;
  *(undefined4 *)(pQVar2 + 0x1c) = 0;
  pQVar2[0x20] = (QTextStream)0x1;
  pQVar2[0x21] = (QTextStream)0x0;
  *(undefined4 *)(pQVar2 + 0x28) = 2;
  *(undefined8 *)(pQVar2 + 0x44) = 0;
  *(undefined8 *)(pQVar2 + 0x3c) = 0;
  *(undefined8 *)(pQVar2 + 0x34) = 0;
  *(undefined8 *)(pQVar2 + 0x2c) = 0;
  local_60 = pQVar2;
  QString::fromUtf8_helper((char *)&local_50,0x1de5e81);
  QTextStream::operator<<(pQVar2,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002e8abf;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1002e8abf:
  if (local_60[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_60,' ');
  }
  pQVar2 = local_60;
  QString::fromUtf8_helper((char *)&local_48,0x1de5dbf);
  QTextStream::operator<<(pQVar2,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002e8b2b;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002e8b2b:
  if (local_60[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_60,' ');
  }
  QDebug::putString((QChar *)&local_60,*(long *)(*param_1 + 0x10) + *param_1);
  if (local_60[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_60,' ');
  }
  pQVar2 = local_60;
  QString::fromUtf8_helper((char *)&local_40,0x1de5e94);
  QTextStream::operator<<(pQVar2,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002e8bc1;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002e8bc1:
  if (local_60[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_60,' ');
  }
  QDebug::putString((QChar *)&local_60,*(long *)(param_1[1] + 0x10) + param_1[1]);
  if (local_60[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_60,' ');
  }
  pQVar2 = local_60;
  QString::fromUtf8_helper((char *)&local_38,0x1de5ea1);
  QTextStream::operator<<(pQVar2,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002e8c58;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1002e8c58:
  if (local_60[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_60,' ');
  }
  QDebug::putString((QChar *)&local_60,*(long *)(param_1[2] + 0x10) + param_1[2]);
  if (local_60[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_60,' ');
  }
  pQVar2 = local_60;
  QString::fromUtf8_helper((char *)&local_30,0x1de5eb2);
  QTextStream::operator<<(pQVar2,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002e8cef;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1002e8cef:
  if (local_60[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_60,' ');
  }
  local_70 = local_60;
  *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + 1;
  operator<<(local_68,&local_70,param_1 + 3);
  QDebug::~QDebug(local_68);
  QDebug::~QDebug((QDebug *)&local_70);
  QString::toUtf8();
  if ((1 < *(uint *)local_78) || (*(long *)(local_78 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_78,*(uint *)(local_78 + 4) + 1,*(uint *)(local_78 + 8) >> 0x1f);
  }
  FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,"%s",local_78 + *(long *)(local_78 + 0x10));
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002e8dbe;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_1002e8dbe:
  QDebug::~QDebug((QDebug *)&local_60);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}

