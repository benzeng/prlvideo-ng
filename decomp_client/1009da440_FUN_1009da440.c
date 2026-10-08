
void FUN_1009da440(QNetworkProxy *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 uVar3;
  char cVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  QNetworkProxy local_88 [8];
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined4 local_64;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  Data *local_38;
  undefined1 local_29;
  
  FUN_1009e1320(&local_38,0,0xffffffff);
  if (1 < *(uint *)local_38) {
    FUN_100036c40(&local_38,*(uint *)(local_38 + 4));
  }
  local_40 = *(QArrayData **)(local_38 + (long)(int)*(uint *)(local_38 + 8) * 8 + 0x10);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_29 = *(int *)local_40 != 0;
    UNLOCK();
  }
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","ProblemReportUI",3,"Report url: %s",local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1009da50c;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
LAB_1009da50c:
  FUN_100094ab0("PRL_RESULT",0,0);
  puVar2 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  local_60 = (QArrayData *)PTR_shared_null_1021e1288;
  local_64 = 0;
  local_70 = (QArrayData *)QString::fromAscii_helper("https",5);
  uVar3 = QString::startsWith(&local_40,&local_70,1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009da58f;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1009da58f:
  local_78 = (QArrayData *)puVar2;
  cVar4 = FUN_1009db830(&local_50,&local_64,&local_58,&local_60,1,uVar3,&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009da5ec;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1009da5ec:
  if (cVar4 == '\0') {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","ProblemReportUI",2,"Network proxy is not detected");
    }
  }
  else {
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","ProblemReportUI",2,"Network proxy is detected, host = \'%s\', port = %d",
                    local_80 + *(long *)(local_80 + 0x10),local_64);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009da666;
        }
        QArrayData::deallocate(local_80,1,8);
      }
    }
LAB_1009da666:
    QNetworkProxy::QNetworkProxy(local_88,3,&local_50,(undefined2)local_64,&local_58,&local_60);
    QNetworkProxy::operator=(param_1 + 0x10,local_88);
    QNetworkProxy::~QNetworkProxy(local_88);
  }
  CProblemReportDelegate::proxyDetected(param_1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009da6fe;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009da6fe:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009da72e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009da72e:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009da75e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009da75e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009da78e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009da78e:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar7 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_38 + (long)iVar1 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1009da800:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1009da800;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

