
QDataStream * FUN_100706010(QDataStream *param_1,undefined8 param_2)

{
  Data *pDVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  QKeySequence *this;
  QArrayData *pQVar6;
  long lVar7;
  Data *local_48;
  QString local_40;
  uint local_38;
  undefined1 local_31;
  
  iVar2 = QDataStream::status();
  QDataStream::resetStatus();
  FUN_100707b30(param_2);
  QDataStream::operator>>(param_1,(int *)&local_38);
  if (local_38 != 0) {
    uVar5 = 0;
    pQVar6 = (QArrayData *)PTR_shared_null_1021e1288;
    do {
      iVar3 = QDataStream::status();
      if (iVar3 != 0) break;
      local_48 = (Data *)PTR_shared_null_1021e15e8;
      local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar6;
      uVar4 = operator>>(param_1,&local_40);
      FUN_1007063b0(uVar4,&local_48);
      FUN_100707bd0(param_2,&local_40,&local_48);
      pDVar1 = local_48;
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100706125;
        }
        iVar3 = *(int *)(local_48 + 0xc);
        if (iVar3 != *(int *)(local_48 + 8)) {
          lVar7 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
          this = (QKeySequence *)(local_48 + (long)iVar3 * 8 + 8);
          do {
            QKeySequence::~QKeySequence(this);
            this = this + -8;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        QListData::dispose(pDVar1);
        pQVar6 = (QArrayData *)PTR_shared_null_1021e1288;
      }
LAB_100706125:
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070615c;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_10070615c:
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_38);
  }
  iVar3 = QDataStream::status();
  if (iVar3 != 0) {
    FUN_100707b30(param_2);
  }
  if (iVar2 != 0) {
    QDataStream::setStatus(param_1);
  }
  return param_1;
}

