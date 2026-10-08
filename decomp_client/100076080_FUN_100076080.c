
QDataStream * FUN_100076080(QDataStream *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  QDataStream *pQVar3;
  uint uVar4;
  Data_conflict local_50;
  undefined4 local_48;
  QString local_40;
  uint local_38;
  undefined1 local_31;
  
  iVar1 = QDataStream::status();
  QDataStream::resetStatus();
  FUN_100076920(param_2);
  QDataStream::operator>>(param_1,(int *)&local_38);
  if (local_38 != 0) {
    uVar4 = 0;
    do {
      iVar2 = QDataStream::status();
      if (iVar2 != 0) break;
      local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      local_48 = 0x80000000;
      local_50.field7 = 0;
      pQVar3 = (QDataStream *)operator>>(param_1,&local_40);
      operator>>(pQVar3,(QVariant *)&local_50);
      FUN_1000769c0(param_2,&local_40,&local_50);
      QVariant::~QVariant((QVariant *)&local_50);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100076156;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_100076156:
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_38);
  }
  iVar2 = QDataStream::status();
  if (iVar2 != 0) {
    FUN_100076920(param_2);
  }
  if (iVar1 != 0) {
    QDataStream::setStatus(param_1);
  }
  return param_1;
}

