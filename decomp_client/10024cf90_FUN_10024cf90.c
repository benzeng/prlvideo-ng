
/* WARNING: Removing unreachable block (ram,0x00010024d28f) */
/* WARNING: Removing unreachable block (ram,0x00010024d29d) */
/* WARNING: Removing unreachable block (ram,0x00010024d2a9) */

undefined8 FUN_10024cf90(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  Data *pDVar7;
  undefined8 uVar8;
  QArrayData *pQVar9;
  bool bVar10;
  uint in_stack_fffffffffffffeec;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  Data_conflict local_c0;
  undefined4 local_b8;
  QArrayData *local_b0;
  int *local_a8 [4];
  QVariant local_88 [2];
  undefined1 local_70 [24];
  Data *local_58;
  Data *local_50;
  Data *local_48;
  uint local_40;
  Data *local_38;
  undefined1 local_29;
  
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar1 = FUN_10018f5b0(uVar8);
  if (iVar1 != 1) {
    return 0;
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018c2b0(uVar8);
  lVar2 = CVmConfiguration::getVmHardwareList();
  local_38 = *(Data **)(lVar2 + 0x1a8);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 == 0) {
      QListData::detach((int)&local_38);
      lVar4 = (long)*(int *)(local_38 + 8);
      lVar2 = *(long *)(lVar2 + 0x1a8);
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_38 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_38 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_38 + 0xc))
         ) {
        _memcpy(local_38 + lVar4 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
    }
  }
  local_58 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 == 0) {
      QListData::detach((int)&local_58);
      lVar2 = (long)*(int *)(local_58 + 8);
      if ((local_38 + (long)*(int *)(local_38 + 8) * 8 != local_58 + lVar2 * 8) &&
         (lVar4 = *(int *)(local_58 + 0xc) - lVar2, lVar4 != 0 && lVar2 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar2 * 8 + 0x10,local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10,
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)(local_58 + 8) == *(int *)(local_58 + 0xc)) {
    bVar6 = false;
  }
  else {
    bVar6 = false;
    do {
      if ((local_40 == 0) || (iVar1 = CVmDevice::getEnabled(), iVar1 == 0)) {
        local_50 = local_50 + 8;
        local_40 = 1;
      }
      else {
        local_50 = local_50 + 8;
        uVar3 = local_40 ^ 1;
        bVar6 = true;
        bVar10 = local_40 == 1;
        local_40 = uVar3;
        if (bVar10) break;
      }
    } while (local_50 != local_48);
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10024d16b;
    }
    QListData::dispose(local_58);
  }
LAB_10024d16b:
  if (bVar6) goto LAB_10024d471;
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar1 = CMessageManager::instance();
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(local_70 + 0x10,uVar8);
  local_70._8_8_ = PTR_shared_null_1021e15e8;
  local_70._0_8_ = PTR_shared_null_1021e15e8;
  local_b0 = (QArrayData *)
             QString::fromAscii_helper("1onMessageAnswered(PRL_RESULT, Messaging::ButtonID)",0x33);
  local_b8 = 0x80000000;
  local_c0.field7 = 0;
  FUN_100a1c600(local_a8,param_1,&local_b0,&local_c0);
  local_d0 = 0x80000000;
  local_d8.field7 = 0;
  local_c8 = 1;
  CMessageManager::showMessageBox
            (iVar1,(QString *)0x3aab,(QStringList *)(local_70 + 0x10),(QStringList *)(local_70 + 8),
             (CSlotInfo *)local_70,SUB81(local_a8,0),
             (QWidget *)((ulong)in_stack_fffffffffffffeec << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_d8);
  QVariant::~QVariant(local_88);
  if (local_a8[0] != (int *)0x0) {
    LOCK();
    *local_a8[0] = *local_a8[0] + -1;
    local_29 = *local_a8[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_a8[0] != (int *)0x0)) {
      operator_delete(local_a8[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_c0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10024d324;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10024d324:
  uVar8 = local_70._0_8_;
  if (*(int *)local_70._0_8_ != -1) {
    if (*(int *)local_70._0_8_ != 0) {
      LOCK();
      *(int *)local_70._0_8_ = *(int *)local_70._0_8_ + -1;
      local_29 = *(int *)local_70._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10024d3b1;
    }
    iVar1 = *(int *)(local_70._0_8_ + 0xc);
    if (iVar1 != *(int *)(local_70._0_8_ + 8)) {
      lVar2 = (long)*(int *)(local_70._0_8_ + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_70._0_8_ + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10024d390:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_29 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10024d390;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0);
    }
    QListData::dispose((Data *)uVar8);
  }
LAB_10024d3b1:
  uVar8 = local_70._8_8_;
  if (*(int *)local_70._8_8_ != -1) {
    if (*(int *)local_70._8_8_ != 0) {
      LOCK();
      *(int *)local_70._8_8_ = *(int *)local_70._8_8_ + -1;
      local_29 = *(int *)local_70._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10024d441;
    }
    iVar1 = *(int *)(local_70._8_8_ + 0xc);
    if (iVar1 != *(int *)(local_70._8_8_ + 8)) {
      lVar2 = (long)*(int *)(local_70._8_8_ + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_70._8_8_ + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_10024d420:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_29 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_10024d420;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0);
    }
    QListData::dispose((Data *)uVar8);
  }
LAB_10024d441:
  if (*(int *)local_70._16_8_ != -1) {
    if (*(int *)local_70._16_8_ != 0) {
      LOCK();
      *(int *)local_70._16_8_ = *(int *)local_70._16_8_ + -1;
      local_29 = *(int *)local_70._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10024d471;
    }
    QArrayData::deallocate((QArrayData *)local_70._16_8_,2,8);
  }
LAB_10024d471:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QListData::dispose(local_38);
  }
  return 0;
}

