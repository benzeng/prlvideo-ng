
undefined8 FUN_1002a3ea0(long param_1)

{
  char *pcVar1;
  int *piVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  QArrayData *pQVar7;
  undefined8 uVar8;
  size_t sVar9;
  QString QVar10;
  uint uVar11;
  Data *pDVar12;
  Data *pDVar13;
  QFileInfo *pQVar14;
  QStringList *pQVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  bool bVar22;
  QArrayData *local_1f8;
  long local_1f0;
  QString local_1e8;
  QArrayData *local_1e0;
  QString local_1d8;
  QArrayData *local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [8];
  QString local_170;
  QString local_168;
  undefined1 local_160 [80];
  long *local_110;
  QString local_108;
  Data_conflict local_100;
  undefined4 local_f8;
  QArrayData *local_f0;
  int *local_e8 [4];
  QVariant local_c8 [2];
  QArrayData *local_b0;
  Data *local_a8;
  AnonymousUnion0 local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QFileInfo local_80 [8];
  Data *local_78;
  QFileInfo *local_70;
  QFileInfo *local_68;
  uint local_60;
  QArrayData *local_58;
  undefined *local_50;
  Data *local_48;
  QDir local_40 [15];
  undefined1 local_31;
  
  if (*(int *)(param_1 + 0x3c) != 1) {
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_1002a4ed0(param_1);
      return 0;
    }
    FUN_1002a2c90(param_1);
    return 0;
  }
  QDir::QDir(local_40,(QString *)(param_1 + 0x78));
  pQVar7 = (QArrayData *)QString::fromAscii_helper("*.exe",5);
  local_50 = PTR_shared_null_1021e15e8;
  local_58 = pQVar7;
  FUN_1000341d0(&local_50,&local_58);
  QDir::entryInfoList(&local_48,local_40,&local_50,0xffffffff,0xffffffff);
  FUN_100039a80(&local_50);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a3f4f;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1002a3f4f:
  FUN_100055060(&local_78,&local_48);
  local_70 = (QFileInfo *)(local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10);
  local_68 = (QFileInfo *)(local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10);
  local_60 = 1;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      QFileInfo::QFileInfo(local_80,local_70);
      if (local_60 != 0) {
        QFileInfo::fileName();
        FileDownloadInfo::destinationFileName();
        cVar4 = operator==(&local_88,&local_90);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002a4014;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_1002a4014:
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_31 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002a4044;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
LAB_1002a4044:
        if (cVar4 == '\0') {
          QFileInfo::absoluteFilePath();
          QFile::remove(&local_98);
          if (*(int *)local_98.field0_0x0 != -1) {
            if (*(int *)local_98.field0_0x0 != 0) {
              LOCK();
              *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
              local_31 = *(int *)local_98.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002a40a0;
            }
            QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
          }
        }
LAB_1002a40a0:
        local_60 = 0;
      }
      QFileInfo::~QFileInfo(local_80);
      local_70 = local_70 + 8;
      uVar11 = local_60 ^ 1;
      bVar22 = local_60 != 1;
      local_60 = uVar11;
    } while ((bVar22) && (local_70 != local_68));
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a413a;
    }
    iVar5 = *(int *)(local_78 + 0xc);
    if (iVar5 != *(int *)(local_78 + 8)) {
      lVar18 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar5 * -8;
      pQVar14 = (QFileInfo *)(local_78 + (long)iVar5 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar14);
        pQVar14 = pQVar14 + -8;
        lVar18 = lVar18 + 8;
      } while (lVar18 != 0);
    }
    QListData::dispose(local_78);
  }
