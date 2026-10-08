
/* WARNING: Removing unreachable block (ram,0x0001003203a1) */
/* WARNING: Removing unreachable block (ram,0x0001003203af) */
/* WARNING: Removing unreachable block (ram,0x0001003203bb) */

void FUN_1003200e0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  QKeySequence *this;
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
  AnonymousUnion0 local_68;
  AnonymousUnion0 local_60;
  Data *local_58 [2];
  QArrayData *local_48;
  ExternalRefCountData *local_40;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Release input shortcut pressed.");
  }
  lVar4 = FUN_100319960(param_1);
  if (lVar4 == 0) {
    return;
  }
  iVar3 = FUN_100325aa0(lVar4);
  if (iVar3 == 0) {
    return;
  }
  if (iVar3 == 3) {
    FUN_100333250(*(undefined8 *)(param_1 + 0x98));
    return;
  }
  uVar5 = FUN_1001d50a0();
  cVar2 = FUN_1001d5120(uVar5);
  puVar1 = PTR_shared_null_1021e15e8;
  if (cVar2 == '\0') goto LAB_100320435;
  local_40 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  if (DAT_102310998 == (void *)0x0) {
    pvVar6 = operator_new(0x18);
    FUN_1006faf60(pvVar6);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar6;
  }
  cVar2 = FUN_1006faa10(DAT_102310998,0x25);
  if (cVar2 != '\0') {
    if (DAT_102310998 == (void *)0x0) {
      pvVar6 = operator_new(0x18);
      FUN_1006faf60(pvVar6);
      DAT_102274400 = 1;
      DAT_102310998 = pvVar6;
    }
    FUN_1006faa30(local_58,DAT_102310998,0x25);
    FUN_100708910(&local_48,local_58,1);
    FUN_1000341d0(&local_40,&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100320255;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100320255:
    if (*(int *)local_58[0] != -1) {
      if (*(int *)local_58[0] != 0) {
        LOCK();
        *(int *)local_58[0] = *(int *)local_58[0] + -1;
        local_31 = *(int *)local_58[0] != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003202ba;
      }
      iVar3 = *(int *)(local_58[0] + 0xc);
      if (iVar3 != *(int *)(local_58[0] + 8)) {
        lVar4 = (long)*(int *)(local_58[0] + 8) * 8 + (long)iVar3 * -8;
        this = (QKeySequence *)(local_58[0] + (long)iVar3 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(this);
          this = this + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose(local_58[0]);
    }
  }
LAB_1003202ba:
  iVar3 = CMessageManager::instance();
  local_60 = (AnonymousUnion0)((AnonymousUnion0 *)(param_1 + 0x28))->field1;
  if (1 < *(int *)local_60.field1 + 1U) {
    LOCK();
    *(int *)local_60.field1 = *(int *)local_60.field1 + 1;
    local_31 = *(int *)local_60.field1 != 0;
    UNLOCK();
  }
  local_68.field1 = (Data *)puVar1;
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
            (iVar3,(QString *)0x3b19,(QStringList *)&local_60.field0,(QStringList *)&local_68.field0
             ,(CSlotInfo *)&local_40,SUB81(&local_a8,0),
             (QWidget *)((ulong)in_stack_fffffffffffffefc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_c8);
  QVariant::~QVariant((QVariant *)&local_88);
  if (local_a8 != (int *)0x0) {
    LOCK();
    *local_a8 = *local_a8 + -1;
    local_31 = *local_a8 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_a8 != (int *)0x0)) {
      operator_delete(local_a8);
    }
  }
  FUN_100039a80(&local_68);
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10032042c;
    }
    QArrayData::deallocate((QArrayData *)local_60.field1,2,8);
  }
LAB_10032042c:
  FUN_100039a80(&local_40);
LAB_100320435:
  FUN_10035b1b0(*(undefined8 *)(param_1 + 0x148),1,0);
  return;
}

