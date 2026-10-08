
void FUN_1002f11f0(QObject *param_1)

{
  QProcess *this;
  QArrayData *local_40;
  QArrayData *local_38;
  long local_30;
  undefined1 local_21;
  
  this = operator_new(0x10);
  QProcess::QProcess(this,param_1);
  QObject::connect(&local_30,this,"2finished(int,QProcess::ExitStatus)",param_1,
                   "1handleDiskImageUnmountResult(int,QProcess::ExitStatus)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  local_40 = (QArrayData *)QString::fromAscii_helper("hdiutil detach \"%1/\"",0x14);
  QString::arg(&local_38,&local_40,param_1 + 0x58,0,0x20);
  QProcess::start(this,&local_38,3);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002f12c3;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002f12c3:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

