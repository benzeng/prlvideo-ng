
undefined8 FUN_1001e5bc0(byte param_1)

{
  int iVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  undefined4 uVar4;
  QArrayData *pQVar5;
  Data *pDVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_90 [2];
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  AnonymousUnion0 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_100d92750(&local_40);
  cVar3 = FUN_1001247f0(&local_40);
  if (cVar3 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Failed to start command [%s].",
                  local_48 + *(long *)(local_48 + 0x10));
    uVar7 = 0x80015431;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001e61b4;
      }
      QArrayData::deallocate(local_48,1,8);
    }
    goto LAB_1001e61b4;
  }
  pcVar8 = "start";
  if (param_1 != 0) {
    pcVar8 = "restart";
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(pcVar8,(uint)param_1 * 2 + 5);
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",2,"Run services (mode=%s).",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001e5c8c;
      }
      QArrayData::deallocate(local_58,1,8);
    }
  }
LAB_1001e5c8c:
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_60,&local_50);
  uVar4 = QProcess::execute(&local_40,(QStringList *)&local_60.field0);
  AVar2 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001e5d41;
    }
    iVar1 = *(int *)(local_60.field1 + 0xc);
    if (iVar1 != *(int *)(local_60.field1 + 8)) {
      lVar9 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_60.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar5 == 0) {
LAB_1001e5d20:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar5 = *(QArrayData **)pDVar6;
            goto LAB_1001e5d20;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1001e5d41:
  switch(uVar4) {
  case 0:
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("[BOOTSTRAP]","prl_client_app",2,"Services are running (mode=%s).",
                    local_80 + *(long *)(local_80 + 0x10));
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001e5ffe;
        }
        QArrayData::deallocate(local_80,1,8);
      }
    }
LAB_1001e5ffe:
    QSettings::QSettings((QSettings *)local_90,(QObject *)0x0);
    pQVar5 = (QArrayData *)QString::fromAscii_helper("ForceToRestartServices",0x16);
    QSettings::remove(local_90);
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001e606d;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_1001e606d:
    uVar7 = 0;
    QSettings::~QSettings((QSettings *)local_90);
    break;
  default:
    QString::toUtf8();
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,
                  "Services are NOT running (mode=%s). Exit code is %d",
                  local_b0 + *(long *)(local_b0 + 0x10),uVar4);
    uVar7 = 0x80015377;
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
    break;
  case 2:
    QString::toUtf8();
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,
                  "Services are NOT running (mode=%s). Need reinstall app. Exit code is %d",
                  local_a0 + *(long *)(local_a0 + 0x10),2);
    uVar7 = 0x80015431;
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_a0,1,8);
    }
    break;
  case 9:
    QString::toUtf8();
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,
                  "Services are NOT running (mode=%s). Kext loading is blocked. Exit code is %d",
                  local_a8 + *(long *)(local_a8 + 0x10),9);
    uVar7 = 0x80015522;
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
    break;
  case 0xfffffffe:
    QString::toUtf8();
    pQVar5 = local_68;
    lVar9 = *(long *)(local_68 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Failed to %s services command [%s]",
                  pQVar5 + lVar9,local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001e5ddf;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_1001e5ddf:
    uVar7 = 0x80015378;
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_68,1,8);
    }
    break;
  case 0xffffffff:
    QString::toUtf8();
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,
                  "Failed to %s services. The process has been aborted unexpectedly.",
                  local_78 + *(long *)(local_78 + 0x10));
    uVar7 = 0x80015379;
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_78,1,8);
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001e61b4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001e61b4:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar7;
}

