
char FUN_1001e6650(void)

{
  code *pcVar1;
  uid_t uVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uid_t uVar7;
  QArrayData *pQVar8;
  int iVar9;
  Data *pDVar10;
  Data *pDVar11;
  QArrayData *pQVar12;
  long lVar13;
  undefined1 local_100 [8];
  long local_f8;
  long *local_f0;
  long *local_e8;
  int local_e0;
  QDateTime local_d8;
  QDateTime local_d0;
  _func_void_Node_ptr *local_c8;
  QArrayData *local_c0;
  Data *local_b8;
  AnonymousUnion0 local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  undefined8 local_90;
  QVariant local_88;
  QArrayData *local_78;
  QVariant local_70;
  QVariant local_60;
  QArrayData *local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [7];
  undefined1 local_31;
  
  FUN_100d78ea0(local_48);
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100d793f0(local_48);
  QSettings::QSettings((QSettings *)&local_70,(QObject *)0x0);
  local_78 = (QArrayData *)QString::fromAscii_helper("ForceToRestartServices",0x16);
  QVariant::QVariant(&local_88,false);
  QSettings::value((QString *)&local_60,&local_70);
  cVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_60);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001e6714;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1001e6714:
  QSettings::~QSettings((QSettings *)&local_70);
  if (cVar4 == '\0') {
    local_90 = 0;
    FUN_100d8b860(&local_a8);
    pQVar8 = (QArrayData *)QString::fromAscii_helper("prl_disp_service",0x10);
    local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a8;
    if (1 < *(int *)local_a8 + 1U) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
    }
    if (1 < *(int *)pQVar8 + 1U) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + 1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
    }
    local_98 = pQVar8;
    cVar4 = QFileInfo::exists(&local_a0);
    if (cVar4 == '\0') {
      cVar4 = '\0';
    }
    else {
      cVar4 = FUN_1001e9440(&local_a0,&local_90);
      if (cVar4 == '\0') {
        cVar4 = '\0';
      }
      else {
        cVar4 = FUN_1001e95d0(&local_a0,&local_90);
      }
    }
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001e68ad;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1001e68ad:
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001e68e3;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_1001e68e3:
    if (*(int *)pQVar8 != -1) {
      if (*(int *)pQVar8 != 0) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001e690e;
      }
      QArrayData::deallocate(pQVar8,2,8);
    }
LAB_1001e690e:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001e6944;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1001e6944:
    if ((cVar4 != '\0') && (cVar5 = FUN_100d80630(1), cVar5 == '\0')) {
      local_b8 = (Data *)PTR_shared_null_1021e15e8;
      pQVar8 = (QArrayData *)QString::fromAscii_helper("prl_disp_service",0x10);
      local_c0 = pQVar8;
      FUN_1000341d0(&local_b8,&local_c0);
      local_c8 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
      FUN_100062d00(&local_c8,&local_50,local_38);
      MacUtils::getRunningProcesses((QStringList *)&local_b0.field0,(QSet *)&local_b8);
      iVar6 = *(int *)(local_b0.field1 + 0xc);
      iVar9 = *(int *)(local_b0.field1 + 8);
      cVar4 = iVar6 != iVar9;
      if (*(int *)local_b0.field1 != -1) {
        if (*(int *)local_b0.field1 != 0) {
          LOCK();
          *(int *)local_b0.field1 = *(int *)local_b0.field1 + -1;
          local_31 = *(int *)local_b0.field1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001e6a81;
          iVar9 = *(int *)(local_b0.field1 + 8);
          iVar6 = *(int *)(local_b0.field1 + 0xc);
        }
        if (iVar6 != iVar9) {
          lVar13 = (long)iVar9 * 8 + (long)iVar6 * -8;
          pDVar10 = (Data *)(local_b0.field1 + (long)iVar6 * 8 + 8);
          do {
            pQVar12 = *(QArrayData **)pDVar10;
            if (*(int *)pQVar12 == 0) {
LAB_1001e6a60:
              QArrayData::deallocate(pQVar12,2,8);
            }
            else if (*(int *)pQVar12 != -1) {
              LOCK();
              *(int *)pQVar12 = *(int *)pQVar12 + -1;
              local_31 = *(int *)pQVar12 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar12 = *(QArrayData **)pDVar10;
                goto LAB_1001e6a60;
              }
            }
            pDVar10 = pDVar10 + -8;
            lVar13 = lVar13 + 8;
          } while (lVar13 != 0);
        }
        QListData::dispose((Data *)local_b0.field1);
      }
