
void FUN_1001d2740(long param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  QString local_88;
  undefined *local_80;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  ExternalRefCountData *local_38;
  AnonymousUnion0 local_30;
  undefined1 local_21;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (pvVar2 = *(void **)(param_1 + 0x18), pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (-1 < param_2) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    uVar4 = FUN_1001d50a0();
    FUN_1001d5260(uVar4);
    return;
  }
  if (*(char *)(param_1 + 0x32) != '\0') {
    iVar3 = CMessageManager::instance();
    local_30.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_38 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_78 = (int *)0x0;
    uStack_70 = 0;
    local_60 = 0;
    local_68 = 0;
    local_50 = 0x80000000;
    local_58.field7 = 0;
    local_48 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)0x80015498,(QStringList *)0x0,(QStringList *)&local_30.field0,
               (CSlotInfo *)&local_38,SUB81(&local_78,0));
    QVariant::~QVariant((QVariant *)&local_58);
    if (local_78 != (int *)0x0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_21 = *local_78 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_78 != (int *)0x0)) {
        operator_delete(local_78);
      }
    }
    FUN_100039a80(&local_38);
    FUN_100039a80(&local_30);
  }
  *(undefined4 *)(param_1 + 0x10) = 0x80000007;
  *(undefined1 *)(param_1 + 0x30) = 0;
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_80 = PTR_shared_null_1021e15e8;
  *(undefined4 *)(param_1 + 0x38) = 0xffff;
  QString::operator=((QString *)(param_1 + 0x40),&local_88);
  FUN_1000e5fc0(param_1 + 0x48,&local_80);
  FUN_100039a80(&local_80);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_21 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001d28e4;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1001d28e4:
  *(undefined1 *)(param_1 + 0x32) = 0;
  FUN_100809ce0(param_1);
  return;
}

