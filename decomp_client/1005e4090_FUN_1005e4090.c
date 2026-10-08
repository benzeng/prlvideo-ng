
void FUN_1005e4090(QObject *param_1)

{
  QTextStream *this;
  int iVar1;
  QTextStream *local_38;
  QString local_30;
  undefined1 local_21;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f4580;
  QMessageLogger::debug();
  this = local_38;
  QString::fromUtf8_helper((char *)&local_30,0x1e05629);
  QTextStream::operator<<(this,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005e4135;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1005e4135:
  if (local_38[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_38,' ');
  }
  iVar1 = _rand();
  QTextStream::operator<<(local_38,iVar1);
  if (local_38[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_38,' ');
  }
  QDebug::~QDebug((QDebug *)&local_38);
  QObject::~QObject(param_1);
  return;
}

