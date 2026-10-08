
void FUN_100302d90(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  QArrayData *pQVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined4 *puVar10;
  int iVar11;
  long local_60;
  QArrayData *local_58;
  undefined4 local_50 [2];
  undefined *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (param_3 == -0x7fffffff) {
    pcVar8 = "(!)Error: can\'t send answer to server.";
LAB_100302dc3:
    FUN_100df99c0("[MESSAGE_MNG]","prl_client_app",0,pcVar8);
    return;
  }
  uVar4 = FUN_100152280();
  lVar5 = CMessageInfo::data();
  lVar5 = FUN_100152a20(uVar4,lVar5 + 8);
  if (lVar5 == 0) {
    uVar4 = FUN_100152280();
    lVar5 = CMessageInfo::data();
    lVar5 = FUN_1001547d0(uVar4,lVar5 + 8);
    if (lVar5 == 0) {
      pcVar8 = "(!)Error: can\'t get server instance.";
      goto LAB_100302dc3;
    }
  }
  lVar6 = CMessageInfo::data();
  puVar3 = PTR_shared_null_1021e1288;
  local_50[0] = 0xffffffff;
  local_48 = PTR_shared_null_1021e1288;
  local_40 = 0xffffffff;
  lVar6 = *(long *)(*(long *)(lVar6 + 0x40) + 0x10);
  lVar7 = 0;
  if (lVar6 == 0) {
LAB_100302e9d:
    lVar9 = 0;
  }
  else {
    do {
      while (lVar9 = lVar6, iVar11 = *(int *)(lVar9 + 0x18), param_3 <= iVar11) {
        lVar6 = *(long *)(lVar9 + 8);
        lVar7 = lVar9;
        if (*(long *)(lVar9 + 8) == 0) goto LAB_100302e99;
      }
      lVar6 = *(long *)(lVar9 + 0x10);
    } while (*(long *)(lVar9 + 0x10) != 0);
    if (lVar7 == 0) goto LAB_100302e9d;
    iVar11 = *(int *)(lVar7 + 0x18);
    lVar9 = lVar7;
LAB_100302e99:
    if (param_3 < iVar11) goto LAB_100302e9d;
  }
  puVar10 = local_50;
  if (lVar9 != 0) {
    puVar10 = (undefined4 *)(lVar9 + 0x20);
  }
  uVar1 = *puVar10;
  pQVar2 = *(QArrayData **)(puVar10 + 2);
  iVar11 = *(int *)pQVar2;
  if (1 < iVar11 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
    iVar11 = *(int *)pQVar2;
  }
  if (iVar11 != -1) {
    if (iVar11 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100302eef;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100302eef:
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100302f22;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100302f22:
  uVar4 = FUN_100dddcf0(uVar1);
  CMessageInfo::data();
  QString::toUtf8();
  if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
  }
  FUN_100df99c0("[MESSAGE_MNG]","prl_client_app",0,
                "Sending answer to server. The answer is %s. Issuer id = %s",uVar4,
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100302fc5;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100302fc5:
  lVar6 = CMessageInfo::data();
  local_60 = *(long *)(lVar6 + 0x38);
  if (local_60 != 0) {
    _PrlHandle_AddRef();
  }
  FUN_100161e00(lVar5,&local_60,uVar1);
  if (local_60 != 0) {
    _PrlHandle_Free();
  }
  return;
}

