
undefined8 FUN_1002ebdd0(long param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  QObject *pQVar8;
  int *piVar9;
  void *pvVar10;
  undefined8 uVar11;
  int *piVar12;
  char *pcVar13;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar14;
  long local_e8;
  QArrayData *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  uint uStack_c4;
  QArrayData *local_c0;
  QString local_b8;
  QString local_b0 [2];
  Data_conflict local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  QString local_88;
  QVariant local_80;
  QVariant local_70;
  QArrayData *local_60;
  QString local_58;
  QString local_50 [2];
  long local_40;
  long local_38;
  undefined1 local_29;
  
  uVar14 = (undefined4)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  lVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (lVar5 == 0) {
    FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != vm",
                  "Tasks/CTaskResumeWindow.cpp",CONCAT44(uVar14,0xae),"createWindowForVmContext");
    pcVar13 = "(!)Error: can\'t obtain VM from context";
LAB_1002ec039:
    FUN_100df99c0("[APP_RESUME]","prl_client_app",0,pcVar13);
    return 0x80015342;
  }
  lVar6 = FUN_10018d490(lVar5);
  if (lVar6 == 0) {
    FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != server","Tasks/CTaskResumeWindow.cpp",CONCAT44(uVar14,0xb6),
                  "createWindowForVmContext");
    pcVar13 = "(!)Error: can\'t obtain server from context";
    goto LAB_1002ec039;
  }
  uVar7 = QMetaObject::className();
  lVar6 = *(long *)(param_1 + 0x20);
  iVar3 = QString::compare_helper
                    (*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4),uVar7,0xffffffff,1);
  if (iVar3 == 0) {
    cVar2 = FUN_10011cdc0(lVar5);
    if (cVar2 != '\0') {
      return 0x80015341;
    }
    pvVar10 = operator_new(0x40);
    FUN_100227250(pvVar10,lVar5,0,0,0);
    QObject::connect(&local_38,pvVar10,"2taskFinished(PRL_RESULT)",param_1,
                     "1onConfigEditorOpened(PRL_RESULT)",0);
    if (local_38 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      if (cVar2 != '\0') goto LAB_1002ec694;
    }
    uVar7 = CONCAT44(uVar14,0xc4);
  }
  else {
    uVar7 = QMetaObject::className();
    lVar6 = *(long *)(param_1 + 0x20);
    iVar3 = QString::compare_helper
                      (*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4),uVar7,0xffffffff,1
                      );
    if (iVar3 != 0) {
      uVar7 = QMetaObject::className();
      lVar6 = *(long *)(param_1 + 0x20);
      iVar3 = QString::compare_helper
                        (*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4),uVar7,0xffffffff
                         ,1);
      if (iVar3 != 0) {
        uVar7 = QMetaObject::className();
        lVar5 = *(long *)(param_1 + 0x20);
        iVar3 = QString::compare_helper
                          (*(long *)(lVar5 + 0x10) + lVar5,*(undefined4 *)(lVar5 + 4),uVar7,
                           0xffffffff,1);
        if (iVar3 != 0) {
          return 0x80000001;
        }
        uVar7 = FUN_1001d50a0();
        uVar7 = FUN_1001d50d0(uVar7);
        pQVar8 = (QObject *)FUN_1001e0340(uVar7);
        piVar9 = (int *)0x0;
        if (pQVar8 != (QObject *)0x0) {
          piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar8);
        }
        piVar12 = *(int **)(param_1 + 0x40);
        if (piVar12 != piVar9) {
          if (piVar9 != (int *)0x0) {
            LOCK();
            *piVar9 = *piVar9 + 1;
            UNLOCK();
            piVar12 = *(int **)(param_1 + 0x40);
          }
          if (piVar12 != (int *)0x0) {
            LOCK();
            *piVar12 = *piVar12 + -1;
            local_29 = *piVar12 != 0;
            UNLOCK();
            if ((!(bool)local_29) && (pvVar10 = *(void **)(param_1 + 0x40), pvVar10 != (void *)0x0))
            {
              operator_delete(pvVar10);
            }
          }
          *(int **)(param_1 + 0x40) = piVar9;
          *(QObject **)(param_1 + 0x48) = pQVar8;
        }
        if (piVar9 != (int *)0x0) {
          LOCK();
          *piVar9 = *piVar9 + -1;
          local_29 = *piVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            operator_delete(piVar9);
          }
        }
        goto LAB_1002ec59d;
      }
      QSettings::QSettings((QSettings *)local_50,(QObject *)0x0);
      FUN_100188480(&local_60,lVar5);
      QString::fromUtf8_helper((char *)&local_58,0x1dddd24);
      QString::append(&local_58);
      cVar2 = QSettings::contains(local_50);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_29 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002ec1c8;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1002ec1c8:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002ec1f8;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1002ec1f8:
      QSettings::~QSettings((QSettings *)local_50);
      uVar7 = 0;
      if (cVar2 != '\0') {
        QSettings::QSettings((QSettings *)&local_80,(QObject *)0x0);
        FUN_100188480(&local_90,lVar5);
        QString::fromUtf8_helper((char *)&local_88,0x1dddd24);
        QString::append(&local_88);
        local_98 = 0x80000000;
        local_a0.field7 = 0;
        QSettings::value((QString *)&local_70,&local_80);
        uVar4 = QVariant::toInt((bool *)&local_70);
        QVariant::~QVariant(&local_70);
        QVariant::~QVariant((QVariant *)&local_a0);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_29 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1002ec2cc;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
LAB_1002ec2cc:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_29 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1002ec302;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_1002ec302:
        QSettings::~QSettings((QSettings *)&local_80);
        uVar7 = 0;
        if (((uVar4 & 0xfffffffe) == 0x30000004) && (uVar7 = 1, 2 < DAT_10230ffd0)) {
          FUN_100df99c0("[APP_RESUME]","prl_client_app",3,
                        "VM should be resumed to restore the previous state: %.8X",uVar4);
        }
        QSettings::QSettings((QSettings *)local_b0,(QObject *)0x0);
        FUN_100188480(&local_c0,lVar5);
        QString::fromUtf8_helper((char *)&local_b8,0x1dddd24);
        QString::append(&local_b8);
        QSettings::remove(local_b0);
        if (*(int *)local_b8.field0_0x0 != -1) {
          if (*(int *)local_b8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
            local_29 = *(int *)local_b8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1002ec3e2;
          }
          QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
        }
LAB_1002ec3e2:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_29 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1002ec418;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_1002ec418:
        QSettings::~QSettings((QSettings *)local_b0);
      }
      uVar11 = FUN_10018c280(lVar5);
      local_d8 = 3;
      local_d0 = local_d0 & 0xffffff00;
      uStack_d4 = 0;
      uStack_cc = 0xffff;
      local_c8 = 0;
      uStack_c4 = uStack_c4 & 0xffffff00;
      uVar14 = 0;
      lVar6 = FUN_10031a440(uVar11,uVar7);
      if ((lVar6 != 0) && (cVar2 = FUN_1002251d0(lVar6), cVar2 != '\0')) {
        return 0x80015343;
      }
      uVar7 = FUN_100370280();
      FUN_100188480(&local_e0,lVar5);
      pQVar8 = (QObject *)FUN_1003704b0(uVar7,&local_e0,DAT_100e152b8);
      piVar9 = (int *)0x0;
      if (pQVar8 != (QObject *)0x0) {
        piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar8);
      }
      plVar1 = (long *)(param_1 + 0x40);
      piVar12 = *(int **)(param_1 + 0x40);
      if (piVar12 != piVar9) {
        if (piVar9 != (int *)0x0) {
          LOCK();
          *piVar9 = *piVar9 + 1;
          local_29 = *piVar9 != 0;
          UNLOCK();
          piVar12 = (int *)*plVar1;
        }
        if (piVar12 != (int *)0x0) {
          LOCK();
          *piVar12 = *piVar12 + -1;
          local_29 = *piVar12 != 0;
          UNLOCK();
          if ((!(bool)local_29) && ((void *)*plVar1 != (void *)0x0)) {
            operator_delete((void *)*plVar1);
          }
        }
        *(int **)(param_1 + 0x40) = piVar9;
        *(QObject **)(param_1 + 0x48) = pQVar8;
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_29 = *piVar9 != 0;
        UNLOCK();
        if (!(bool)local_29) {
          operator_delete(piVar9);
        }
      }
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_29 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002ec587;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_1002ec587:
      if (((*plVar1 != 0) && (*(int *)(*plVar1 + 4) != 0)) && (*(long *)(param_1 + 0x48) != 0)) {
LAB_1002ec59d:
        if (*(long *)(param_1 + 0x40) == 0) {
          return 0x80015344;
        }
        if (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0) {
          if (*(long *)(param_1 + 0x48) != 0) {
            return 0;
          }
          return 0x80015344;
        }
        return 0x80015344;
      }
      uVar7 = FUN_100370280();
      QObject::connect(&local_e8,uVar7,"2afterConsoleWindowCreated(QString,VmDisplayId)",param_1,
                       "1onConsoleWindowCreated(QString,VmDisplayId)",0);
      if (local_e8 == 0) {
        QMetaObject::Connection::~Connection((Connection *)&local_e8);
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
        QMetaObject::Connection::~Connection((Connection *)&local_e8);
        if (cVar2 != '\0') goto LAB_1002ec6f4;
      }
      FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "connected","Tasks/CTaskResumeWindow.cpp",CONCAT44(uVar14,0xef),
                    "createWindowForVmContext");
LAB_1002ec6f4:
      CAbstractTask::setWaitForSubTaskCompletion();
      return 0;
    }
    cVar2 = FUN_10011cdc0(lVar5);
    if (cVar2 != '\0') {
      return 0x80015341;
    }
    pvVar10 = operator_new(0x38);
    FUN_100274cc0(pvVar10,lVar5);
    QObject::connect(&local_40,pvVar10,"2taskFinished(PRL_RESULT)",param_1,
                     "1onSnapshotDialogOpened(PRL_RESULT)",0);
    if (local_40 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      if (cVar2 != '\0') goto LAB_1002ec694;
    }
    uVar7 = CONCAT44(uVar14,0xd0);
  }
  FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                "Tasks/CTaskResumeWindow.cpp",uVar7,"createWindowForVmContext");
LAB_1002ec694:
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}

