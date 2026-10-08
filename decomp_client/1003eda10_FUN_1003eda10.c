
bool FUN_1003eda10(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QStringList *pQVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined1 local_120 [40];
  AnonymousUnion0 local_f8;
  Data_conflict local_f0;
  undefined4 local_e8;
  QArrayData *local_e0;
  int *local_d8 [4];
  QVariant local_b8 [2];
  QArrayData *local_a0;
  QVariant local_98;
  QString local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  undefined4 local_68;
  QArrayData *local_60;
  Data *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QVariant::toString();
  MappingHelpers::getParentObjectPath(&local_50);
  iVar3 = MappingHelpers::getItemIdFromPath(&local_50);
  uVar4 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_60 = (QArrayData *)QString::fromAscii_helper("Hardware.GenericPciDevice",0x19);
  FUN_1003e17d0(&local_58,uVar4,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003edab3;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003edab3:
  local_80 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_80);
      lVar6 = (long)*(int *)(local_80 + 8);
      if ((local_58 + (long)*(int *)(local_58 + 8) * 8 != local_80 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_80 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_80 + 0xc))
         ) {
        _memcpy(local_80 + lVar6 * 8 + 0x10,local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
  local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
  local_68 = 1;
  iVar8 = 2;
  if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
    do {
      local_68 = 1;
      if (*(int *)local_78 != iVar3) {
        uVar4 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
        local_a0 = (QArrayData *)
                   QString::fromAscii_helper("Hardware.GenericPciDevice[%1].SystemName",0x28);
        FUN_1003e1800(&local_98,uVar4,&local_a0,0);
        QVariant::toString();
        cVar2 = operator==(&local_88,&local_48);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_31 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003edbe1;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
LAB_1003edbe1:
        QVariant::~QVariant(&local_98);
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003edc1f;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_1003edc1f:
        if (cVar2 != '\0') {
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          local_e0 = (QArrayData *)QString::fromAscii_helper("1onRejectedMessageClosed()",0x1a);
          local_e8 = 0x80000000;
          local_f0.field7 = 0;
          FUN_100a1c600(local_d8,uVar4,&local_e0,&local_f0);
          QVariant::~QVariant((QVariant *)&local_f0);
          if (*(int *)local_e0 != -1) {
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_31 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003edce5;
            }
            QArrayData::deallocate(local_e0,2,8);
          }
LAB_1003edce5:
          iVar3 = CMessageManager::instance();
          pQVar5 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
          puVar1 = PTR_shared_null_1021e15e8;
          local_f8.field1 = (Data *)PTR_shared_null_1021e15e8;
          uVar4 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
          local_120._8_8_ = local_50.field0_0x0;
          if (1 < *(int *)local_50.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_40,0x1df310c);
          QString::append((QString *)(local_120 + 8));
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003edd84;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_1003edd84:
          FUN_1003e1800(local_120 + 0x10,uVar4,local_120 + 8,0);
          QVariant::toString();
          FUN_1000341d0(&local_f8,local_120 + 0x20);
          local_120._0_8_ = puVar1;
          CMessageManager::showMessageBox
                    (iVar3,(QWidget *)0x80015192,pQVar5,(QStringList *)&local_f8.field0,
                     (CSlotInfo *)local_120,SUB81(local_d8,0));
          FUN_100039a80(local_120);
          if (*(int *)local_120._32_8_ != -1) {
            if (*(int *)local_120._32_8_ != 0) {
              LOCK();
              *(int *)local_120._32_8_ = *(int *)local_120._32_8_ + -1;
              local_31 = *(int *)local_120._32_8_ != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ede37;
            }
            QArrayData::deallocate((QArrayData *)local_120._32_8_,2,8);
          }
LAB_1003ede37:
          QVariant::~QVariant((QVariant *)(local_120 + 0x10));
          if (*(int *)local_120._8_8_ != -1) {
            if (*(int *)local_120._8_8_ != 0) {
              LOCK();
              *(int *)local_120._8_8_ = *(int *)local_120._8_8_ + -1;
              local_31 = *(int *)local_120._8_8_ != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ede79;
            }
            QArrayData::deallocate((QArrayData *)local_120._8_8_,2,8);
          }
LAB_1003ede79:
          FUN_100039a80(&local_f8);
          QVariant::~QVariant(local_b8);
          if (local_d8[0] != (int *)0x0) {
            LOCK();
            *local_d8[0] = *local_d8[0] + -1;
            local_31 = *local_d8[0] != 0;
            UNLOCK();
            if ((!(bool)local_31) && (local_d8[0] != (int *)0x0)) {
              operator_delete(local_d8[0]);
            }
          }
          iVar8 = 1;
          goto LAB_1003edec2;
        }
      }
      local_78 = local_78 + 8;
      local_68 = 1;
    } while (local_78 != local_70);
    iVar8 = 2;
  }
LAB_1003edec2:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003edee8;
    }
    QListData::dispose(local_80);
  }
LAB_1003edee8:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003edf0e;
    }
    QListData::dispose(local_58);
  }
LAB_1003edf0e:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003edf3e;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1003edf3e:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) goto LAB_1003edf6e;
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1003edf6e:
  return iVar8 != 2;
}

