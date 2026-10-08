
void FUN_1006ebe70(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  QStringList *pQVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  int *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_78 [24];
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  QLabel::text();
  CProductUpdateInfo::getMajorVersionFromFileName((QString *)(local_78 + 0x10));
  QString::arg(&local_60,&local_38,local_78 + 0x10,0,0x20);
  QString::arg(&local_58,&local_60,param_2 + 0x60,0,0x20);
  QString::arg(&local_50,&local_58,param_2 + 0x78,0,0x20);
  QString::arg(&local_48,&local_50,param_2 + 0x68,0,0x20);
  QString::arg(&local_40,&local_48,(long *)(param_2 + 0x48),0,0x20);
  QString::operator=(&local_38,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ebf63;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006ebf63:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ebf93;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006ebf93:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ebfc3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006ebfc3:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ebff3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006ebff3:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ec023;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006ec023:
  if (*(int *)local_78._16_8_ != -1) {
    if (*(int *)local_78._16_8_ != 0) {
      LOCK();
      *(int *)local_78._16_8_ = *(int *)local_78._16_8_ + -1;
      local_29 = *(int *)local_78._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ec053;
    }
    QArrayData::deallocate((QArrayData *)local_78._16_8_,2,8);
  }
LAB_1006ec053:
  QLabel::setText(*(QString **)(*(long *)(param_1 + 0x30) + 0x48));
  if (*(int *)(*(long *)(param_2 + 0x48) + 4) != 0) goto LAB_1006ec241;
  iVar2 = CMessageManager::instance();
  pQVar3 = (QStringList *)QWidget::window();
  local_78._8_8_ = PTR_shared_null_1021e15e8;
  local_78._0_8_ = PTR_shared_null_1021e15e8;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0x80000000;
  local_98.field7 = 0;
  local_88 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015365,pQVar3,(QStringList *)(local_78 + 8),(CSlotInfo *)local_78,
             SUB81(&local_b8,0));
  QVariant::~QVariant((QVariant *)&local_98);
  if (local_b8 != (int *)0x0) {
    LOCK();
    *local_b8 = *local_b8 + -1;
    local_29 = *local_b8 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_b8 != (int *)0x0)) {
      operator_delete(local_b8);
    }
  }
  uVar1 = local_78._0_8_;
  if (*(int *)local_78._0_8_ != -1) {
    if (*(int *)local_78._0_8_ != 0) {
      LOCK();
      *(int *)local_78._0_8_ = *(int *)local_78._0_8_ + -1;
      local_29 = *(int *)local_78._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ec1b1;
    }
    iVar2 = *(int *)(local_78._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_78._0_8_ + 8)) {
      lVar6 = (long)*(int *)(local_78._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_78._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_1006ec190:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_1006ec190;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1006ec1b1:
  uVar1 = local_78._8_8_;
  if (*(int *)local_78._8_8_ != -1) {
    if (*(int *)local_78._8_8_ != 0) {
      LOCK();
      *(int *)local_78._8_8_ = *(int *)local_78._8_8_ + -1;
      local_29 = *(int *)local_78._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ec241;
    }
    iVar2 = *(int *)(local_78._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_78._8_8_ + 8)) {
      lVar6 = (long)*(int *)(local_78._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_78._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_1006ec220:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_1006ec220;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1006ec241:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

