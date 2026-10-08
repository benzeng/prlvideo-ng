
void FUN_1000f2a40(long param_1,QString *param_2)

{
  byte bVar1;
  char cVar2;
  QString *this;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_28,&local_30);
  bVar1 = QDir::exists(&local_28);
  *(byte *)(param_1 + 0x10) = bVar1 ^ 1;
  QDir::~QDir((QDir *)&local_28);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000f2ab3;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1000f2ab3:
  this = (QString *)(param_1 + 8);
  QString::operator=(this,param_2);
  while (cVar2 = QString::endsWith(this,0x2f,1), cVar2 != '\0') {
    QString::chop((int)this);
  }
  return;
}