LAB_1002a413a:
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100061050(3,uVar8);
  uVar8 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  iVar5 = FUN_10018a9d0(uVar8);
  if (iVar5 == 0x30000004) {
    CAntivirusInfo::info(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38));
    CAntivirusInfo::ptiInstallCmd();
    FUN_1002a0c20(local_160);
    pcVar1 = *(char **)PTR__WEB_STORE_AV_DATA_1021e1240;
    iVar5 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar9 = _strlen(pcVar1);
      iVar5 = (int)sVar9;
    }
    QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar1,iVar5);
    plVar20 = local_110;
    uVar11 = *(uint *)(local_110 + 4);
    plVar21 = plVar20;
    local_168.field0_0x0 = QVar10.field0_0x0;
    if (uVar11 != 0) {
      uVar6 = qHash(&local_168,*(uint *)((long)local_110 + 0x24));
      uVar3 = (ulong)uVar6 % (ulong)uVar11;
      plVar16 = *(long **)(plVar20[1] + uVar3 * 8);
      if (plVar16 != plVar20) {
        plVar19 = (long *)(plVar20[1] + uVar3 * 8);
        do {
          plVar17 = plVar16;
          plVar21 = plVar20;
          if (*(uint *)(plVar16 + 1) == uVar6) {
            cVar4 = operator==(&local_168,(QString *)(plVar16 + 2));
            plVar17 = (long *)*plVar19;
            QVar10.field0_0x0 = local_168.field0_0x0;
            plVar20 = plVar17;
            plVar21 = local_110;
            if (cVar4 != '\0') break;
          }
          plVar20 = plVar21;
          plVar16 = (long *)*plVar17;
          QVar10.field0_0x0 = local_168.field0_0x0;
          plVar19 = plVar17;
          plVar21 = plVar20;
        } while (plVar16 != plVar20);
      }
    }
    if (*(int *)QVar10.field0_0x0 != -1) {
      if (*(int *)QVar10.field0_0x0 != 0) {
        LOCK();
        *(int *)QVar10.field0_0x0 = *(int *)QVar10.field0_0x0 + -1;
        local_31 = *(int *)QVar10.field0_0x0 != 0;
        UNLOCK();
        QVar10.field0_0x0 = local_168.field0_0x0;
        if ((bool)local_31) goto LAB_1002a4545;
      }
      QArrayData::deallocate((QArrayData *)QVar10.field0_0x0,2,8);
    }
LAB_1002a4545:
    FUN_100252e70(local_160);
    if (plVar20 != plVar21) {
      FUN_1002a0c20(local_1c8,param_1 + 0x18);
      pcVar1 = *(char **)PTR__WEB_STORE_AV_DATA_1021e1240;
      iVar5 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar9 = _strlen(pcVar1);
        iVar5 = (int)sVar9;
      }
      local_1d0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar5);
      FUN_10002c180(&local_170,local_178,&local_1d0);
      if (*(int *)local_1d0 != -1) {
        if (*(int *)local_1d0 != 0) {
          LOCK();
          *(int *)local_1d0 = *(int *)local_1d0 + -1;
          local_31 = *(int *)local_1d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a45eb;
        }
        QArrayData::deallocate(local_1d0,2,8);
      }
LAB_1002a45eb:
      FUN_100252e70(local_1c8);
      if (*(int *)(local_170.field0_0x0 + 4) != 0) {
        local_1e0 = (QArrayData *)QString::fromAscii_helper("",0);
        FUN_1009e01f0(&local_1d8,&local_1e0,&local_170);
        QString::operator=(&local_170,&local_1d8);
        if (*(int *)local_1d8.field0_0x0 != -1) {
          if (*(int *)local_1d8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
            local_31 = *(int *)local_1d8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002a4680;
          }
          QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
        }
LAB_1002a4680:
        if (*(int *)local_1e0 != -1) {
          if (*(int *)local_1e0 != 0) {
            LOCK();
            *(int *)local_1e0 = *(int *)local_1e0 + -1;
            local_31 = *(int *)local_1e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002a46b6;
          }
          QArrayData::deallocate(local_1e0,2,8);
        }
LAB_1002a46b6:
        if (*(int *)(local_170.field0_0x0 + 4) != 0) {
          QString::fromUtf8_helper((char *)&local_1e8,0x1e31af0);
          QString::append(&local_1e8);
          QString::append(&local_108);
          if (*(int *)local_1e8.field0_0x0 != -1) {
            if (*(int *)local_1e8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1e8.field0_0x0 = *(int *)local_1e8.field0_0x0 + -1;
              local_31 = *(int *)local_1e8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002a4737;
            }
            QArrayData::deallocate((QArrayData *)local_1e8.field0_0x0,2,8);
          }
        }
      }
