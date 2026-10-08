
/* WARNING: Removing unreachable block (ram,0x0001000b1bd8) */
/* WARNING: Removing unreachable block (ram,0x0001000b1be6) */
/* WARNING: Removing unreachable block (ram,0x0001000b1bf2) */

void FUN_1000b1820(undefined8 param_1,QStringList *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint in_stack_fffffffffffffeec;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  int *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  undefined1 local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  ExternalRefCountData *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_2);
  if (lVar3 == 0) {
    return;
  }
  iVar1 = CMessageManager::instance();
  CMessageManager::closeSpecificMessageBox(iVar1);
  iVar1 = CMessageManager::instance();
  CMessageManager::closeSpecificMessageBox(iVar1);
  iVar1 = CMessageManager::instance();
  CMessageManager::closeSpecificMessageBox(iVar1);
  iVar1 = CMessageManager::instance();
  CMessageManager::closeSpecificMessageBox(iVar1);
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  if (0x3b2f < (int)param_4) {
    if ((param_4 == 0x3b30) || (param_4 == 0x3b32)) {
      FUN_10018d830(&local_78,lVar3);
      FUN_1000341d0(&local_38,&local_78);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000b1b08;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
    goto LAB_1000b1b08;
  }
  if (param_4 != 0x3b15) {
    if (param_4 != 0x3b16) goto LAB_1000b1b08;
    FUN_10018d830(&local_58,lVar3);
    FUN_1000341d0(&local_38,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000b1a26;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1000b1a26:
    FUN_10018d830(&local_60,lVar3);
    FUN_1000341d0(&local_40,&local_60);
    FUN_10018d830(&local_68,lVar3);
    FUN_1000341d0(&local_40,&local_68);
    FUN_10018bce0(lVar3);
    EnumUtils::OsTypeToString((uint)&local_70);
    FUN_1000341d0(&local_40,&local_70);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000b1aa8;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1000b1aa8:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000b1ad8;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1000b1ad8:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000b1b08;
      }
      QArrayData::deallocate(local_60,2,8);
    }
    goto LAB_1000b1b08;
  }
  FUN_10018d830(&local_48,lVar3);
  FUN_1000341d0(&local_38,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000b190e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000b190e:
  FUN_10018d830(&local_50,lVar3);
  FUN_1000341d0(&local_40,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000b1b08;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000b1b08:
  iVar1 = CMessageManager::instance();
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0x80000000;
  local_98.field7 = 0;
  local_88 = 1;
  local_d0 = 0x80000000;
  local_d8.field7 = 0;
  local_c8 = 1;
  CMessageManager::showMessageBox
            (iVar1,(QString *)(ulong)param_4,param_2,(QStringList *)&local_38.field0,
             (CSlotInfo *)&local_40,SUB81(&local_b8,0),
             (QWidget *)((ulong)in_stack_fffffffffffffeec << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_d8);
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
  FUN_100039a80(&local_40);
  FUN_100039a80(&local_38);
  return;
}

