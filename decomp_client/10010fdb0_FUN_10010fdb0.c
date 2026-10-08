
/* WARNING: Removing unreachable block (ram,0x0001001102c6) */
/* WARNING: Removing unreachable block (ram,0x0001001102d4) */
/* WARNING: Removing unreachable block (ram,0x0001001102e0) */

void FUN_10010fdb0(int param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 in_stack_fffffffffffffebc;
  Data_conflict local_108;
  undefined4 local_100;
  undefined1 local_f8;
  int *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  AnonymousUnion0 local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined1 local_58 [24];
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e1288;
  if (param_3 == 0) {
    return;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_1 == -0x7ffffc79) {
    QMetaObject::tr(local_58 + 0x10,PTR_staticMetaObject_1021e1520,0x1dc030b);
    QString::operator=(&local_38,(QString *)(local_58 + 0x10));
    uVar6 = 0x1000;
    if (*(int *)local_58._16_8_ != -1) {
      if (*(int *)local_58._16_8_ != 0) {
        LOCK();
        *(int *)local_58._16_8_ = *(int *)local_58._16_8_ + -1;
        local_29 = *(int *)local_58._16_8_ != 0;
        UNLOCK();
        uVar6 = 0x1000;
        if ((bool)local_29) goto LAB_10010fed6;
      }
      uVar6 = 0x1000;
      QArrayData::deallocate((QArrayData *)local_58._16_8_,2,8);
    }
  }
  else {
    if (param_1 != -0x7ffffc7a) goto LAB_100110471;
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1dc0307);
    QString::operator=(&local_38,&local_40);
    uVar6 = 0x800;
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        uVar6 = 0x800;
        if ((bool)local_29) goto LAB_10010fed6;
      }
      uVar6 = 0x800;
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_10010fed6:
  local_58._8_8_ = PTR_shared_null_1021e15e8;
  local_58._0_8_ = PTR_shared_null_1021e15e8;
  if ((param_2 == 0x3abf) || (param_2 == 0x3ac1)) {
    CVmDevice::getUserFriendlyName();
    FUN_1000341d0(local_58 + 8,&local_60);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10010ff40;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_10010ff40:
  local_78 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
  uVar3 = CVmHardDisk::getSize();
  QString::arg(&local_70,&local_78,uVar3,0,10,0x20);
  QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,(int)PTR_s_MB_10226e948);
  QString::arg(&local_68,&local_70,&local_80,0,0x20);
  FUN_1000341d0(local_58,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10010fff3;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10010fff3:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100110023;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100110023:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100110053;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100110053:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100110083;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100110083:
  local_98 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
  QString::arg(&local_90,&local_98,uVar6,0,10,0x20);
  QMetaObject::tr((char *)&local_a0,PTR_staticMetaObject_1021e1520,(int)PTR_s_MB_10226e948);
  QString::arg(&local_88,&local_90,&local_a0,0,0x20);
  FUN_1000341d0(local_58,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100110139;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100110139:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011016f;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10011016f:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001101a5;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1001101a5:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001101db;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1001101db:
  FUN_1000341d0(local_58,&local_38);
  iVar2 = CMessageManager::instance();
  local_a8.field1 = (Data *)puVar1;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  local_b8 = 1;
  local_100 = 0x80000000;
  local_108.field7 = 0;
  local_f8 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)(ulong)param_2,(QStringList *)&local_a8.field0,
             (QStringList *)(local_58 + 8),(CSlotInfo *)local_58,SUB81(&local_e8,0),
             (QWidget *)CONCAT44(in_stack_fffffffffffffebc,1),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_108);
  QVariant::~QVariant((QVariant *)&local_c8);
  if (local_e8 != (int *)0x0) {
    LOCK();
    *local_e8 = *local_e8 + -1;
    local_29 = *local_e8 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_e8 != (int *)0x0)) {
      operator_delete(local_e8);
    }
  }
  if (*(int *)local_a8.field1 != -1) {
    if (*(int *)local_a8.field1 != 0) {
      LOCK();
      *(int *)local_a8.field1 = *(int *)local_a8.field1 + -1;
      local_29 = *(int *)local_a8.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011034e;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field1,2,8);
  }
LAB_10011034e:
  uVar6 = local_58._0_8_;
  if (*(int *)local_58._0_8_ != -1) {
    if (*(int *)local_58._0_8_ != 0) {
      LOCK();
      *(int *)local_58._0_8_ = *(int *)local_58._0_8_ + -1;
      local_29 = *(int *)local_58._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001103e1;
    }
    iVar2 = *(int *)(local_58._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_58._0_8_ + 8)) {
      lVar7 = (long)*(int *)(local_58._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_58._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_1001103c0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_1001103c0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar6);
  }
LAB_1001103e1:
  uVar6 = local_58._8_8_;
  if (*(int *)local_58._8_8_ != -1) {
    if (*(int *)local_58._8_8_ != 0) {
      LOCK();
      *(int *)local_58._8_8_ = *(int *)local_58._8_8_ + -1;
      local_29 = *(int *)local_58._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100110471;
    }
    iVar2 = *(int *)(local_58._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_58._8_8_ + 8)) {
      lVar7 = (long)*(int *)(local_58._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_58._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_100110450:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_100110450;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar6);
  }
LAB_100110471:
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