LAB_1002a4737:
      if (*(int *)local_170.field0_0x0 != -1) {
        if (*(int *)local_170.field0_0x0 != 0) {
          LOCK();
          *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
          local_31 = *(int *)local_170.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a476d;
        }
        QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
      }
    }
LAB_1002a476d:
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100061050(3,uVar8);
    uVar8 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    FUN_10018c250(&local_1f0,uVar8);
    lVar18 = local_1f0;
    QString::toUtf8();
    _PrlVm_InstallUtility(lVar18,local_1f8 + *(long *)(local_1f8 + 0x10));
    if (*(int *)local_1f8 != -1) {
      if (*(int *)local_1f8 != 0) {
        LOCK();
        *(int *)local_1f8 = *(int *)local_1f8 + -1;
        local_31 = *(int *)local_1f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a480f;
      }
      QArrayData::deallocate(local_1f8,1,8);
    }
LAB_1002a480f:
    if (local_1f0 != 0) {
      _PrlHandle_Free();
    }
    if (*(int *)local_108.field0_0x0 != -1) {
      if (*(int *)local_108.field0_0x0 != 0) {
        LOCK();
        *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
        local_31 = *(int *)local_108.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a4856;
      }
      QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
    }
  }
  else {
    local_a8 = (Data *)PTR_shared_null_1021e15e8;
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100061050(3,uVar8);
    uVar8 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    FUN_10018d830(&local_b0,uVar8);
    FUN_1000341d0(&local_a8,&local_b0);
    local_a0.field1 = local_a8;
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 == 0) {
        QListData::detach((int)&local_a0);
        iVar5 = *(int *)(local_a0.field1 + 8);
        if (iVar5 != *(int *)(local_a0.field1 + 0xc)) {
          pDVar12 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
          pDVar13 = local_a0.field1 + (long)iVar5 * 8 + 0x10;
          lVar18 = (long)*(int *)(local_a0.field1 + 0xc) * 8 + (long)iVar5 * -8;
          do {
            piVar2 = *(int **)pDVar12;
            *(int **)pDVar13 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            pDVar13 = pDVar13 + 8;
            pDVar12 = pDVar12 + 8;
            lVar18 = lVar18 + -8;
          } while (lVar18 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + 1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
      }
    }
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a43dd;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1002a43dd:
    FUN_100039a80(&local_a8);
    iVar5 = CMessageManager::instance();
    pQVar15 = (QStringList *)0x0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (pQVar15 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      pQVar15 = *(QStringList **)(param_1 + 0x30);
    }
    local_f0 = (QArrayData *)
               QString::fromAscii_helper
                         ("1onRunVmQuestionClosed(PRL_RESULT, Messaging::ButtonID)",0x37);
    local_f8 = 0x80000000;
    local_100.field7 = 0;
    FUN_100a1c600(local_e8,param_1,&local_f0,&local_100);
    CMessageManager::showMessageBox
              (iVar5,(QWidget *)0x36d0,pQVar15,(QStringList *)&local_a0.field0,
               (CSlotInfo *)&local_a0,SUB81(local_e8,0));
    QVariant::~QVariant(local_c8);
    if (local_e8[0] != (int *)0x0) {
      LOCK();
      *local_e8[0] = *local_e8[0] + -1;
      local_31 = *local_e8[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_e8[0] != (int *)0x0)) {
        operator_delete(local_e8[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_100);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a44f3;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_1002a44f3:
    CAbstractTask::setWaitForSubTaskCompletion();
    FUN_100039a80(&local_a0);
  }
LAB_1002a4856:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a48ba;
    }
    iVar5 = *(int *)(local_48 + 0xc);
    if (iVar5 != *(int *)(local_48 + 8)) {
      lVar18 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar5 * -8;
      pQVar14 = (QFileInfo *)(local_48 + (long)iVar5 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar14);
        pQVar14 = pQVar14 + -8;
        lVar18 = lVar18 + 8;
      } while (lVar18 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_1002a48ba:
  QDir::~QDir(local_40);
  return 0;
}

