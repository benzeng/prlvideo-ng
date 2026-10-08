
void FUN_10029d9f0(long param_1,int param_2)

{
  AnonymousUnion0 AVar1;
  int iVar2;
  Data *pDVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  QStringList *pQVar6;
  long lVar7;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  Data *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  *(int *)(param_1 + 0x38) = param_2;
  QWidget::close();
  iVar2 = CMessageManager::instance();
  pQVar6 = (QStringList *)0x0;
  if ((DAT_102310940 != 0) && (pQVar6 = (QStringList *)0x0, *(int *)(DAT_102310940 + 4) != 0)) {
    pQVar6 = DAT_102310948;
  }
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  local_80 = (QArrayData *)QString::fromAscii_helper("onFeedbackMessageClosed",0x17);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  FUN_100a1c6b0(local_78,&local_80,param_1,&local_90);
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)(ulong)((param_2 >> 0x1f & 0x8000dab2U) + 0x3c62),pQVar6,
             (QStringList *)&local_38.field0,(CSlotInfo *)&local_40,SUB81(local_78,0));
  QVariant::~QVariant(local_58);
  if (local_78[0] != (int *)0x0) {
    LOCK();
    *local_78[0] = *local_78[0] + -1;
    local_29 = *local_78[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_78[0] != (int *)0x0)) {
      operator_delete(local_78[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029db31;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10029db31:
  pDVar4 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029dbc1;
    }
    iVar2 = *(int *)(local_40 + 0xc);
    if (iVar2 != *(int *)(local_40 + 8)) {
      lVar7 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = local_40 + (long)iVar2 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar5 == 0) {
LAB_10029dba0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar3;
            goto LAB_10029dba0;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_10029dbc1:
  AVar1 = local_38;
  if (*(int *)local_38.field1 != -1) {
    if (*(int *)local_38.field1 != 0) {
      LOCK();
      *(int *)local_38.field1 = *(int *)local_38.field1 + -1;
      UNLOCK();
      if (*(int *)local_38.field1 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar2 = *(int *)(local_38.field1 + 0xc);
    if (iVar2 != *(int *)(local_38.field1 + 8)) {
      lVar7 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_38.field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_10029dc30:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_10029dc30;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
  return;
}

