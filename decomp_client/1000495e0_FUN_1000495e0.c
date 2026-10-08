
ulong FUN_1000495e0(undefined8 param_1,QString *param_2,undefined8 param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  char *pcVar9;
  QArrayData *local_c8;
  QArrayData *local_c0;
  undefined8 local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QTypedArrayData<unsigned_short> *local_88;
  undefined1 local_80 [32];
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  undefined8 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  cVar3 = FUN_100045a30(param_2,&local_48);
  local_50.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1db6890);
  QString::append(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100049681;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100049681:
  cVar4 = QFile::exists(&local_50);
  if (cVar4 == '\0') {
    QString::toUtf8();
    pQVar2 = local_58;
    lVar1 = *(long *)(local_58 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("SGASMGMT","prl_client_app",0,
                  "Error: configuration file \"%s\" for bundle \"%s\" not found",pQVar2 + lVar1,
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100049817;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_100049817:
    uVar8 = 0xffffffff;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100049bc3;
      }
      QArrayData::deallocate(local_58,1,8);
    }
    goto LAB_100049bc3;
  }
  local_88 = local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  FUN_100b56ca0(local_80,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000496e8;
    }
    QArrayData::deallocate((QArrayData *)local_88,2,8);
  }
LAB_1000496e8:
  cVar4 = FUN_100045e20(param_2,1);
  if (cVar4 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("SGASMGMT","prl_client_app",0,"Error: failed to copy executable binary for \"%s\""
                  ,local_90 + *(long *)(local_90 + 0x10));
    uVar8 = 0xffffffff;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100049bba;
      }
      QArrayData::deallocate(local_90,1,8);
    }
  }
  else {
    iVar5 = FUN_100049f30(param_1,param_2,local_80,param_3);
    if (iVar5 == 0) {
      iVar5 = FUN_10004b3e0();
      if (iVar5 == -1) {
        QString::toUtf8();
        FUN_100df99c0("SGASMGMT","prl_client_app",0,
                      "Error: failed to patch big icon for bundle \"%s\"",
                      local_a0 + *(long *)(local_a0 + 0x10));
        uVar8 = 0xffffffff;
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100049bba;
          }
          QArrayData::deallocate(local_a0,1,8);
        }
      }
      else {
        iVar6 = FUN_10004b4e0(param_1,param_2,local_80,param_3,iVar5 == 1);
        if (iVar6 == -1) {
          QString::toUtf8();
          FUN_100df99c0("SGASMGMT","prl_client_app",0,
                        "Error: failed to patch configuration file for bundle \"%s\"",
                        local_a8 + *(long *)(local_a8 + 0x10));
          uVar8 = 0xffffffff;
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100049bba;
            }
            QArrayData::deallocate(local_a8,1,8);
          }
        }
        else {
          FUN_100046ee0(param_2,param_3);
          QString::toUtf8();
          _utimes((char *)(local_b0 + *(long *)(local_b0 + 0x10)),(timeval *)0x0);
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100049976;
            }
            QArrayData::deallocate(local_b0,1,8);
          }
LAB_100049976:
          if (cVar3 != '\0') {
            local_b8 = local_48;
            FUN_100045a30(param_2);
          }
          local_c0 = (QArrayData *)QString::fromAscii_helper("",0);
          cVar3 = QString::startsWith(param_2,&local_c0,1);
          if (cVar3 != '\0') {
            uVar7 = QFile::permissions(param_2);
            FUN_100052300(param_2,uVar7 | 0x66);
          }
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100049a13;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_100049a13:
          FUN_100045900(param_2);
          FUN_100047600(param_1,param_2);
          if (1 < DAT_10230ffd0) {
            QString::toUtf8();
            pcVar9 = "successfully";
            if (iVar5 == 1) {
              pcVar9 = "poorly";
            }
            FUN_100df99c0("SGASMGMT","prl_client_app",2,"Helper bundle \"%s\" %s patched",
                          local_c8 + *(long *)(local_c8 + 0x10),pcVar9);
            if (*(int *)local_c8 != -1) {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_31 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100049abc;
              }
              QArrayData::deallocate(local_c8,1,8);
            }
          }
LAB_100049abc:
          uVar8 = (ulong)(iVar5 == 1);
        }
      }
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",0,"Error: failed to patch Info.plist for \"%s\"",
                    local_98 + *(long *)(local_98 + 0x10));
      uVar8 = 0xffffffff;
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100049bba;
        }
        QArrayData::deallocate(local_98,1,8);
      }
    }
  }
LAB_100049bba:
  FUN_100b57060(local_80);
LAB_100049bc3:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return uVar8;
}

