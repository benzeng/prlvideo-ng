
void FUN_10012f1f0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  QVariant local_b8;
  QString local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QVariant local_70;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if ((param_2 != 0) &&
     (local_58 = *(Data **)(param_2 + 0x98), *(int *)(local_58 + 0xc) != *(int *)(local_58 + 8))) {
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 == 0) {
        QListData::detach((int)&local_58);
        lVar5 = (long)*(int *)(local_58 + 8);
        lVar1 = *(long *)(param_2 + 0x98);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_58 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))) {
          _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
    }
    local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
    local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
    if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
      bVar4 = false;
      do {
        local_40 = 1;
        lVar1 = *(long *)local_50;
        if (lVar1 != 0) {
          CVirtualNetwork::getNetworkID();
          uVar2 = FUN_10012f780(lVar1);
          CVirtualNetwork::getNetworkID();
          QVariant::QVariant(&local_70,&local_78);
          local_80 = (QArrayData *)PTR_shared_null_1021e1288;
          local_88 = (QArrayData *)PTR_shared_null_1021e1288;
          local_90 = (QArrayData *)PTR_shared_null_1021e1288;
          FUN_10013d930(param_1,&local_60,uVar2,1,&local_70,&local_80,&local_88,&local_90);
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012f37f;
            }
            QArrayData::deallocate(local_90,2,8);
          }
LAB_10012f37f:
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012f3af;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_10012f3af:
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012f3df;
            }
            QArrayData::deallocate(local_80,2,8);
          }
LAB_10012f3df:
          QVariant::~QVariant(&local_70);
          if (*(int *)local_78.field0_0x0 != -1) {
            if (*(int *)local_78.field0_0x0 != 0) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012f417;
            }
            QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
          }
LAB_10012f417:
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012f458;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_10012f458:
          iVar3 = QComboBox::count();
          CVirtualNetwork::getNetworkID();
          QVariant::QVariant(&local_a0,&local_a8);
          iVar7 = (int)param_1;
          QComboBox::setItemData(iVar7,(QVariant *)(ulong)(iVar3 - 1),(int)&local_a0);
          QVariant::~QVariant(&local_a0);
          if (*(int *)local_a8.field0_0x0 != -1) {
            if (*(int *)local_a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
              local_31 = *(int *)local_a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012f4e0;
            }
            QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
          }
LAB_10012f4e0:
          iVar3 = QComboBox::count();
          QVariant::QVariant(&local_b8,2);
          QComboBox::setItemData(iVar7,(QVariant *)(ulong)(iVar3 - 1),(int)&local_b8);
          QVariant::~QVariant(&local_b8);
          if ((!bVar4) && (iVar3 = FUN_10012f780(lVar1), iVar3 != 1)) {
            QComboBox::count();
            bVar4 = true;
            QComboBox::setCurrentIndex(iVar7);
          }
        }
        local_50 = local_50 + 8;
      } while (local_50 != local_48);
    }
    local_40 = 1;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        if (*(int *)local_58 != 0) {
          return;
        }
        local_31 = 0;
      }
      QListData::dispose(local_58);
    }
  }
  return;
}

