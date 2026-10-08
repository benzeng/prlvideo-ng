
void FUN_1000b2680(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  QArrayData *pQVar3;
  char cVar4;
  char cVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  QArrayData *pQVar9;
  undefined8 *puVar10;
  int local_94;
  QArrayData *local_90;
  QArrayData *local_88;
  QFileInfo local_80 [8];
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QFileInfo local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    FUN_100188480(&local_48,param_2);
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",3,"Reopen requested apps for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b271e;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1000b271e:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b274e;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1000b274e:
  if (*(char *)(param_1 + 0x94) != '\0') {
    FUN_1000afab0(param_1,param_2);
  }
  if (*(int *)(*(long *)(param_1 + 0x68) + 0xc) == *(int *)(*(long *)(param_1 + 0x68) + 8)) {
    return;
  }
  FUN_10018c2b0(param_2);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QFileInfo::QFileInfo(local_50,&local_58);
  puVar10 = (undefined8 *)(param_1 + 0x68);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b27d9;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1000b27d9:
  puVar6 = (uint *)*puVar10;
  iVar7 = puVar6[3] - puVar6[2];
  if (iVar7 < 1) {
LAB_1000b2b07:
    QFileInfo::~QFileInfo(local_50);
    return;
  }
  lVar8 = (long)iVar7;
  local_94 = (puVar6[3] - 1) - puVar6[2];
  do {
    if (1 < *puVar6) {
      FUN_1000b6150(puVar10,puVar6[1]);
      puVar6 = (uint *)*puVar10;
    }
    lVar1 = *(long *)(puVar6 + ((int)puVar6[2] + lVar8) * 2 + 2);
    if (2 < DAT_10230ffd0) {
      QString::toUtf8();
      pQVar9 = local_60 + *(long *)(local_60 + 0x10);
      QString::toUtf8();
      pQVar3 = local_68;
      lVar2 = *(long *)(local_68 + 0x10);
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",3,
                    "Check ReopenApp req #%i: vmUuid=\"%s\", vmConfigPath=\"%s\", appPath=\"%s\"",
                    local_94,pQVar9,pQVar3 + lVar2,local_70 + *(long *)(local_70 + 0x10));
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000b28f1;
        }
        QArrayData::deallocate(local_70,1,8);
      }
LAB_1000b28f1:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000b2924;
        }
        QArrayData::deallocate(local_68,1,8);
      }
LAB_1000b2924:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000b2960;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
LAB_1000b2960:
    FUN_100188480(&local_78,param_2);
    cVar4 = operator==(&local_78,(QString *)(lVar1 + 0x58));
    cVar5 = '\x01';
    if (cVar4 == '\0') {
      QFileInfo::QFileInfo(local_80,(QString *)(lVar1 + 0x60));
      cVar5 = QFileInfo::operator==(local_50,local_80);
      QFileInfo::~QFileInfo(local_80);
    }
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b29d8;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_1000b29d8:
    if (cVar5 != '\0') {
      if (1 < DAT_10230ffd0) {
        QString::toUtf8();
        FUN_100df99c0("SGAC","prl_client_app",2,"Reopen appPath=\"%s\"",
                      local_88 + *(long *)(local_88 + 0x10));
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000b2a60;
          }
          QArrayData::deallocate(local_88,1,8);
        }
      }
LAB_1000b2a60:
      iVar7 = _LSOpenFSRef(lVar1,0);
      if (iVar7 != 0) {
        QString::toUtf8();
        FUN_100df99c0("SGAC","prl_client_app",0,"LSOpenFSRef() err %i, appPath=\"%s\"",iVar7,
                      local_90 + *(long *)(local_90 + 0x10));
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000b2ae8;
          }
          QArrayData::deallocate(local_90,1,8);
        }
      }
LAB_1000b2ae8:
      FUN_1000b4be0(puVar10,local_94);
    }
    if (lVar8 < 2) goto LAB_1000b2b07;
    lVar8 = lVar8 + -1;
    puVar6 = (uint *)*puVar10;
    local_94 = local_94 + -1;
  } while( true );
}

