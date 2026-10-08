
/* WARNING: Removing unreachable block (ram,0x000100276638) */
/* WARNING: Removing unreachable block (ram,0x000100276646) */
/* WARNING: Removing unreachable block (ram,0x000100276652) */

undefined8 FUN_100276340(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  Data *pDVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  long lVar7;
  uint in_stack_fffffffffffffefc;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  Data_conflict local_88;
  undefined4 local_80;
  undefined1 local_78;
  AnonymousUnion0 local_70;
  QArrayData *local_68;
  undefined1 local_60 [24];
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar3 = FUN_10018a9d0(uVar5);
  puVar1 = PTR_shared_null_1021e1288;
  if (iVar3 != 0x30000009) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018d9b0(uVar5,*(int *)(param_1 + 0x28) == 0);
    return 0;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (*(int *)(param_1 + 0x28) == 0) {
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_convert_to_template_10226f590);
    QString::operator=(&local_38,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100276487;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  else {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_convert_template_to_10226f5a8);
    QString::operator=(&local_38,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100276487;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_100276487:
  puVar2 = PTR_shared_null_1021e15e8;
  local_60._16_8_ = PTR_shared_null_1021e15e8;
  FUN_1000341d0(local_60 + 0x10,&local_38);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018d830(local_60 + 8,uVar5);
  FUN_1000341d0(local_60 + 0x10,local_60 + 8);
  if (*(int *)local_60._8_8_ != -1) {
    if (*(int *)local_60._8_8_ != 0) {
      LOCK();
      *(int *)local_60._8_8_ = *(int *)local_60._8_8_ + -1;
      local_29 = *(int *)local_60._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002764fc;
    }
    QArrayData::deallocate((QArrayData *)local_60._8_8_,2,8);
  }
LAB_1002764fc:
  local_60._0_8_ = puVar2;
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018d830(&local_68,uVar5);
  FUN_1000341d0(local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10027655d;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10027655d:
  FUN_1000341d0(local_60,&local_38);
  iVar3 = CMessageManager::instance();
  local_70.field1 = (Data *)puVar1;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0x80000000;
  local_88.field7 = 0;
  local_78 = 1;
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  local_b8 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x3ab9,(QStringList *)&local_70.field0,
             (QStringList *)(local_60 + 0x10),(CSlotInfo *)local_60,SUB81(&local_a8,0),
             (QWidget *)((ulong)in_stack_fffffffffffffefc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_c8);
  QVariant::~QVariant((QVariant *)&local_88);
  if (local_a8 != (int *)0x0) {
    LOCK();
    *local_a8 = *local_a8 + -1;
    local_29 = *local_a8 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_a8 != (int *)0x0)) {
      operator_delete(local_a8);
    }
  }
  if (*(int *)local_70.field1 != -1) {
    if (*(int *)local_70.field1 != 0) {
      LOCK();
      *(int *)local_70.field1 = *(int *)local_70.field1 + -1;
      local_29 = *(int *)local_70.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002766ba;
    }
    QArrayData::deallocate((QArrayData *)local_70.field1,2,8);
  }
LAB_1002766ba:
  uVar5 = local_60._0_8_;
  if (*(int *)local_60._0_8_ != -1) {
    if (*(int *)local_60._0_8_ != 0) {
      LOCK();
      *(int *)local_60._0_8_ = *(int *)local_60._0_8_ + -1;
      local_29 = *(int *)local_60._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100276751;
    }
    iVar3 = *(int *)(local_60._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_60._0_8_ + 8)) {
      lVar7 = (long)*(int *)(local_60._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = (Data *)(local_60._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_100276730:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_100276730;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar5);
  }
LAB_100276751:
  uVar5 = local_60._16_8_;
  if (*(int *)local_60._16_8_ != -1) {
    if (*(int *)local_60._16_8_ != 0) {
      LOCK();
      *(int *)local_60._16_8_ = *(int *)local_60._16_8_ + -1;
      local_29 = *(int *)local_60._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002767e1;
    }
    iVar3 = *(int *)(local_60._16_8_ + 0xc);
    if (iVar3 != *(int *)(local_60._16_8_ + 8)) {
      lVar7 = (long)*(int *)(local_60._16_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = (Data *)(local_60._16_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_1002767c0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_1002767c0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar5);
  }
LAB_1002767e1:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return 0;
}

