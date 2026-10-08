
void FUN_10018dea0(long param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  QArrayData *pQVar4;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined4 local_40;
  int local_3c;
  long local_38;
  long local_30;
  int local_28;
  undefined1 local_21;
  
  iVar2 = _PrlVmInfo_IsInvalid(*param_2,&local_28);
  if (iVar2 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlVmInfo_IsInvalid failed.");
  }
  else if (local_28 != 0) {
    FUN_10018b8f0(param_1);
  }
  local_30 = 0;
  iVar2 = _PrlVmInfo_GetAccessRights(*param_2,&local_30);
  if (iVar2 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlVmInfo_GetAccessRights failed.");
  }
  else {
    local_38 = local_30;
    if (local_30 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_10018e250(param_1,&local_38);
    if (local_38 != 0) {
      _PrlHandle_Free();
    }
  }
  if (param_3 != '\0') goto LAB_10018e159;
  iVar2 = _PrlVmInfo_GetState(*param_2,&local_3c);
  if ((iVar2 < 0) || (local_3c == 0x30000011)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlVmInfo_GetState failed.");
  }
  else {
    FUN_10018c880(param_1);
  }
  local_40 = 0;
  iVar2 = _PrlAcl_GetOwnerName(*(undefined8 *)(param_1 + 0x70),0,&local_40);
  if (iVar2 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlAcl_GetOwnerName failed.");
    goto LAB_10018e159;
  }
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  QByteArray::resize((int)&local_48);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  iVar2 = _PrlAcl_GetOwnerName(uVar1,local_48 + *(long *)(local_48 + 0x10),&local_40);
  if (iVar2 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlAcl_GetOwnerName failed.");
  }
  else {
    pQVar4 = local_48 + *(long *)(local_48 + 0x10);
    if ((pQVar4 != (QArrayData *)0x0) && (*(uint *)(local_48 + 4) != 0)) {
      lVar3 = 0;
      do {
        if (pQVar4[lVar3] == (QArrayData)0x0) break;
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(local_48 + 4));
      if ((int)lVar3 == -1) {
        _strlen((char *)pQVar4);
      }
    }
    QString::fromUtf8_helper((char *)&local_58,(int)pQVar4);
    QString::normalized(&local_50,&local_58,1,0);
    FUN_10018e600(param_1,&local_50);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10018e0b9;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10018e0b9:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10018e129;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_10018e129:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018e159;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10018e159:
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  return;
}

