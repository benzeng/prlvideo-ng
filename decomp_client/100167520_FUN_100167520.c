
void FUN_100167520(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined4 local_44;
  QArrayData *local_40;
  long local_38;
  long local_30;
  long local_28;
  char local_1a;
  undefined1 local_19;
  
  local_1a = '\0';
  local_28 = *param_2;
  if (local_28 != 0) {
    _PrlHandle_AddRef();
  }
  iVar2 = SdkUtils::getJobResultCode(&local_28,&local_1a);
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  if (local_1a == '\0') {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: couldn\'t get job return code. Return code: [%.8X]",iVar2);
    return;
  }
  if (iVar2 != 0) {
    return;
  }
  local_38 = *param_2;
  if (local_38 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getResultHandle(&local_30,&local_38);
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  lVar1 = local_30;
  if (local_30 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: result handle is invalid.");
    goto LAB_1001677d5;
  }
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_44 = 0;
  lVar4 = 0x18;
  if ((1 < (uint)*(undefined8 *)PTR_shared_null_1021e1288) ||
     (*(long *)(PTR_shared_null_1021e1288 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_40,(int)((ulong)*(undefined8 *)PTR_shared_null_1021e1288 >> 0x20) + 1,
               *(uint *)(PTR_shared_null_1021e1288 + 8) >> 0x1f);
    lVar4 = *(long *)(local_40 + 0x10);
  }
  iVar2 = _PrlResult_GetParamByIndexAsString(lVar1,0,local_40 + lVar4,&local_44);
  if (iVar2 == 0) {
    QByteArray::resize((int)&local_40);
    lVar1 = local_30;
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    iVar2 = _PrlResult_GetParamByIndexAsString
                      (lVar1,0,local_40 + *(long *)(local_40 + 0x10),&local_44);
    if (iVar2 == 0) {
      pQVar5 = local_40 + *(long *)(local_40 + 0x10);
      if (pQVar5 != (QArrayData *)0x0) {
        _strlen((char *)pQVar5);
      }
      QString::fromUtf8_helper((char *)&local_58,(int)pQVar5);
      QString::normalized(&local_50,&local_58,1,0);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_19 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100167775;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100167775:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_19 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1001677a5;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
    else {
      uVar3 = FUN_100dddcf0(iVar2);
      FUN_100df99c0("","prl_client_app",0,
                    "Can\'t get snapshot uuid parameter. Return code = [%.8X \'%s\']",iVar2,uVar3);
    }
  }
  else {
    uVar3 = FUN_100dddcf0(iVar2);
    FUN_100df99c0("","prl_client_app",0,
                  "Can\'t request snapshot uuid parameter length. Return code = [%.8X \'%s\']",iVar2
                  ,uVar3);
  }
LAB_1001677a5:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001677d5;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1001677d5:
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  return;
}

