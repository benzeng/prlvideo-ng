
undefined4 FUN_100174010(long param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  QArrayData *pQVar5;
  undefined4 uVar6;
  QArrayData *local_80;
  undefined4 local_6c;
  QArrayData *local_68;
  QArrayData *local_60;
  long local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  lVar2 = _PrlSrv_GetNetServiceStatus(*(undefined8 *)(param_1 + 0x80));
  _PrlJob_Wait(lVar2,DAT_100e151d8);
  local_28 = 0x80000007;
  iVar1 = _PrlJob_GetRetCode(lVar2,&local_28);
  if (-1 < iVar1) {
    local_40 = 0;
    iVar1 = _PrlJob_GetResult(lVar2,&local_40);
    if (iVar1 < 0) {
      pcVar3 = (char *)FUN_100dddcf0(iVar1);
      iVar1 = -1;
      if (pcVar3 != (char *)0x0) {
        sVar4 = _strlen(pcVar3);
        iVar1 = (int)sVar4;
      }
      local_48 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar1);
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,
                    "Error: failed to get handle to job result. Return code: [%s]",
                    local_50 + *(long *)(local_50 + 0x10));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_21 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100174208;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_100174208:
      uVar6 = 3;
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_21 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1001743eb;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
    else {
      local_58 = 0;
      iVar1 = _PrlResult_GetParam(local_40,&local_58);
      if (iVar1 < 0) {
        pcVar3 = (char *)FUN_100dddcf0(iVar1);
        iVar1 = -1;
        if (pcVar3 != (char *)0x0) {
          sVar4 = _strlen(pcVar3);
          iVar1 = (int)sVar4;
        }
        local_60 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar1);
        QString::toUtf8();
        FUN_100df99c0("","prl_client_app",0,
                      "Error: failed to extract parameter from result handle. Return code: [%s]",
                      local_68 + *(long *)(local_68 + 0x10));
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_21 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1001742d8;
          }
          QArrayData::deallocate(local_68,1,8);
        }
LAB_1001742d8:
        uVar6 = 3;
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_21 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1001743dd;
          }
          QArrayData::deallocate(local_60,2,8);
        }
      }
      else {
        iVar1 = _PrlNetSvc_GetStatus(local_58,&local_6c);
        uVar6 = local_6c;
        if (iVar1 < 0) {
          pcVar3 = (char *)FUN_100dddcf0(iVar1);
          iVar1 = -1;
          if (pcVar3 != (char *)0x0) {
            sVar4 = _strlen(pcVar3);
            iVar1 = (int)sVar4;
          }
          pQVar5 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar1);
          QString::toUtf8();
          FUN_100df99c0("","prl_client_app",0,
                        "Error: failed to extracts Parallels Net service status. Return code: [%s]",
                        local_80 + *(long *)(local_80 + 0x10));
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_21 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_21) goto LAB_1001743a8;
            }
            QArrayData::deallocate(local_80,1,8);
          }
LAB_1001743a8:
          uVar6 = 3;
          if (*(int *)pQVar5 != -1) {
            if (*(int *)pQVar5 != 0) {
              LOCK();
              *(int *)pQVar5 = *(int *)pQVar5 + -1;
              local_21 = *(int *)pQVar5 != 0;
              UNLOCK();
              if ((bool)local_21) goto LAB_1001743dd;
            }
            QArrayData::deallocate(pQVar5,2,8);
          }
        }
      }
LAB_1001743dd:
      if (local_58 != 0) {
        _PrlHandle_Free();
      }
    }
LAB_1001743eb:
    if (local_40 != 0) {
      _PrlHandle_Free();
    }
    goto LAB_1001743f9;
  }
  pcVar3 = (char *)FUN_100dddcf0(iVar1);
  iVar1 = -1;
  if (pcVar3 != (char *)0x0) {
    sVar4 = _strlen(pcVar3);
    iVar1 = (int)sVar4;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar1);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Error: couldn\'t get job return code. Return code: [%s]",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100174138;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100174138:
  uVar6 = 3;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001743f9;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001743f9:
  if (lVar2 != 0) {
    _PrlHandle_Free(lVar2);
  }
  return uVar6;
}

