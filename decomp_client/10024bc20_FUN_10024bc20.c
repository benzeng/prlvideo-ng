
/* WARNING: Removing unreachable block (ram,0x00010024be38) */
/* WARNING: Removing unreachable block (ram,0x00010024be46) */
/* WARNING: Removing unreachable block (ram,0x00010024be52) */

undefined8 FUN_10024bc20(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CTaskGenericId *pCVar4;
  Data *pDVar5;
  undefined8 uVar6;
  long lVar7;
  QArrayData *pQVar8;
  long lVar9;
  uint in_stack_fffffffffffffe4c;
  Data_conflict local_178;
  undefined4 local_170;
  undefined1 local_168;
  Data_conflict local_160;
  undefined4 local_158;
  QArrayData *local_150;
  int *local_148 [4];
  QVariant local_128 [2];
  undefined1 local_110 [24];
  int *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  Data_conflict local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  int *local_a0 [4];
  QVariant local_80 [2];
  undefined1 local_68 [24];
  QArrayData *local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  pCVar4 = (CTaskGenericId *)CTaskManager::instance();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_50,uVar6);
  FUN_10021bfc0(local_48,&local_50);
  cVar1 = CTaskManager::isTaskRunning(pCVar4);
  CTaskGenericId::~CTaskGenericId(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10024bcb3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10024bcb3:
  if (cVar1 != '\0') {
    return 0;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = FUN_10018a9d0(uVar6);
  iVar3 = CMessageManager::instance();
  lVar9 = *(long *)(param_1 + 0x18);
  lVar7 = 0;
  if ((lVar9 != 0) && (lVar7 = 0, *(int *)(lVar9 + 4) != 0)) {
    lVar7 = *(long *)(param_1 + 0x20);
  }
  if (iVar2 != 0x30000009) {
    FUN_100188480(local_110 + 0x10);
    local_110._8_8_ = PTR_shared_null_1021e15e8;
    local_110._0_8_ = PTR_shared_null_1021e15e8;
    local_150 = (QArrayData *)
                QString::fromAscii_helper
                          ("1onMessageAnswered(PRL_RESULT, Messaging::ButtonID)",0x33);
    local_158 = 0x80000000;
    local_160.field7 = 0;
    FUN_100a1c600(local_148,param_1,&local_150,&local_160);
    local_170 = 0x80000000;
    local_178.field7 = 0;
    local_168 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x80000311,(QStringList *)(local_110 + 0x10),
               (QStringList *)(local_110 + 8),(CSlotInfo *)local_110,SUB81(local_148,0),
               (QWidget *)((ulong)in_stack_fffffffffffffe4c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_178);
    QVariant::~QVariant(local_128);
    if (local_148[0] != (int *)0x0) {
      LOCK();
      *local_148[0] = *local_148[0] + -1;
      local_29 = *local_148[0] != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_148[0] != (int *)0x0)) {
        operator_delete(local_148[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_160);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_29 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10024bed0;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_10024bed0:
    uVar6 = local_110._0_8_;
    if (*(int *)local_110._0_8_ != -1) {
      if (*(int *)local_110._0_8_ != 0) {
        LOCK();
        *(int *)local_110._0_8_ = *(int *)local_110._0_8_ + -1;
        local_29 = *(int *)local_110._0_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10024bf61;
      }
      iVar2 = *(int *)(local_110._0_8_ + 0xc);
      if (iVar2 != *(int *)(local_110._0_8_ + 8)) {
        lVar9 = (long)*(int *)(local_110._0_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar5 = (Data *)(local_110._0_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar5;
          if (*(int *)pQVar8 == 0) {
LAB_10024bf40:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_29 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar8 = *(QArrayData **)pDVar5;
              goto LAB_10024bf40;
            }
          }
          pDVar5 = pDVar5 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose((Data *)uVar6);
    }
LAB_10024bf61:
    uVar6 = local_110._8_8_;
    if (*(int *)local_110._8_8_ != -1) {
      if (*(int *)local_110._8_8_ != 0) {
        LOCK();
        *(int *)local_110._8_8_ = *(int *)local_110._8_8_ + -1;
        local_29 = *(int *)local_110._8_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10024bff1;
      }
      iVar2 = *(int *)(local_110._8_8_ + 0xc);
      if (iVar2 != *(int *)(local_110._8_8_ + 8)) {
        lVar9 = (long)*(int *)(local_110._8_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar5 = (Data *)(local_110._8_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar5;
          if (*(int *)pQVar8 == 0) {
LAB_10024bfd0:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_29 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar8 = *(QArrayData **)pDVar5;
              goto LAB_10024bfd0;
            }
          }
          pDVar5 = pDVar5 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose((Data *)uVar6);
    }
LAB_10024bff1:
    if (*(int *)local_110._16_8_ == -1) {
      return 0;
    }
    if (*(int *)local_110._16_8_ != 0) {
      LOCK();
      *(int *)local_110._16_8_ = *(int *)local_110._16_8_ + -1;
      UNLOCK();
      if (*(int *)local_110._16_8_ != 0) {
        return 0;
      }
      local_29 = 0;
    }
    goto LAB_10024c2f2;
  }
  if (lVar7 == 0) {
    local_68._16_8_ = PTR_shared_null_1021e1288;
  }
  else {
    uVar6 = 0;
    if ((lVar9 != 0) && (uVar6 = 0, *(int *)(lVar9 + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(local_68 + 0x10,uVar6);
  }
  local_68._8_8_ = PTR_shared_null_1021e15e8;
  local_68._0_8_ = PTR_shared_null_1021e15e8;
  local_a8 = (QArrayData *)
             QString::fromAscii_helper("1onMessageAnswered(PRL_RESULT, Messaging::ButtonID)",0x33);
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  FUN_100a1c600(local_a0,param_1,&local_a8,&local_b8);
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0x80000000;
  local_d8.field7 = 0;
  local_c8 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x3b26,(QStringList *)(local_68 + 0x10),(QStringList *)(local_68 + 8),
             (CSlotInfo *)local_68,SUB81(local_a0,0),
             (QWidget *)((ulong)in_stack_fffffffffffffe4c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_d8);
  if (local_f8 != (int *)0x0) {
    LOCK();
    *local_f8 = *local_f8 + -1;
    local_29 = *local_f8 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_f8 != (int *)0x0)) {
      operator_delete(local_f8);
    }
  }
  QVariant::~QVariant(local_80);
  if (local_a0[0] != (int *)0x0) {
    LOCK();
    *local_a0[0] = *local_a0[0] + -1;
    local_29 = *local_a0[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_a0[0] != (int *)0x0)) {
      operator_delete(local_a0[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_b8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10024c1b4;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10024c1b4:
  uVar6 = local_68._0_8_;
  if (*(int *)local_68._0_8_ != -1) {
    if (*(int *)local_68._0_8_ != 0) {
      LOCK();
      *(int *)local_68._0_8_ = *(int *)local_68._0_8_ + -1;
      local_29 = *(int *)local_68._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10024c241;
    }
    iVar2 = *(int *)(local_68._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_68._0_8_ + 8)) {
      lVar9 = (long)*(int *)(local_68._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = (Data *)(local_68._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar8 == 0) {
LAB_10024c220:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar5;
            goto LAB_10024c220;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar6);
  }
LAB_10024c241:
  uVar6 = local_68._8_8_;
  if (*(int *)local_68._8_8_ != -1) {
    if (*(int *)local_68._8_8_ != 0) {
      LOCK();
      *(int *)local_68._8_8_ = *(int *)local_68._8_8_ + -1;
      local_29 = *(int *)local_68._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10024c2d1;
    }
    iVar2 = *(int *)(local_68._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_68._8_8_ + 8)) {
      lVar9 = (long)*(int *)(local_68._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = (Data *)(local_68._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar8 == 0) {
LAB_10024c2b0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar5;
            goto LAB_10024c2b0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar6);
  }
LAB_10024c2d1:
  if (*(int *)local_68._16_8_ == -1) {
    return 0;
  }
  local_110._16_8_ = local_68._16_8_;
  if (*(int *)local_68._16_8_ != 0) {
    LOCK();
    *(int *)local_68._16_8_ = *(int *)local_68._16_8_ + -1;
    UNLOCK();
    if (*(int *)local_68._16_8_ != 0) {
      return 0;
    }
    local_29 = 0;
  }
LAB_10024c2f2:
  QArrayData::deallocate((QArrayData *)local_110._16_8_,2,8);
  return 0;
}

