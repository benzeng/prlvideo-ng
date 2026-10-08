
void FUN_1002f0660(QObject *param_1)

{
  char cVar1;
  QProcess *this;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  long local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FileUtils::tempPath();
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_21 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1de65c7);
  QString::append(&local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002f06e4;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002f06e4:
  QString::operator=((QString *)(param_1 + 0x58),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002f0724;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1002f0724:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002f0754;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002f0754:
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Mount the disk image to %s",
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002f07b6;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1002f07b6:
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_50,&local_58);
  cVar1 = QDir::mkpath(&local_50);
  QDir::~QDir((QDir *)&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002f0815;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1002f0815:
  if (cVar1 == '\0') {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))(*(long **)(param_1 + 0x10),0x80000009);
  }
  this = operator_new(0x10);
  QProcess::QProcess(this,param_1);
  QObject::connect(&local_60,this,"2finished(int,QProcess::ExitStatus)",param_1,
                   "1handleDiskImageMountResult(int,QProcess::ExitStatus)",0);
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  local_78 = (QArrayData *)
             QString::fromAscii_helper("hdiutil attach \"%1\" -mountpoint \"%2/\" -nobrowse",0x2f);
  QString::arg(&local_70,&local_78,param_1 + 0x50,0,0x20);
  QString::arg(&local_68,&local_70,param_1 + 0x58,0,0x20);
  QProcess::start(this,&local_68,3);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002f0906;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002f0906:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002f0936;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002f0936:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return;
}

