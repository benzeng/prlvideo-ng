
QDataStream * FUN_100706270(QDataStream *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  QDataStream *this;
  uint uVar3;
  int local_44;
  QString local_40;
  uint local_38;
  undefined1 local_31;
  
  iVar1 = QDataStream::status();
  QDataStream::resetStatus();
  FUN_100707f30(param_2);
  QDataStream::operator>>(param_1,(int *)&local_38);
  if (local_38 != 0) {
    uVar3 = 0;
    do {
      iVar2 = QDataStream::status();
      if (iVar2 != 0) break;
      local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      this = (QDataStream *)operator>>(param_1,&local_40);
      QDataStream::operator>>(this,&local_44);
      FUN_100707fd0(param_2,&local_40,&local_44);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070632b;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_10070632b:
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_38);
  }
  iVar2 = QDataStream::status();
  if (iVar2 != 0) {
    FUN_100707f30(param_2);
  }
  if (iVar1 != 0) {
    QDataStream::setStatus(param_1);
  }
  return param_1;
}

