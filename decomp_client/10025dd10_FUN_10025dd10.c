
void FUN_10025dd10(QObject *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  QObject *pQVar7;
  int *piVar8;
  void *pvVar9;
  CTaskGenericId *pCVar10;
  QObject *pQVar11;
  undefined8 uVar12;
  QSize *pQVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  int *piVar16;
  bool bVar17;
  bool bVar18;
  QArrayData *local_128;
  Data_conflict local_120;
  undefined4 local_118;
  QArrayData *local_110;
  int *local_108 [4];
  QVariant local_e8 [2];
  QString local_d0;
  undefined *local_c8 [2];
  QArrayData *local_b8;
  _func_void_Node_ptr *local_b0;
  int *local_a8;
  QArrayData *local_a0;
  undefined8 local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  CTaskGenericId local_80 [24];
  long local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  Connection local_50 [8];
  QVariant local_48;
  undefined1 local_31;
  
  pQVar11 = (QObject *)0x0;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (pQVar11 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
    pQVar11 = *(QObject **)(param_1 + 0x50);
  }
  QObject::disconnect(pQVar11,"2finished(int)",param_1,"1onNewVmWizardFinished(int)");
  if (param_2 == 2) {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x50);
    }
    lVar4 = FUN_1005c11d0(uVar6);
    if (*(int *)(lVar4 + 0x50) == 2) {
      pcVar5 = operator_new(0x78);
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar12 = 0;
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
        uVar12 = *(undefined8 *)(param_1 + 0x70);
      }
      FUN_100260cf0(pcVar5,uVar6,uVar12);
      QVariant::QVariant(&local_48,true);
      QObject::setProperty(pcVar5,(QVariant *)"FromPrlWizard");
      QVariant::~QVariant(&local_48);
      QObject::connect(local_50,pcVar5,"2taskFinished(PRL_RESULT)",param_1,
                       "1onMigrateFromPcTaskFinished(PRL_RESULT)",0);
      QMetaObject::Connection::~Connection(local_50);
      CAbstractTask::execute();
      return;
    }
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x50);
  }
  lVar4 = FUN_1005c11d0(uVar6);
  if ((param_2 == 2) && (*(int *)(lVar4 + 0x50) == 3)) {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x50);
    }
    lVar4 = FUN_1005c11d0(uVar6);
    if (*(char *)(lVar4 + 0x1a1) != '\0') {
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x50);
      }
      lVar4 = FUN_1005c11d0(uVar6);
      *(undefined4 *)(lVar4 + 0x50) = 1;
      FUN_10025ecb0(param_1);
      return;
    }
  }
  if (param_2 == 2) {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x50);
    }
    lVar4 = FUN_1005c11d0(uVar6);
    if (*(int *)(lVar4 + 0x50) == 5) {
LAB_10025df01:
      FUN_10025ed40(param_1);
      return;
    }
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x50);
    }
    lVar4 = FUN_1005c11d0(uVar6);
    if (*(int *)(lVar4 + 0x50) == 9) goto LAB_10025df01;
  }
  piVar16 = (int *)0x0;
  pQVar11 = (QObject *)0x0;
  if (*(long *)(param_1 + 0x48) != 0) {
    piVar16 = (int *)0x0;
    pQVar11 = (QObject *)0x0;
    if (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0) {
      piVar16 = (int *)0x0;
      pQVar11 = (QObject *)0x0;
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar6 = FUN_1005c11d0();
        pQVar7 = (QObject *)FUN_1005b87b0(uVar6);
        piVar16 = (int *)0x0;
        pQVar11 = (QObject *)0x0;
        if (pQVar7 != (QObject *)0x0) {
          piVar16 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar7);
          pQVar11 = pQVar7;
        }
      }
    }
  }
  piVar8 = *(int **)(param_1 + 0x28);
  if (piVar8 != piVar16) {
    if (piVar16 != (int *)0x0) {
      LOCK();
      *piVar16 = *piVar16 + 1;
      local_31 = *piVar16 != 0;
      UNLOCK();
      piVar8 = *(int **)(param_1 + 0x28);
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
    *(int **)(param_1 + 0x28) = piVar16;
    *(QObject **)(param_1 + 0x30) = pQVar11;
  }
  if (piVar16 != (int *)0x0) {
    LOCK();
    *piVar16 = *piVar16 + -1;
    local_31 = *piVar16 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar16);
    }
  }
  if (param_2 == 2) {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x50);
    }
    lVar4 = FUN_1005c11d0(uVar6);
    if (*(int *)(lVar4 + 0x50) == 10) {
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x30);
      }
      FUN_10018c2b0(uVar6);
      CVmConfiguration::getVmIdentification();
      CVmIdentification::getHomePath();
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,"Converted VM path: [%s]",
                    local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10025e098;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_10025e098:
      pvVar9 = operator_new(0x70);
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x30);
      }
      uVar12 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar12 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar14 = 0;
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
        uVar14 = *(undefined8 *)(param_1 + 0x70);
      }
      FUN_1002d40d0(pvVar9,uVar6,uVar12,uVar14);
      QObject::connect(&local_68,pvVar9,"2taskFinished(PRL_RESULT)",param_1,
                       "1subTaskCompleted(PRL_RESULT)",0);
      if (local_68 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_68);
      CAbstractTask::execute();
      if (*(int *)local_58 == -1) {
        return;
      }
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        if (*(int *)local_58 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_58,2,8);
      return;
    }
  }
  lVar4 = *(long *)(param_1 + 0x28);
  pQVar11 = (QObject *)0x0;
  if (lVar4 == 0) {
LAB_10025e30e:
    bVar17 = pQVar11 != (QObject *)0x0;
    bVar18 = false;
  }
  else {
    pQVar11 = (QObject *)0x0;
    if ((*(int *)(lVar4 + 4) != 0) && (pQVar11 = (QObject *)0x0, *(long *)(param_1 + 0x30) != 0)) {
      pCVar10 = (CTaskGenericId *)CTaskManager::instance();
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x30);
      }
      FUN_100188480(&local_88,uVar6);
      FUN_100191030(local_80,&local_88);
      pQVar11 = (QObject *)CTaskManager::getTaskById(pCVar10);
      CTaskGenericId::~CTaskGenericId(local_80);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10025e21a;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_10025e21a:
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x30);
      }
      FUN_10018c220(uVar6,1,0);
      lVar4 = *(long *)(param_1 + 0x28);
      if (lVar4 == 0) goto LAB_10025e30e;
    }
    if ((*(int *)(lVar4 + 4) == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_10025e30e;
    uVar12 = FUN_100370280();
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
    }
    FUN_100188480(&local_90,uVar6);
    pQVar13 = (QSize *)FUN_1003704b0(uVar12,&local_90,DAT_100e152b8);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10025e2da;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10025e2da:
    bVar17 = pQVar11 != (QObject *)0x0;
    bVar18 = pQVar13 != (QSize *)0x0;
    if (((param_2 == 2) && (pQVar11 != (QObject *)0x0)) && (pQVar13 != (QSize *)0x0)) {
      cVar2 = CAbstractTask::isFinished();
      bVar18 = true;
      if (cVar2 == '\0') {
        CWindowInterface::customWindowFlags();
        CWindowInterface::setCustomWindowFlags(pQVar13 + 6);
        if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
           (*(long *)(param_1 + 0x40) != 0)) {
          lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
          local_98 = CONCAT44((*(int *)(lVar4 + 0x20) + 1) - *(int *)(lVar4 + 0x18),
                              (*(int *)(lVar4 + 0x1c) + 1) - *(int *)(lVar4 + 0x14));
          QWidget::setFixedSize(pQVar13);
        }
        WidgetUtils::setWindowResizeEnabled((QWidget *)pQVar13,false);
        QMetaObject::tr((char *)&local_a0,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Parallels_Wizard_10226eea0);
        QWidget::setWindowTitle((QString *)pQVar13);
        bVar18 = true;
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10025e626;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_10025e626:
        FUN_10025db20(param_1,pQVar13);
        if (*(long *)(param_1 + 0x38) == 0) {
          bVar17 = true;
        }
        else if (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0) {
          bVar17 = true;
        }
        else if (*(QWidget **)(param_1 + 0x40) == (QWidget *)0x0) {
          bVar17 = true;
        }
        else {
          MacUtils::detachAllSheets((QWidget *)&local_a8,*(QWidget **)(param_1 + 0x40));
          if (*local_a8 == -1) {
            bVar17 = true;
          }
          else {
            if (*local_a8 != 0) {
              LOCK();
              *local_a8 = *local_a8 + -1;
              local_31 = *local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) {
                bVar17 = true;
                goto LAB_10025e317;
              }
            }
            FUN_10006b5d0(&local_a8,local_a8);
            bVar17 = true;
          }
        }
      }
      else {
        bVar17 = true;
      }
    }
  }
