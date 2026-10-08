
void FUN_100165c20(long param_1,long *param_2)

{
  QString *this;
  QString QVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
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
    goto LAB_100165f7a;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    _PrlHandle_Free(*(long *)(param_1 + 0x98));
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  iVar3 = _PrlResult_GetParam(local_38);
  if (iVar3 < 0) {
    FUN_100df99c0("","prl_client_app",0,"Error: Failed to get user profile handle");
  }
  local_50 = local_38;
  if (local_38 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getParamXML(&local_48,&local_50,0);
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  QVar1.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0xd8);
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
      if ((bool)local_21) goto LAB_100165d48;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100165d48:
  CDispUser::getUserName();
  this = (QString *)(param_1 + 0x48);
  QString::operator=(this,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100165d98;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100165d98:
  iVar3 = QString::lastIndexOf(this,0x40,0xffffffff,1);
  if (iVar3 != -1) {
    QString::remove((int)this,iVar3);
  }
  plVar4 = (long *)CDispUser::getApplianceConfigs();
  pcVar2 = *(code **)(*plVar4 + 0x68);
  FUN_100d842d0(&local_78);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_21 = *(int *)local_78 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e2468c);
  QString::append(&local_70);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100165e50;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100165e50:
  FUN_100137810(&local_68,&local_70,PTR_s_appliancesConfigCache_102270fc0);
  (*pcVar2)(plVar4,&local_68,1,1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100165eab;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100165eab:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100165edb;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100165edb:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100165f0b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100165f0b:
  uVar5 = FUN_100794960();
  FUN_100794eb0(uVar5,param_1);
  FUN_100800970(param_1,*(undefined8 *)(param_1 + 0xd8));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100165f7a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100165f7a:
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return;
}

