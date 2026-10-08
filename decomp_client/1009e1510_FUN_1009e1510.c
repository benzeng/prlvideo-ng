
QUrl * FUN_1009e1510(QUrl *param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  QUrl local_f8 [8];
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  long local_d0;
  undefined1 local_c8 [8];
  long local_c0;
  QHostAddress local_b8 [8];
  QArrayData *local_b0;
  QArrayData *local_a8;
  long local_a0;
  QString local_98;
  QUrl local_90 [8];
  QHostAddress local_88 [8];
  QUrl local_80 [8];
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  int *local_40;
  undefined1 local_31;
  
  FUN_1009e1320(&local_40,param_2);
  QUrl::QUrl(param_1);
  local_60 = local_40;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)&local_60);
      iVar4 = local_60[2];
      if (iVar4 != local_60[3]) {
        local_40 = local_40 + (long)local_40[2] * 2 + 4;
        piVar8 = local_60 + (long)iVar4 * 2 + 4;
        lVar5 = (long)local_60[3] * 8 + (long)iVar4 * -8;
        do {
          piVar2 = *(int **)local_40;
          *(int **)piVar8 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          local_40 = local_40 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_31 = *local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  if (local_60[2] != local_60[3]) {
    do {
      local_68 = *(QArrayData **)local_58;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        QString::toUtf8();
        FUN_100df99c0("","prl_problem_report_utils",0,"host = %s",
                      local_70 + *(long *)(local_70 + 0x10));
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009e1686;
          }
          QArrayData::deallocate(local_70,1,8);
        }
LAB_1009e1686:
        QUrl::QUrl(local_80,&local_68,0);
        QUrl::host(&local_78,local_80,0x7f00000);
        QUrl::~QUrl(local_80);
        QHostAddress::QHostAddress(local_88,&local_78);
        cVar3 = QHostAddress::isNull();
        if (cVar3 == '\0') {
          QUrl::QUrl(local_90,&local_68,0);
          QUrl::operator=(param_1,local_90);
          iVar4 = 5;
          QUrl::~QUrl(local_90);
        }
        else {
          QHostInfo::fromName(&local_98);
          iVar4 = QHostInfo::error();
          if (iVar4 == 0) {
            QHostInfo::addresses();
            iVar4 = *(int *)(local_a0 + 8);
            iVar1 = *(int *)(local_a0 + 0xc);
            FUN_10008c780(&local_a0);
            if (iVar1 == iVar4) goto LAB_1009e1722;
            QHostAddress::QHostAddress(local_b8);
            lVar5 = 0;
            do {
              lVar6 = lVar5;
              QHostInfo::addresses();
              iVar4 = *(int *)(local_c0 + 0xc);
              iVar1 = *(int *)(local_c0 + 8);
              FUN_10008c780(&local_c0);
              if ((long)iVar4 - (long)iVar1 <= lVar6) goto LAB_1009e18f8;
              QHostInfo::addresses();
              iVar4 = QHostAddress::protocol();
              FUN_10008c780(local_c8);
              lVar5 = lVar6 + 1;
            } while (iVar4 != 0);
            QHostInfo::addresses();
            QHostAddress::operator=
                      (local_b8,*(QHostAddress **)
                                 (local_d0 + 0x10 + (*(int *)(local_d0 + 8) + lVar6) * 8));
            FUN_10008c780(&local_d0);
LAB_1009e18f8:
            cVar3 = QHostAddress::isNull();
            if (cVar3 == '\0') {
              QHostAddress::toString();
              QString::toUtf8();
              FUN_100df99c0("","prl_problem_report_utils",0,"set host = %s",
                            local_e8 + *(long *)(local_e8 + 0x10));
              if (*(int *)local_e8 != -1) {
                if (*(int *)local_e8 != 0) {
                  LOCK();
                  *(int *)local_e8 = *(int *)local_e8 + -1;
                  local_31 = *(int *)local_e8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009e1a68;
                }
                QArrayData::deallocate(local_e8,1,8);
              }
LAB_1009e1a68:
              if (*(int *)local_f0 != -1) {
                if (*(int *)local_f0 != 0) {
                  LOCK();
                  *(int *)local_f0 = *(int *)local_f0 + -1;
                  local_31 = *(int *)local_f0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009e1a9e;
                }
                QArrayData::deallocate(local_f0,2,8);
              }
LAB_1009e1a9e:
              QUrl::QUrl(local_f8,&local_68,0);
              QUrl::operator=(param_1,local_f8);
              iVar4 = 5;
              QUrl::~QUrl(local_f8);
            }
            else {
              local_e0 = (QArrayData *)local_78.field0_0x0;
              if (1 < *(int *)local_78.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
                local_31 = *(int *)local_78.field0_0x0 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              FUN_100df99c0("","prl_problem_report_utils",0,
                            "Error: can\'t do lookup for remote host name: %s, will use IP",
                            local_d8 + *(long *)(local_d8 + 0x10));
              if (*(int *)local_d8 != -1) {
                if (*(int *)local_d8 != 0) {
                  LOCK();
                  *(int *)local_d8 = *(int *)local_d8 + -1;
                  local_31 = *(int *)local_d8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009e199a;
                }
                QArrayData::deallocate(local_d8,1,8);
              }
LAB_1009e199a:
              iVar4 = 7;
              if (*(int *)local_e0 != -1) {
                if (*(int *)local_e0 != 0) {
                  LOCK();
                  *(int *)local_e0 = *(int *)local_e0 + -1;
                  local_31 = *(int *)local_e0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009e1ad4;
                }
                QArrayData::deallocate(local_e0,2,8);
              }
            }
LAB_1009e1ad4:
            QHostAddress::~QHostAddress(local_b8);
          }
          else {
LAB_1009e1722:
            local_b0 = (QArrayData *)local_78.field0_0x0;
            if (1 < *(int *)local_78.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
            }
            QString::toLocal8Bit();
            FUN_100df99c0("","prl_problem_report_utils",0,
                          "Error: can\'t do lookup for remote host name: %s, will use IP",
                          local_a8 + *(long *)(local_a8 + 0x10));
            if (*(int *)local_a8 != -1) {
              if (*(int *)local_a8 != 0) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + -1;
                local_31 = *(int *)local_a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1009e17b0;
              }
              QArrayData::deallocate(local_a8,1,8);
            }
LAB_1009e17b0:
            iVar4 = 7;
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1009e1ae0;
              }
              QArrayData::deallocate(local_b0,2,8);
            }
          }
LAB_1009e1ae0:
          QHostInfo::~QHostInfo((QHostInfo *)&local_98);
        }
        QHostAddress::~QHostAddress(local_88);
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009e1b35;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
LAB_1009e1b35:
        if (iVar4 == 7) {
          local_48 = 0;
        }
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009e1b72;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1009e1b72:
      local_58 = local_58 + 2;
      uVar7 = local_48 ^ 1;
      bVar9 = local_48 != 1;
      local_48 = uVar7;
    } while ((bVar9) && (local_58 != local_50));
  }
  FUN_100039a80(&local_60);
  cVar3 = QUrl::isValid();
  if (cVar3 == '\0') {
    FUN_100df99c0("","prl_problem_report_utils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "url.isValid()","CProblemReportUtils_common.cpp",0x9b,
                  "getCrashReportServerUrlSync");
  }
  FUN_100039a80(&local_40);
  return param_1;
}

