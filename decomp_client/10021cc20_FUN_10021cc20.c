
/* WARNING: Removing unreachable block (ram,0x00010021cfa7) */
/* WARNING: Removing unreachable block (ram,0x00010021cfb5) */
/* WARNING: Removing unreachable block (ram,0x00010021cfc1) */

undefined8 FUN_10021cc20(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint in_stack_fffffffffffffedc;
  Data_conflict local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  Data_conflict local_d0;
  undefined4 local_c8;
  QArrayData *local_c0;
  int *local_b8 [4];
  QVariant local_98 [2];
  undefined1 local_80 [24];
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  int local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (lVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    lVar8 = *(long *)(param_1 + 0x20);
  }
  uVar4 = FUN_100152280();
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_40,uVar5);
  uVar5 = FUN_1001547d0(uVar4,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021ccb9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10021ccb9:
  uVar4 = FUN_1001766b0(uVar5);
  cVar1 = FUN_100615c20(uVar4,5,0);
  uVar2 = 0xffffffff;
  if (cVar1 != '\0') {
    uVar5 = FUN_1001766b0(uVar5);
    uVar2 = FUN_100615d30(uVar5,5,0);
  }
  uVar5 = FUN_100152280();
  FUN_100154b10(&local_68,uVar5);
  local_60 = local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_60);
      lVar6 = (long)*(int *)(local_60 + 8);
      if ((local_68 + (long)*(int *)(local_68 + 8) * 8 != local_60 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_60 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar6 * 8 + 0x10,local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)local_68 == -1) {
LAB_10021cdbb:
    uVar9 = 0;
    for (; local_58 != local_50; local_58 = local_58 + 8) {
      lVar6 = *(long *)local_58;
      iVar3 = FUN_10018a9d0(lVar6);
      if ((iVar3 != 0x30000001) && (iVar3 = FUN_10018a9d0(lVar6), iVar3 != 0x30000009)) {
        iVar3 = FUN_10018a9d0(lVar6);
        uVar9 = uVar9 + ((iVar3 == 0x30000005 || lVar8 == lVar6) ^ 1);
      }
      local_48 = 1;
    }
  }
  else {
    if (*(int *)local_68 == 0) {
LAB_10021cdad:
      QListData::dispose(local_68);
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10021cdad;
    }
    uVar9 = 0;
    if (local_48 != 0) goto LAB_10021cdbb;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021ce53;
    }
    QListData::dispose(local_60);
  }
LAB_10021ce53:
  if (uVar9 < uVar2) {
    return 0;
  }
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Max running VMs restricted to %d",uVar2);
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar3 = CMessageManager::instance();
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(local_80 + 0x10,uVar5);
  local_80._8_8_ = PTR_shared_null_1021e15e8;
  local_80._0_8_ = PTR_shared_null_1021e15e8;
  local_c0 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onLicenseRestrictedClosed(PRL_RESULT, Messaging::ButtonID)",0x3b);
  local_c8 = 0x80000000;
  local_d0.field7 = 0;
  FUN_100a1c600(local_b8,param_1,&local_c0,&local_d0);
  local_e0 = 0x80000000;
  local_e8.field7 = 0;
  local_d8 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x80011042,(QStringList *)(local_80 + 0x10),
             (QStringList *)(local_80 + 8),(CSlotInfo *)local_80,SUB81(local_b8,0),
             (QWidget *)((ulong)in_stack_fffffffffffffedc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_e8);
  QVariant::~QVariant(local_98);
  if (local_b8[0] != (int *)0x0) {
    LOCK();
    *local_b8[0] = *local_b8[0] + -1;
    local_31 = *local_b8[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_b8[0] != (int *)0x0)) {
      operator_delete(local_b8[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_d0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021d03f;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10021d03f:
  FUN_100039a80(local_80);
  FUN_100039a80(local_80 + 8);
  if (*(int *)local_80._16_8_ != -1) {
    if (*(int *)local_80._16_8_ != 0) {
      LOCK();
      *(int *)local_80._16_8_ = *(int *)local_80._16_8_ + -1;
      UNLOCK();
      if (*(int *)local_80._16_8_ != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_80._16_8_,2,8);
  }
  return 0;
}