LAB_1001e6a81:
      if (*(int *)(local_c8 + 0x10) != -1) {
        if (*(int *)(local_c8 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_c8 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001e6ab6;
        }
        QHashData::free_helper(local_c8);
      }
LAB_1001e6ab6:
      if (*(int *)pQVar8 != -1) {
        if (*(int *)pQVar8 != 0) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001e6ae3;
        }
        QArrayData::deallocate(pQVar8,2,8);
      }
LAB_1001e6ae3:
      pDVar10 = local_b8;
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001e6b71;
        }
        iVar6 = *(int *)(local_b8 + 0xc);
        if (iVar6 != *(int *)(local_b8 + 8)) {
          lVar13 = (long)*(int *)(local_b8 + 8) * 8 + (long)iVar6 * -8;
          pDVar11 = local_b8 + (long)iVar6 * 8 + 8;
          do {
            pQVar8 = *(QArrayData **)pDVar11;
            if (*(int *)pQVar8 == 0) {
LAB_1001e6b50:
              QArrayData::deallocate(pQVar8,2,8);
            }
            else if (*(int *)pQVar8 != -1) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar8 = *(QArrayData **)pDVar11;
                goto LAB_1001e6b50;
              }
            }
            pDVar11 = pDVar11 + -8;
            lVar13 = lVar13 + 8;
          } while (lVar13 != 0);
        }
        QListData::dispose(pDVar10);
      }
    }
LAB_1001e6b71:
    if (cVar4 == '\0') {
      QDateTime::QDateTime(&local_d0);
      QDateTime::QDateTime(&local_d8);
      MacUtils::getProcessesInfo();
      FUN_1001c1b20(&local_f8,local_100);
      local_f0 = (long *)(local_f8 + 0x10 + (long)*(int *)(local_f8 + 8) * 8);
      local_e8 = (long *)(local_f8 + 0x10 + (long)*(int *)(local_f8 + 0xc) * 8);
      local_e0 = 1;
      FUN_1001c1230(local_100);
      if ((local_e0 != 0) && (local_f0 != local_e8)) {
        do {
          lVar13 = *local_f0;
          lVar3 = *(long *)(lVar13 + 8);
          iVar6 = QString::compare_helper
                            (*(long *)(lVar3 + 0x10) + lVar3,*(undefined4 *)(lVar3 + 4),
                             "prl_disp_service",0xffffffff,1);
          if (iVar6 == 0) {
            uVar2 = *(uid_t *)(lVar13 + 0x24);
            cVar4 = FUN_100d80630(1);
            uVar7 = 0;
            if (cVar4 != '\0') {
              uVar7 = _getuid();
            }
            if (uVar2 != uVar7) goto LAB_1001e6ca0;
            QDateTime::operator=(&local_d0,(QDateTime *)(lVar13 + 0x18));
          }
          else {
LAB_1001e6ca0:
            lVar3 = *(long *)(lVar13 + 8);
            iVar6 = QString::compare_helper
                              (*(long *)(lVar3 + 0x10) + lVar3,*(undefined4 *)(lVar3 + 4),
                               "WindowServer",0xffffffff,1);
            if (iVar6 == 0) {
              QDateTime::operator=(&local_d8,(QDateTime *)(lVar13 + 0x18));
            }
          }
          local_f0 = local_f0 + 1;
          local_e0 = 1;
        } while (local_f0 != local_e8);
      }
      FUN_1001c1230(&local_f8);
      cVar4 = QDateTime::isValid();
      if (cVar4 == '\0') {
        cVar4 = '\0';
      }
      else {
        cVar4 = QDateTime::isValid();
        if (cVar4 == '\0') {
          cVar4 = '\0';
        }
        else {
          cVar4 = QDateTime::operator<(&local_d0,&local_d8);
          if (cVar4 == '\0') {
            cVar4 = '\0';
          }
          else {
            cVar4 = '\x01';
            FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,
                          "Restart services - WindowServer started after prl_disp_service");
          }
        }
      }
      QDateTime::~QDateTime(&local_d8);
      QDateTime::~QDateTime(&local_d0);
    }
    else {
      FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,
                    "Restart services - concurent prl_disp_service is running");
    }
  }
  else {
    cVar4 = '\x01';
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Force to restart services.");
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001e6dc0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001e6dc0:
  FUN_100d79060(local_48);
  return cVar4;
}

