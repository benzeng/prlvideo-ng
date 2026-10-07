
void FUN_1000f6080(long *param_1,QString *param_2)

{
  QArrayData *pQVar1;
  long lVar2;
  QArrayData *pQVar3;
  char cVar4;
  QArrayData *local_c0;
  QArrayData *local_b0;
  QString local_a8;
  QFileInfo local_a0 [8];
  QArrayData *local_98;
  undefined4 local_90;
  QString local_88;
  undefined8 local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QFileInfo local_60 [8];
  QDir local_58 [8];
  QTypedArrayData<unsigned_short> *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  if (2 < DAT_1011b55f8) {
    local_50 = param_2->field0_0x0;
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","vm",3,"CMonitorDumpBuilder::Create(%s)",local_48 + *(long *)(local_48 + 0x10))
    ;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000f613a;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1000f613a:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000f616a;
      }
      QArrayData::deallocate((QArrayData *)local_50,2,8);
    }
  }
LAB_1000f616a:
  cVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  if (cVar4 == '\0') {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",1,"CMonitorDumpBuilder::Create() not initialized");
    }
    goto LAB_1000f65c0;
  }
  QDir::QDir(local_58,param_2);
  local_68.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("monitor.dmp",0xb);
  QFileInfo::QFileInfo(local_60,local_58,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f61e1;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1000f61e1:
  QFileInfo::absoluteFilePath();
  QString::operator=((QString *)(param_1 + 0x179d),&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f6232;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1000f6232:
  local_80 = QDate::currentDate();
  QDate::toString(&local_78,&local_80,1);
  local_90 = QTime::currentTime();
  local_98 = (QArrayData *)QString::fromAscii_helper("-hhmmss",7);
  QTime::toString(&local_88);
  QString::append(&local_78);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f62c7;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1000f62c7:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f62fd;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1000f62fd:
  QString::fromUtf8_helper((char *)&local_40,0x9e361d);
  QString::append(&local_78);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f634f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000f634f:
  QFileInfo::QFileInfo(local_a0,local_58,&local_78);
  QFileInfo::absoluteFilePath();
  QString::operator=((QString *)(param_1 + 0x179c),&local_a8);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f63c3;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1000f63c3:
  if (2 < DAT_1011b55f8) {
    pQVar1 = (QArrayData *)((QString *)(param_1 + 0x179d))->field0_0x0;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    lVar2 = *(long *)(local_b0 + 0x10);
    pQVar3 = (QArrayData *)((QString *)(param_1 + 0x179c))->field0_0x0;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","vm",3,"CMonitorDumpBuilder::Create() full %s, mini %s",local_b0 + lVar2,
                  local_c0 + *(long *)(local_c0 + 0x10));
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000f6499;
      }
      QArrayData::deallocate(local_c0,1,8);
    }
LAB_1000f6499:
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000f64cf;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_1000f64cf:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000f6505;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_1000f6505:
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000f653b;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
LAB_1000f653b:
  (**(code **)(*param_1 + 0x20))(param_1);
  QFileInfo::~QFileInfo(local_a0);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f6584;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1000f6584:
  QFileInfo::~QFileInfo(local_60);
  QDir::~QDir(local_58);
LAB_1000f65c0:
  QMutex::unlock();
  return;
}

