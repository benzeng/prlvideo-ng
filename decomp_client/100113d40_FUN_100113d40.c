
undefined4 FUN_100113d40(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 local_54;
  long local_50;
  long local_48;
  int local_3c;
  QArrayData *local_38;
  long local_30;
  undefined1 local_21;
  
  FUN_10015aa20(&local_30,param_1);
  lVar2 = local_30;
  QString::toUtf8();
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  lVar2 = _PrlSrv_FsGetDirEntries(lVar2,local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100113dd8;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100113dd8:
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  iVar1 = _PrlJob_Wait(lVar2,60000);
  local_3c = iVar1;
  if (iVar1 < 0) {
    uVar3 = FUN_100dddcf0(iVar1);
    uVar4 = 0;
    FUN_100df99c0("","prl_client_app",0,"Failed to get FS_TYPE. nRetCode=%.8X \'%s\'",iVar1,uVar3);
  }
  else {
    iVar1 = _PrlJob_GetRetCode(lVar2,&local_3c);
    local_3c = iVar1;
    if (iVar1 < 0) {
      uVar3 = FUN_100dddcf0(iVar1);
      uVar4 = 0;
      FUN_100df99c0("","prl_client_app",0,"Failed to get FS_TYPE. nRetCode=%.8X \'%s\'",iVar1,uVar3)
      ;
    }
    else {
      local_48 = 0;
      iVar1 = _PrlJob_GetResult(lVar2,&local_48);
      local_3c = iVar1;
      if (iVar1 < 0) {
        uVar3 = FUN_100dddcf0(iVar1);
        uVar4 = 0;
        FUN_100df99c0("","prl_client_app",0,"Failed to get FS_TYPE. nRetCode=%.8X \'%s\'",iVar1,
                      uVar3);
      }
      else {
        local_50 = 0;
        iVar1 = _PrlResult_GetParam(local_48,&local_50);
        local_3c = iVar1;
        if (iVar1 < 0) {
          uVar3 = FUN_100dddcf0(iVar1);
          FUN_100df99c0("","prl_client_app",0,"Failed to get FS_TYPE. nRetCode=%.8X \'%s\'",iVar1,
                        uVar3);
          uVar4 = 0;
        }
        else {
          iVar1 = _PrlFsInfo_GetFsType(local_50,&local_54);
          uVar4 = local_54;
          local_3c = iVar1;
          if (iVar1 < 0) {
            uVar3 = FUN_100dddcf0(iVar1);
            FUN_100df99c0("","prl_client_app",0,"Failed to get FS_TYPE. nRetCode=%.8X \'%s\'",iVar1,
                          uVar3);
            uVar4 = 0;
          }
        }
        if (local_50 != 0) {
          _PrlHandle_Free();
        }
      }
      if (local_48 != 0) {
        _PrlHandle_Free();
      }
    }
  }
  if (lVar2 != 0) {
    _PrlHandle_Free(lVar2);
  }
  return uVar4;
}

