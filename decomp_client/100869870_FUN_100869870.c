
void FUN_100869870(long param_1,QDataStream *param_2)

{
  QString *this;
  int iVar1;
  long lVar2;
  QArrayData *pQVar3;
  QArrayData *local_38;
  QString local_30;
  QArrayData *local_28;
  int local_20;
  undefined1 local_19;
  
  local_20 = 0;
  QDataStream::operator>>(param_2,&local_20);
  if (local_20 == 0) {
    return;
  }
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  QByteArray::resize((int)&local_28);
  if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
  }
  iVar1 = QDataStream::readRawData
                    ((char *)param_2,(int)local_28 + (int)*(undefined8 *)(local_28 + 0x10));
  if (iVar1 != local_20) {
    FUN_100df99c0("","prl_data_serializer",0,
                  "Fatal error on string deserialization: expected %u bytes but just %u were read",
                  local_20,iVar1);
    goto LAB_1008699ef;
  }
  this = *(QString **)(param_1 + 8);
  pQVar3 = local_28 + *(long *)(local_28 + 0x10);
  if ((pQVar3 != (QArrayData *)0x0) && (*(uint *)(local_28 + 4) != 0)) {
    lVar2 = 0;
    do {
      if (pQVar3[lVar2] == (QArrayData)0x0) break;
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(local_28 + 4));
    if ((int)lVar2 == -1) {
      _strlen((char *)pQVar3);
    }
  }
  QString::fromUtf8_helper((char *)&local_38,(int)pQVar3);
  QString::normalized(&local_30,&local_38,1,0);
  QString::operator=(this,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100869999;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100869999:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1008699ef;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1008699ef:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return;
}

