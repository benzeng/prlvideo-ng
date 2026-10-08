
QDataStream * FUN_1007dc090(QDataStream *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  QDataStream *pQVar4;
  uint uVar5;
  QString local_48;
  QString local_40;
  uint local_38;
  undefined1 local_31;
  
  iVar2 = QDataStream::status();
  QDataStream::resetStatus();
  FUN_100538960(param_2);
  QDataStream::operator>>(param_1,(int *)&local_38);
  puVar1 = PTR_shared_null_1021e1288;
  if (local_38 != 0) {
    uVar5 = 0;
    do {
      iVar3 = QDataStream::status();
      if (iVar3 != 0) break;
      local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
      local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
      pQVar4 = (QDataStream *)operator>>(param_1,&local_40);
      operator>>(pQVar4,&local_48);
      FUN_1007dc250(param_2,&local_40,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007dc15d;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_1007dc15d:
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007dc18d;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1007dc18d:
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_38);
  }
  iVar3 = QDataStream::status();
  if (iVar3 != 0) {
    FUN_100538960(param_2);
  }
  if (iVar2 != 0) {
    QDataStream::setStatus(param_1);
  }
  return param_1;
}

