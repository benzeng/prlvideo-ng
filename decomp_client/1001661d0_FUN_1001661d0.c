
void FUN_1001661d0(long param_1,long *param_2)

{
  QString QVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  long local_50;
  QArrayData *local_48;
  long local_40;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_40 = *param_2;
  if (local_40 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getResultHandle(&local_38,&local_40);
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  if (local_38 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: result handle is invalid.");
    goto LAB_1001664ce;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    _PrlHandle_Free(*(long *)(param_1 + 0xa0));
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  iVar4 = _PrlResult_GetParam(local_38);
  if (iVar4 < 0) {
    FUN_100df99c0("","prl_client_app",0,"Error: Failed to get server common preferences handle");
  }
  local_50 = local_38;
  if (local_38 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getParamXML(&local_48,&local_50,0);
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  QVar1.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0xd0);
  local_58 = local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_21 = *(int *)local_48 != 0;
    UNLOCK();
  }
  CBaseNode::fromString(QVar1,SUB81(&local_58,0),(QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001662f8;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001662f8:
  *(undefined1 *)(param_1 + 0x139) = 1;
  FUN_10011d730(*(undefined8 *)(param_1 + 0xd0));
  plVar2 = *(long **)(param_1 + 0xd0);
  pcVar3 = *(code **)(*plVar2 + 0x68);
  FUN_100d842d0(&local_70);
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_21 = *(int *)local_70 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e2468c);
  QString::append(&local_68);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10016638e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10016638e:
  FUN_100137810(&local_60,&local_68,PTR_s_dspPrefsCache_102270fb0);
  iVar4 = (*pcVar3)(plVar2,&local_60,1,1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001663ec;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001663ec:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10016641c;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10016641c:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10016644c;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10016644c:
  if (iVar4 != 0) {
    FUN_100df99c0("","prl_client_app",0,"Failed to write dsp prefs XML");
  }
  FUN_100800ae0(param_1,*(undefined8 *)(param_1 + 0xd0));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001664ce;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001664ce:
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return;
}

