
void FUN_100d8fd80(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QFile local_90 [16];
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QDateTime local_30;
  QDateTime local_28;
  undefined1 local_19;
  
  FUN_100d8f710(&local_60);
  puVar1 = PTR_shared_null_1021e1288;
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_68,&local_70);
  cVar2 = QDir::exists(&local_68);
  QDir::~QDir((QDir *)&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_19 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d8fdf7;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100d8fdf7:
  if (cVar2 == '\0') {
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QDir::QDir((QDir *)&local_78,&local_80);
    QDir::mkpath(&local_78);
    QDir::~QDir((QDir *)&local_78);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_19 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d8fe52;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
  }
LAB_100d8fe52:
  FUN_100d8f8b0(&local_98);
  QFile::QFile(local_90,&local_98);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_19 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d8fea7;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100d8fea7:
  cVar2 = QFile::open(local_90,0x1a);
  if (cVar2 == '\0') goto LAB_100d90177;
  QDateTime::currentDateTime();
  QDateTime::toTimeSpec(&local_30,&local_28,1);
  QDateTime::setTimeSpec(&local_30,0);
  lVar4 = QDateTime::secsTo(&local_30);
  local_38 = (QArrayData *)puVar1;
  iVar5 = (int)(lVar4 / 0x3c);
  iVar3 = -iVar5;
  if (0 < iVar5) {
    iVar3 = iVar5;
  }
  QString::sprintf((char *)&local_38,"%+03d%02d",(ulong)(uint)(iVar5 / 0x3c),
                   (ulong)(uint)(iVar3 % 0x3c));
  local_48 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
  local_58 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_50);
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  QString::arg(&local_a8,&local_40,&local_38,0,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d9000f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d9000f:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_19 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d9003f;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100d9003f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d9006f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d9006f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d9009f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d9009f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d900cf;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d900cf:
  QDateTime::~QDateTime(&local_30);
  QDateTime::~QDateTime(&local_28);
  QString::toUtf8();
  QIODevice::write((char *)local_90);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_19 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d90141;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_100d90141:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_19 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d90177;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100d90177:
  QFile::~QFile(local_90);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return;
}