LAB_10025e317:
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     ((param_2 != 2 || (*(long *)(param_1 + 0x30) == 0)))) goto LAB_10025e4b8;
  if (!bVar17) {
    if (((*(long *)(param_1 + 0x38) == 0) || (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0)) ||
       (*(long *)(param_1 + 0x40) == 0)) goto LAB_10025e4b8;
    if (bVar18) {
      FUN_10025f300(param_1);
      return;
    }
    local_110 = (QArrayData *)QString::fromAscii_helper("1swapWizardAndVmWindow()",0x18);
    local_118 = 0x80000000;
    local_120.field7 = 0;
    FUN_100a1c600(local_108,param_1,&local_110,&local_120);
    QVariant::~QVariant((QVariant *)&local_120);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10025e70f;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_10025e70f:
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
    }
    FUN_100192d10(uVar6,0x27f,0,0);
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
    }
    FUN_100188480(&local_128,uVar6);
    FUN_100356ac0(&local_128,local_108);
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10025e7a0;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_10025e7a0:
    QVariant::~QVariant(local_e8);
    if (local_108[0] == (int *)0x0) {
      return;
    }
    LOCK();
    *local_108[0] = *local_108[0] + -1;
    local_31 = *local_108[0] != 0;
    UNLOCK();
    if ((bool)local_31) {
      return;
    }
    if (local_108[0] == (int *)0x0) {
      return;
    }
    operator_delete(local_108[0]);
    return;
  }
  FUN_100188480(&local_d0);
  COsInstallationInfo::COsInstallationInfo((COsInstallationInfo *)local_c8,&local_d0);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025e3a1;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_10025e3a1:
  COsInstallationInfo::load();
  cVar2 = COsInstallationInfo::isUnattanded();
  if ((cVar2 == '\0') && (cVar2 = COsInstallationInfo::isNeedToDownloadOsImage(), cVar2 == '\0')) {
LAB_10025e3f0:
    QTimer::singleShot(100,pQVar11,"1terminate()");
  }
  else {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
    }
    iVar3 = FUN_10018f890(uVar6);
    if (iVar3 == 0x910) goto LAB_10025e3f0;
  }
  local_c8[0] = PTR_vtable_1021e17e0 + 0x10;
  if (*(int *)(local_b0 + 0x10) != -1) {
    if (*(int *)(local_b0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_b0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025e44b;
    }
    QHashData::free_helper(local_b0);
  }
LAB_10025e44b:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025e481;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10025e481:
  QObject::~QObject((QObject *)local_c8);
LAB_10025e4b8:
  uVar15 = 0x80000009;
  if (param_2 == 2) {
    uVar15 = 0;
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x50);
    }
    lVar4 = FUN_1005c11d0(uVar6);
    if (*(int *)(lVar4 + 0x50) != 3) {
      uVar15 = 0x80000009;
    }
  }
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    uVar15 = 0;
  }
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,uVar15);
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    QWidget::close();
  }
  return;
}

