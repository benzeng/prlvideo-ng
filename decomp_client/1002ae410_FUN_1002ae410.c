
/* WARNING: Removing unreachable block (ram,0x0001002ae5a8) */
/* WARNING: Removing unreachable block (ram,0x0001002ae5b6) */
/* WARNING: Removing unreachable block (ram,0x0001002ae5c2) */

void FUN_1002ae410(long *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  uint in_stack_ffffffffffffff0c;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined1 local_98 [24];
  QVariant local_80;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  uVar2 = FUN_100dddcf0(param_2);
  FUN_100df99c0("","prl_client_app",0,"Sign out finished. RC = %.8X, (%s)",param_2,uVar2);
  if (-1 < (int)param_2) {
                    /* WARNING: Could not recover jumptable at 0x0001002ae47d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  local_70 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onSignOutCancelledMessageClosed(PRL_RESULT,Messaging::ButtonID)",0x40);
  local_80.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
  local_80.field0_0x0.field0_0x0.field7 = 0;
  FUN_100a1c600(local_68,param_1,&local_70,&local_80);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ae4f0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002ae4f0:
  iVar1 = CMessageManager::instance();
  local_98._16_8_ = PTR_shared_null_1021e1288;
  local_98._8_8_ = PTR_shared_null_1021e15e8;
  local_98._0_8_ = PTR_shared_null_1021e15e8;
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  local_a8 = 1;
  CMessageManager::showMessageBox
            (iVar1,(QString *)(ulong)param_2,(QStringList *)(local_98 + 0x10),
             (QStringList *)(local_98 + 8),(CSlotInfo *)local_98,SUB81(local_68,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff0c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_b8);
  uVar2 = local_98._0_8_;
  if (*(int *)local_98._0_8_ != -1) {
    if (*(int *)local_98._0_8_ != 0) {
      LOCK();
      *(int *)local_98._0_8_ = *(int *)local_98._0_8_ + -1;
      local_29 = *(int *)local_98._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ae661;
    }
    iVar1 = *(int *)(local_98._0_8_ + 0xc);
    if (iVar1 != *(int *)(local_98._0_8_ + 8)) {
      lVar5 = (long)*(int *)(local_98._0_8_ + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = (Data *)(local_98._0_8_ + (long)iVar1 * 8 + 8);
      do {
        pQVar4 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar4 == 0) {
LAB_1002ae640:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar3;
            goto LAB_1002ae640;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_1002ae661:
  uVar2 = local_98._8_8_;
  if (*(int *)local_98._8_8_ != -1) {
    if (*(int *)local_98._8_8_ != 0) {
      LOCK();
      *(int *)local_98._8_8_ = *(int *)local_98._8_8_ + -1;
      local_29 = *(int *)local_98._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ae6f1;
    }
    iVar1 = *(int *)(local_98._8_8_ + 0xc);
    if (iVar1 != *(int *)(local_98._8_8_ + 8)) {
      lVar5 = (long)*(int *)(local_98._8_8_ + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = (Data *)(local_98._8_8_ + (long)iVar1 * 8 + 8);
      do {
        pQVar4 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar4 == 0) {
LAB_1002ae6d0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar3;
            goto LAB_1002ae6d0;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_1002ae6f1:
  if (*(int *)local_98._16_8_ != -1) {
    if (*(int *)local_98._16_8_ != 0) {
      LOCK();
      *(int *)local_98._16_8_ = *(int *)local_98._16_8_ + -1;
      local_29 = *(int *)local_98._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ae721;
    }
    QArrayData::deallocate((QArrayData *)local_98._16_8_,2,8);
  }
LAB_1002ae721:
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  return;
}

