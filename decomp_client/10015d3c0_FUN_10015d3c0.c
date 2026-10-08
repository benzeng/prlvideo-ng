
void FUN_10015d3c0(long param_1)

{
  int iVar1;
  long lVar2;
  QArrayData *pQVar3;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  int local_3c;
  QArrayData *local_38;
  QArrayData *local_30;
  long local_28;
  undefined1 local_19;
  
  local_28 = 0;
  iVar1 = _PrlSrv_GetServerInfo(*(undefined8 *)(param_1 + 0x80),&local_28);
  if (-1 < iVar1) {
    local_3c = 0;
    iVar1 = _PrlSrvInfo_GetServerUuid(local_28,0,&local_3c);
    if (iVar1 < 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to receive uuid string length");
    }
    else {
      QByteArray::QByteArray((QByteArray *)&local_48,local_3c,'?');
      lVar2 = local_28;
      if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
      }
      iVar1 = _PrlSrvInfo_GetServerUuid(lVar2,local_48 + *(long *)(local_48 + 0x10),&local_3c);
      if (iVar1 < 0) {
        FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to get server uuid");
      }
      else {
        pQVar3 = local_48 + *(long *)(local_48 + 0x10);
        if ((pQVar3 != (QArrayData *)0x0) && (*(uint *)(local_48 + 4) != 0)) {
          lVar2 = 0;
          do {
            if (pQVar3[lVar2] == (QArrayData)0x0) break;
            lVar2 = lVar2 + 1;
          } while ((uint)lVar2 < *(uint *)(local_48 + 4));
          if ((int)lVar2 == -1) {
            _strlen((char *)pQVar3);
          }
        }
        QString::fromUtf8_helper((char *)&local_58,(int)pQVar3);
        QString::normalized(&local_50,&local_58,1,0);
        QString::operator=((QString *)(param_1 + 0x70),&local_50);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_19 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_10015d4fa;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_10015d4fa:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_19 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_10015d62e;
          }
          QArrayData::deallocate(local_58,2,8);
        }
      }
LAB_10015d62e:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_19 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10015d65e;
        }
        QArrayData::deallocate(local_48,1,8);
      }
    }
LAB_10015d65e:
    local_3c = 0;
    iVar1 = _PrlSrvInfo_GetProductVersion(local_28,0,&local_3c);
    if (iVar1 < 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to receive version string length");
      goto LAB_10015d80d;
    }
    QByteArray::QByteArray((QByteArray *)&local_60,local_3c,'?');
    lVar2 = local_28;
    if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f)
      ;
    }
    iVar1 = _PrlSrvInfo_GetProductVersion(lVar2,local_60 + *(long *)(local_60 + 0x10),&local_3c);
    if (iVar1 < 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to get server version");
    }
    else {
      pQVar3 = local_60 + *(long *)(local_60 + 0x10);
      if ((pQVar3 != (QArrayData *)0x0) && (*(uint *)(local_60 + 4) != 0)) {
        lVar2 = 0;
        do {
          if (pQVar3[lVar2] == (QArrayData)0x0) break;
          lVar2 = lVar2 + 1;
        } while ((uint)lVar2 < *(uint *)(local_60 + 4));
        if ((int)lVar2 == -1) {
          _strlen((char *)pQVar3);
        }
      }
      QString::fromUtf8_helper((char *)&local_70,(int)pQVar3);
      QString::normalized(&local_68,&local_70,1,0);
      QString::operator=((QString *)(param_1 + 0x58),&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_19 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10015d76d;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_10015d76d:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_19 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10015d7dd;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
LAB_10015d7dd:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_19 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10015d80d;
      }
      QArrayData::deallocate(local_60,1,8);
    }
    goto LAB_10015d80d;
  }
  local_38 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_19 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to obtain server info handle for %s",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10015d5b3;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10015d5b3:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10015d80d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10015d80d:
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  return;
}

