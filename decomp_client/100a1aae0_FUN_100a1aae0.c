
undefined8 FUN_100a1aae0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  size_t sVar3;
  int iVar4;
  Data_conflict local_c8;
  undefined4 local_c0;
  QArrayData *local_b8;
  int *local_b0 [4];
  QVariant local_90 [2];
  QVariant local_78;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  QArrayData *local_30;
  _func_void_Node_ptr *local_28;
  undefined1 local_19;
  
  puVar2 = PTR_s__location__102280a70;
  local_28 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  iVar4 = -1;
  if (PTR_s__location__102280a70 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s__location__102280a70);
    iVar4 = (int)sVar3;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar4);
  iVar4 = 1;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar4 = (uint)(*(int *)(param_1 + 0x1c) == 1) * 3 + 1;
  }
  QVariant::QVariant(&local_40,iVar4);
  FUN_10007af00(&local_28,&local_30,&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1ab95;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100a1ab95:
  puVar2 = PTR_s__command__102280a68;
  iVar4 = -1;
  if (PTR_s__command__102280a68 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s__command__102280a68);
    iVar4 = (int)sVar3;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar4);
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("auth",4);
  QVariant::QVariant(&local_58,&local_60);
  FUN_10007af00(&local_28,&local_48,&local_58);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_19 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1ac2c;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100a1ac2c:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1ac5c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a1ac5c:
  puVar2 = PTR_s_token_102280aa0;
  iVar4 = -1;
  if (PTR_s_token_102280aa0 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_token_102280aa0);
    iVar4 = (int)sVar3;
  }
  local_68 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar4);
  QVariant::QVariant(&local_78,(QString *)(param_1 + 0x40));
  FUN_10007af00(&local_28,&local_68,&local_78);
  QVariant::~QVariant(&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1acde;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100a1acde:
  CAbstractTask::setWaitForSubTaskCompletion();
  local_b8 = (QArrayData *)
             QString::fromAscii_helper("1onAuthorizePaxTokenCompleted(PRL_RESULT,QVariant)",0x32);
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  FUN_100a1c600(local_b0,param_1,&local_b8,&local_c8);
  FUN_100a0c410(2,&local_28,local_b0,0);
  QVariant::~QVariant(local_90);
  if (local_b0[0] != (int *)0x0) {
    LOCK();
    *local_b0[0] = *local_b0[0] + -1;
    local_19 = *local_b0[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_b0[0] != (int *)0x0)) {
      operator_delete(local_b0[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_19 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1adc0;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100a1adc0:
  if (*(int *)(local_28 + 0x10) != -1) {
    if (*(int *)(local_28 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_28 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return 0;
      }
      local_19 = 0;
    }
    QHashData::free_helper(local_28);
  }
  return 0;
}

