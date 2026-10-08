
undefined8 FUN_100a1a0b0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  size_t sVar4;
  int iVar5;
  Data_conflict local_e8;
  undefined4 local_e0;
  QArrayData *local_d8;
  int *local_d0 [4];
  QVariant local_b0 [2];
  QVariant local_98;
  QArrayData *local_88;
  QString local_80;
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
  iVar5 = -1;
  if (PTR_s__location__102280a70 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s__location__102280a70);
    iVar5 = (int)sVar4;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  QVariant::QVariant(&local_40,0);
  FUN_10007af00(&local_28,&local_30,&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1a14c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100a1a14c:
  puVar2 = PTR_s__command__102280a68;
  iVar5 = -1;
  if (PTR_s__command__102280a68 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s__command__102280a68);
    iVar5 = (int)sVar4;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  local_60.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("gen_auth_token",0xe);
  QVariant::QVariant(&local_58,&local_60);
  FUN_10007af00(&local_28,&local_48,&local_58);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_19 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1a1e3;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100a1a1e3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1a213;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a1a213:
  puVar2 = PTR_s_service_102280ab0;
  iVar5 = -1;
  if (PTR_s_service_102280ab0 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_service_102280ab0);
    iVar5 = (int)sVar4;
  }
  local_68 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  puVar3 = PTR_s_pax_102280c68;
  puVar2 = PTR_s_pd_102280c60;
  if (*(int *)(param_1 + 0x1c) == 1) {
    iVar5 = -1;
    if (PTR_s_pd_102280c60 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_pd_102280c60);
      iVar5 = (int)sVar4;
    }
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar2,iVar5)
    ;
  }
  else if (*(int *)(param_1 + 0x1c) == 0) {
    iVar5 = -1;
    if (PTR_s_pax_102280c68 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_pax_102280c68);
      iVar5 = (int)sVar4;
    }
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar3,iVar5)
    ;
  }
  else {
    iVar5 = -1;
    if (PTR_s_pax_102280c68 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_pax_102280c68);
      iVar5 = (int)sVar4;
    }
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar3,iVar5)
    ;
  }
  QVariant::QVariant(&local_78,&local_80);
  FUN_10007af00(&local_28,&local_68,&local_78);
  QVariant::~QVariant(&local_78);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_19 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1a31f;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100a1a31f:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1a34f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100a1a34f:
  puVar2 = PTR_s_AuthorizationToken_102280ac0;
  iVar5 = -1;
  if (PTR_s_AuthorizationToken_102280ac0 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_AuthorizationToken_102280ac0);
    iVar5 = (int)sVar4;
  }
  local_88 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  QVariant::QVariant(&local_98,(QString *)(param_1 + 0x38));
  FUN_10007af00(&local_28,&local_88,&local_98);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1a3da;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100a1a3da:
  CAbstractTask::setWaitForSubTaskCompletion();
  local_d8 = (QArrayData *)
             QString::fromAscii_helper("1onRequestPaxAuthTokenCompleted(PRL_RESULT,QVariant)",0x34);
  local_e0 = 0x80000000;
  local_e8.field7 = 0;
  FUN_100a1c600(local_d0,param_1,&local_d8,&local_e8);
  FUN_100a0c410(2,&local_28,local_d0,0);
  QVariant::~QVariant(local_b0);
  if (local_d0[0] != (int *)0x0) {
    LOCK();
    *local_d0[0] = *local_d0[0] + -1;
    local_19 = *local_d0[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_d0[0] != (int *)0x0)) {
      operator_delete(local_d0[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_e8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_19 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1a4bc;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100a1a4bc:
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

