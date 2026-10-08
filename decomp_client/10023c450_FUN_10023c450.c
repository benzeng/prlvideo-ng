
undefined8 FUN_10023c450(long param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  QSize *pQVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  QWidget *pQVar15;
  QArrayData *pQVar16;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  undefined1 local_88 [40];
  int local_60;
  QArrayData *local_58 [2];
  int *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar10 = FUN_100370280();
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_40,uVar12);
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_100323e20(uVar12);
  pQVar11 = (QSize *)FUN_1003704b0(uVar10,&local_40,uVar4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10023c4ec;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10023c4ec:
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar12 = FUN_100323e00(uVar12);
  lVar13 = FUN_100319390(uVar12);
  plVar14 = (long *)CHostDesktopWorkspacesController::instance();
  if ((pQVar11 == (QSize *)0x0) || (lVar13 == 0)) goto LAB_10023cbee;
  if (*(char *)(param_1 + 0x2f) == '\0') {
    QWidget::show();
    FUN_10006b440(&local_48,param_1 + 0x38);
    FUN_10023cee0(&local_48,pQVar11);
    if (*local_48 != -1) {
      if (*local_48 != 0) {
        LOCK();
        *local_48 = *local_48 + -1;
        local_31 = *local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10023c581;
      }
      FUN_10006b5d0(&local_48,local_48);
    }
  }
LAB_10023c581:
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar5 = FUN_100325bf0(uVar12);
  if (iVar5 == 0) {
    cVar3 = (**(code **)(*plVar14 + 0xa0))(plVar14);
    if (cVar3 == '\0') {
      uVar10 = FUN_100370280();
      FUN_10036bf70(&local_90,pQVar11);
      uVar12 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar12 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar4 = FUN_100323e20(uVar12);
      uVar12 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar12 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar8 = FUN_100325aa0(uVar12);
      FUN_100371ce0(local_88,uVar10,&local_90,uVar4,uVar8,0);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10023c684;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_10023c684:
      if (local_60 == 1) {
        iVar5 = 1;
      }
      else {
        iVar6 = (**(code **)(*plVar14 + 0xb8))(plVar14,local_58);
        iVar5 = local_60;
        if (0 < iVar6) {
          iVar5 = iVar6;
        }
      }
      if (*(int *)local_58[0] != -1) {
        if (*(int *)local_58[0] != 0) {
          LOCK();
          *(int *)local_58[0] = *(int *)local_58[0] + -1;
          local_31 = *(int *)local_58[0] != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10023c6e8;
        }
        QArrayData::deallocate(local_58[0],2,8);
      }
    }
    else {
      iVar5 = (**(code **)(*plVar14 + 0x98))(plVar14);
    }
LAB_10023c6e8:
    iVar6 = (**(code **)(*plVar14 + 0x70))(plVar14,pQVar11);
    if (1 < DAT_10230ffd0) {
      QWidget::windowTitle();
      QString::toUtf8();
      pQVar16 = local_98;
      lVar1 = *(long *)(local_98 + 0x10);
      uVar4 = (**(code **)(*plVar14 + 0xa8))(plVar14,iVar6);
      FUN_100df99c0("","prl_client_app",2,"Current workspace for window [%s]: %d (type=%d)",
                    pQVar16 + lVar1,iVar6,uVar4);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10023c7bb;
        }
        QArrayData::deallocate(local_98,1,8);
      }
LAB_10023c7bb:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10023c7f7;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_10023c7f7:
      if (1 < DAT_10230ffd0) {
        QWidget::windowTitle();
        QString::toUtf8();
        pQVar16 = local_a8;
        lVar1 = *(long *)(local_a8 + 0x10);
        uVar4 = (**(code **)(*plVar14 + 0xa8))(plVar14,iVar5);
        FUN_100df99c0("","prl_client_app",2,"Target workspace for window [%s]: %d (TYPE=%d)",
                      pQVar16 + lVar1,iVar5,uVar4);
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10023c8be;
          }
          QArrayData::deallocate(local_a8,1,8);
        }
LAB_10023c8be:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10023c8fe;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
      }
    }
LAB_10023c8fe:
    iVar7 = (**(code **)(*plVar14 + 0xa8))(plVar14,iVar6);
    if ((iVar7 == 1) && (iVar7 = (**(code **)(*plVar14 + 0xa8))(plVar14,iVar5), iVar7 != 0)) {
      pcVar2 = *(code **)(*plVar14 + 0x68);
      pQVar15 = (QWidget *)QApplication::desktop();
      uVar4 = QDesktopWidget::screenNumber(pQVar15);
      iVar5 = (*pcVar2)(plVar14,uVar4);
      if (1 < DAT_10230ffd0) {
        QWidget::windowTitle();
        QString::toUtf8();
        pQVar16 = local_b8 + *(long *)(local_b8 + 0x10);
        pQVar15 = (QWidget *)QApplication::desktop();
        uVar4 = QDesktopWidget::screenNumber(pQVar15);
        uVar8 = (**(code **)(*plVar14 + 0xa8))(plVar14,iVar5);
        FUN_100df99c0("","prl_client_app",2,
                      "New target workspace for window [%s] on screen %d: %d (type=%d)",pQVar16,
                      uVar4,iVar5,uVar8);
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10023ca2e;
          }
          QArrayData::deallocate(local_b8,1,8);
        }
LAB_10023ca2e:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10023ca98;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
      }
    }
    else {
      iVar7 = (**(code **)(*plVar14 + 0xa8))(plVar14,iVar6);
      if ((iVar7 == 0) &&
         (cVar3 = (**(code **)(*plVar14 + 200))(plVar14,pQVar11,iVar5), cVar3 == '\0')) {
        iVar5 = iVar6;
      }
    }
LAB_10023ca98:
    if ((iVar5 != iVar6) && (iVar6 = MacUtils::tabsCountInWindow((QWidget *)pQVar11), iVar6 == 0)) {
      plVar14 = (long *)CHostDesktopWorkspacesController::instance();
      (**(code **)(*plVar14 + 0x88))(plVar14,pQVar11,iVar5);
    }
    uVar12 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar12 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar3 = FUN_100325f80(uVar12);
    if (cVar3 != '\0') {
      plVar14 = (long *)CHostDesktopWorkspacesController::instance();
      (**(code **)(*plVar14 + 0x80))(plVar14,pQVar11);
    }
  }
  cVar3 = FUN_10018ffc0(lVar13);
  if (cVar3 != '\0') {
    QMetaObject::tr((char *)&local_c8,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Parallels_Wizard_10226eea0);
    QWidget::setWindowTitle((QString *)pQVar11);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10023cb73;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_10023cb73:
    QWidget::setFixedSize(pQVar11);
    uVar9 = CWindowInterface::customWindowFlags();
    CWindowInterface::setCustomWindowFlags(pQVar11 + 6,uVar9 | 0x80);
  }
  if (*(char *)(param_1 + 0x2e) != '\0') {
    uVar9 = QWidget::windowState();
    QWidget::setWindowState(pQVar11,uVar9 & 0xfffffffe);
    QWidget::raise();
    QWidget::activateWindow();
  }
LAB_10023cbee:
  FUN_10023aef0(param_1);
  return 0;
}

