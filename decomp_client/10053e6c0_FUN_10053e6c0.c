
/* WARNING: Removing unreachable block (ram,0x00010053e99e) */
/* WARNING: Removing unreachable block (ram,0x00010053e9ac) */
/* WARNING: Removing unreachable block (ram,0x00010053e9b8) */

void FUN_10053e6c0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  size_t sVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  long lVar9;
  uint in_stack_fffffffffffffeec;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_c0 [24];
  QVariant local_a8;
  QArrayData *local_98;
  int *local_90 [4];
  QVariant local_70 [2];
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  Data *local_38;
  undefined1 local_29;
  
  puVar3 = PTR_s_DispPreferences_102274488;
  plVar1 = *(long **)(param_1 + 0x30);
  pcVar2 = *(code **)(*plVar1 + 0x60);
  iVar5 = -1;
  if (PTR_s_DispPreferences_102274488 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_DispPreferences_102274488);
    iVar5 = (int)sVar6;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
  local_58 = (QArrayData *)QString::fromAscii_helper("LockedOperationsList.LockedOperation",0x24);
  (*pcVar2)(&local_48,plVar1,&local_50,&local_58);
  FUN_1003df0d0(&local_38,&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053e778;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10053e778:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053e7a8;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10053e7a8:
  if ((*(int *)(local_38 + 0xc) == *(int *)(local_38 + 8)) ||
     (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 0x40) + 0x13c) != '\0')) {
    FUN_10053ef90(param_1);
    goto LAB_10053e7d1;
  }
  local_98 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onCreateCustomPasswordAnswered(PRL_RESULT, Messaging::ButtonID)",0x40);
  local_a8.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
  local_a8.field0_0x0.field0_0x0.field7 = 0;
  FUN_100a1c600(local_90,param_1,&local_98,&local_a8);
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053e8db;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10053e8db:
  iVar5 = CMessageManager::instance();
  local_c0._16_8_ = PTR_shared_null_1021e1288;
  local_c0._8_8_ = PTR_shared_null_1021e15e8;
  local_c0._0_8_ = PTR_shared_null_1021e15e8;
  local_d0 = 0x80000000;
  local_d8.field7 = 0;
  local_c8 = 1;
  CMessageManager::showMessageBox
            (iVar5,(QString *)0x36f0,(QStringList *)(local_c0 + 0x10),(QStringList *)(local_c0 + 8),
             (CSlotInfo *)local_c0,SUB81(local_90,0),
             (QWidget *)((ulong)in_stack_fffffffffffffeec << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_d8);
  uVar4 = local_c0._0_8_;
  if (*(int *)local_c0._0_8_ != -1) {
    if (*(int *)local_c0._0_8_ != 0) {
      LOCK();
      *(int *)local_c0._0_8_ = *(int *)local_c0._0_8_ + -1;
      local_29 = *(int *)local_c0._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053ea51;
    }
    iVar5 = *(int *)(local_c0._0_8_ + 0xc);
    if (iVar5 != *(int *)(local_c0._0_8_ + 8)) {
      lVar9 = (long)*(int *)(local_c0._0_8_ + 8) * 8 + (long)iVar5 * -8;
      pDVar7 = (Data *)(local_c0._0_8_ + (long)iVar5 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_10053ea30:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_10053ea30;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar4);
  }
LAB_10053ea51:
  uVar4 = local_c0._8_8_;
  if (*(int *)local_c0._8_8_ != -1) {
    if (*(int *)local_c0._8_8_ != 0) {
      LOCK();
      *(int *)local_c0._8_8_ = *(int *)local_c0._8_8_ + -1;
      local_29 = *(int *)local_c0._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053eae1;
    }
    iVar5 = *(int *)(local_c0._8_8_ + 0xc);
    if (iVar5 != *(int *)(local_c0._8_8_ + 8)) {
      lVar9 = (long)*(int *)(local_c0._8_8_ + 8) * 8 + (long)iVar5 * -8;
      pDVar7 = (Data *)(local_c0._8_8_ + (long)iVar5 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_10053eac0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_10053eac0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar4);
  }
LAB_10053eae1:
  if (*(int *)local_c0._16_8_ != -1) {
    if (*(int *)local_c0._16_8_ != 0) {
      LOCK();
      *(int *)local_c0._16_8_ = *(int *)local_c0._16_8_ + -1;
      local_29 = *(int *)local_c0._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053eb17;
    }
    QArrayData::deallocate((QArrayData *)local_c0._16_8_,2,8);
  }
LAB_10053eb17:
  QVariant::~QVariant(local_70);
  if (local_90[0] != (int *)0x0) {
    LOCK();
    *local_90[0] = *local_90[0] + -1;
    local_29 = *local_90[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_90[0] != (int *)0x0)) {
      operator_delete(local_90[0]);
    }
  }
LAB_10053e7d1:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar5 = *(int *)(local_38 + 0xc);
    if (iVar5 != *(int *)(local_38 + 8)) {
      lVar9 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar5 * -8;
      pDVar7 = local_38 + (long)iVar5 * 8 + 8;
      do {
        if (*(void **)pDVar7 != (void *)0x0) {
          operator_delete(*(void **)pDVar7);
        }
        pDVar7 = pDVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

