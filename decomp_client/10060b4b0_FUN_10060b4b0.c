
undefined1 FUN_10060b4b0(long param_1,uint param_2,QString *param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  QMapNodeBase *pQVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  QWidget *pQVar12;
  CAbstractWizardModel *pCVar13;
  int *piVar14;
  CDeclarativeWizardContentProvider *this;
  CContentArea *pCVar15;
  QWidget *pQVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  long local_140;
  QVariant local_138;
  QArrayData *local_128;
  QMapNodeBase *local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  int *local_f8;
  QWidget *local_f0;
  QVariant local_e8;
  QVariant local_d8;
  undefined8 local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QString local_b0;
  QVariant local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  QDateTime local_68;
  QVariant local_60;
  Data_conflict local_50;
  QString local_48 [2];
  bool local_31;
  
  uVar8 = FUN_100152280();
  lVar9 = FUN_100152bc0(uVar8);
  if (lVar9 == 0) {
    pcVar17 = "(!)Error: Server instance is null.";
    goto LAB_10060b5fe;
  }
  if (param_2 == 6) {
    QSettings::QSettings((QSettings *)local_48,(QObject *)0x0);
    QString::fromUtf8_helper(&local_50.field0,0x1e0721e);
    QString::append((QString *)&local_50);
    QDateTime::currentDateTime();
    QVariant::QVariant(&local_60,&local_68);
    QSettings::setValue(local_48,(QVariant *)&local_50);
    QVariant::~QVariant(&local_60);
    QDateTime::~QDateTime(&local_68);
    if (*(int *)local_50.field15 != -1) {
      if (*(int *)local_50.field15 != 0) {
        LOCK();
        *(int *)local_50.field15 = *(int *)local_50.field15 + -1;
        local_31 = *(int *)local_50.field15 != 0;
        UNLOCK();
        if (local_31) goto LAB_10060b58f;
      }
      QArrayData::deallocate((QArrayData *)local_50.field15,2,8);
    }
LAB_10060b58f:
    QSettings::~QSettings((QSettings *)local_48);
LAB_10060b60e:
    iVar7 = 0;
    if (param_2 < 7) goto LAB_10060b616;
  }
  else {
    if (param_2 != 2) goto LAB_10060b60e;
    uVar8 = FUN_10016f500(lVar9);
    cVar4 = FUN_10061b500(uVar8,6);
    if (cVar4 != '\0') {
LAB_10060b5e9:
      pcVar17 = "(!)Error: Request to show registration for incorrect license type.";
LAB_10060b5fe:
      FUN_100df99c0("","prl_client_app",0,pcVar17);
      return 0;
    }
    uVar8 = FUN_10016f500(lVar9);
    cVar4 = FUN_10061b4d0(uVar8,0x80);
    if (cVar4 != '\0') goto LAB_10060b5e9;
LAB_10060b616:
    iVar7 = *(int *)(&DAT_100e24e60 + (long)(int)param_2 * 4);
  }
  local_78 = 0;
  uStack_70 = 0;
  lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  lVar19 = 0;
  if (lVar10 == 0) {
LAB_10060b696:
    lVar18 = 0;
  }
  else {
    do {
      while (lVar18 = lVar10, cVar4 = operator<((QString *)(lVar18 + 0x18),param_3), cVar4 == '\0')
      {
        lVar10 = *(long *)(lVar18 + 8);
        lVar19 = lVar18;
        if (*(long *)(lVar18 + 8) == 0) goto LAB_10060b686;
      }
      lVar10 = *(long *)(lVar18 + 0x10);
    } while (*(long *)(lVar18 + 0x10) != 0);
    lVar18 = lVar19;
    if (lVar19 == 0) goto LAB_10060b696;
LAB_10060b686:
    cVar4 = operator<(param_3,(QString *)(lVar18 + 0x18));
    if (cVar4 != '\0') goto LAB_10060b696;
  }
  plVar1 = (long *)(param_1 + 0x28);
  puVar11 = &local_78;
  if (lVar18 != 0) {
    puVar11 = (undefined8 *)(lVar18 + 0x20);
  }
  piVar14 = (int *)*puVar11;
  if (piVar14 != (int *)0x0) {
    lVar10 = puVar11[1];
    LOCK();
    *piVar14 = *piVar14 + 1;
    local_31 = *piVar14 != 0;
    UNLOCK();
    lVar19 = 0;
    if ((piVar14[1] != 0) && (lVar19 = 0, lVar10 != 0)) {
      lVar10 = CContentWindow::contentWidget();
      lVar19 = 0;
      if (lVar10 != 0) {
        CContentWindow::contentWidget();
        lVar10 = CContentWidget::content();
        lVar19 = 0;
        if (lVar10 != 0) {
          CContentWindow::contentWidget();
          CContentWidget::content();
          CContentInfo::contentProvider();
          lVar10 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1490);
          lVar19 = 0;
          if (lVar10 != 0) {
            CDeclarativeWizardContentProvider::wizardModel();
            lVar19 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
          }
        }
      }
    }
    LOCK();
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    local_31 = *piVar14 != 0;
    if (*piVar14 == 0) {
      operator_delete(piVar14);
    }
    if (lVar19 != 0) {
      if (*(int *)(lVar19 + 0x78) != iVar7) {
        FUN_100675e20(lVar19);
      }
      local_88 = 0;
      uStack_80 = 0;
      lVar9 = *(long *)(*plVar1 + 0x10);
      lVar10 = 0;
      if (*(long *)(*plVar1 + 0x10) == 0) {
LAB_10060b836:
        lVar19 = 0;
      }
      else {
        do {
          while (lVar19 = lVar9, cVar4 = operator<((QString *)(lVar19 + 0x18),param_3),
                cVar4 == '\0') {
            lVar9 = *(long *)(lVar19 + 8);
            lVar10 = lVar19;
            if (*(long *)(lVar19 + 8) == 0) goto LAB_10060b826;
          }
          lVar9 = *(long *)(lVar19 + 0x10);
        } while (*(long *)(lVar19 + 0x10) != 0);
        lVar19 = lVar10;
        if (lVar10 == 0) goto LAB_10060b836;
LAB_10060b826:
        cVar4 = operator<(param_3,(QString *)(lVar19 + 0x18));
        if (cVar4 != '\0') goto LAB_10060b836;
      }
      puVar11 = &local_88;
      if (lVar19 != 0) {
        puVar11 = (undefined8 *)(lVar19 + 0x20);
      }
      piVar14 = (int *)*puVar11;
      if (piVar14 != (int *)0x0) {
        LOCK();
        *piVar14 = *piVar14 + 1;
        local_31 = *piVar14 != 0;
        UNLOCK();
      }
      QWidget::raise();
      if (piVar14 != (int *)0x0) {
        LOCK();
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        local_31 = *piVar14 != 0;
        if (*piVar14 == 0) {
          operator_delete(piVar14);
        }
      }
      local_98 = 0;
      uStack_90 = 0;
      lVar9 = *(long *)(*plVar1 + 0x10);
      lVar10 = 0;
      if (*(long *)(*plVar1 + 0x10) != 0) {
        do {
          while (lVar19 = lVar9, cVar4 = operator<((QString *)(lVar19 + 0x18),param_3),
                cVar4 == '\0') {
            lVar9 = *(long *)(lVar19 + 8);
            lVar10 = lVar19;
            if (*(long *)(lVar19 + 8) == 0) goto LAB_10060b8e1;
          }
          lVar9 = *(long *)(lVar19 + 0x10);
        } while (*(long *)(lVar19 + 0x10) != 0);
        lVar19 = lVar10;
        if (lVar10 != 0) {
LAB_10060b8e1:
          cVar4 = operator<(param_3,(QString *)(lVar19 + 0x18));
          if (cVar4 == '\0') goto LAB_10060b8f3;
        }
      }
      lVar19 = 0;
LAB_10060b8f3:
      puVar11 = &local_98;
      if (lVar19 != 0) {
        puVar11 = (undefined8 *)(lVar19 + 0x20);
      }
      piVar14 = (int *)*puVar11;
      if (piVar14 != (int *)0x0) {
        LOCK();
        *piVar14 = *piVar14 + 1;
        local_31 = *piVar14 != 0;
        UNLOCK();
      }
      QWidget::activateWindow();
      if (piVar14 == (int *)0x0) {
        return 1;
      }
      LOCK();
      *piVar14 = *piVar14 + -1;
      local_31 = *piVar14 != 0;
      UNLOCK();
      if (local_31) {
        return 1;
      }
      operator_delete(piVar14);
      return 1;
    }
  }
  if (param_4 == 0) {
    cVar4 = '\0';
  }
  else {
    QObject::property((char *)&local_a8);
    cVar4 = QVariant::toBool();
    QVariant::~QVariant(&local_a8);
  }
  pQVar12 = (QWidget *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1330);
  if ((cVar4 == '\0') && (pQVar12 != (QWidget *)0x0)) {
    cVar4 = '\0';
  }
  else {
    pQVar12 = operator_new(0x48);
    CContentWindow::CContentWindow((CContentWindow *)pQVar12,0,0);
    FUN_1001c72e0(&local_b0);
    cVar6 = FUN_100d80630(1);
    if (cVar6 != '\0') {
      QMetaObject::tr((char *)&local_c0,PTR_staticMetaObject_1021e1520,(int)PTR_s_Lite_102270a50);
      QString::fromUtf8_helper((char *)&local_b8,0x1e31adc);
      QString::append(&local_b8);
      QString::append(&local_b0);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_31 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if (local_31) goto LAB_10060ba4e;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_10060ba4e:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if (local_31) goto LAB_10060ba84;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
    }
LAB_10060ba84:
    QWidget::setWindowTitle((QString *)pQVar12);
    if (cVar4 != '\0') {
      local_c8 = QWidget::pos();
      QWidget::move((QPoint *)pQVar12);
    }
    cVar4 = '\x01';
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_31 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if (local_31) goto LAB_10060baf1;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
  }
LAB_10060baf1:
  FUN_100df99c0("","prl_client_app",0,"Create license wizard model. Detached window: %d");
  WidgetUtils::setWindowResizeEnabled(pQVar12,false);
  pCVar13 = operator_new(0x1a0);
  FUN_100674520(pCVar13,lVar9,iVar7,cVar4);
  puVar2 = PTR_s_serverID_102274838;
  QVariant::QVariant(&local_d8,param_3);
  QObject::setProperty((char *)pCVar13,(QVariant *)puVar2);
  QVariant::~QVariant(&local_d8);
  puVar2 = PTR_s_dlgType_102274840;
  QVariant::QVariant(&local_e8,param_2);
  QObject::setProperty((char *)pCVar13,(QVariant *)puVar2);
  QVariant::~QVariant(&local_e8);
  piVar14 = (int *)0x0;
  if (pQVar12 != (QWidget *)0x0) {
    piVar14 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pQVar12);
  }
  local_f8 = piVar14;
  local_f0 = pQVar12;
  FUN_100613580(plVar1,param_3,&local_f8);
  if (piVar14 != (int *)0x0) {
    LOCK();
    *piVar14 = *piVar14 + -1;
    local_31 = *piVar14 != 0;
    UNLOCK();
    if (!local_31) {
      operator_delete(piVar14);
    }
  }
  this = operator_new(0x50);
  CContentWindow::contentWidget();
  pCVar15 = (CContentArea *)CContentWidget::contentArea();
  pQVar16 = (QWidget *)CContentWindow::contentWidget();
  CDeclarativeWizardContentProvider::CDeclarativeWizardContentProvider
            (this,pCVar15,pCVar13,pQVar16,(QObject *)0x0);
  QObject::connect(&local_100,pCVar13,"2finished(int)",param_1,"1onLicenseWizardFinished(int)",0);
  if (local_100 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_100);
    cVar6 = '\0';
    QObject::connect(&local_108,pCVar13,"2finished(int)",pCVar13,"1deleteLater()",0);
  }
  else {
    cVar5 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_100);
    cVar6 = '\0';
    QObject::connect(&local_108,pCVar13,"2finished(int)",pCVar13,"1deleteLater()",0);
    if (cVar5 != '\0') {
      if (local_108 == 0) {
        cVar6 = '\0';
      }
      else {
        cVar6 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_108);
  if (cVar4 != '\0') {
    QObject::connect(&local_110,this,"2finished()",pQVar12,"1hide()",0);
    if ((cVar6 == '\0') || (local_110 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_110);
      cVar6 = '\0';
      QObject::connect(&local_118,this,"2finished()",pQVar12,"1close()",0);
    }
    else {
      cVar4 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_110);
      cVar6 = '\0';
      QObject::connect(&local_118,this,"2finished()",pQVar12,"1close()",0);
      if (cVar4 != '\0') {
        if (local_118 == 0) {
          cVar6 = '\0';
        }
        else {
          cVar6 = QMetaObject::Connection::isConnected_helper();
        }
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_118);
  }
  local_120 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_128 = (QArrayData *)QString::fromAscii_helper("wizardStyleType",0xf);
  QVariant::QVariant(&local_138,"pd10");
  FUN_10008d1b0(&local_120,&local_128,&local_138);
  QVariant::~QVariant(&local_138);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_31) goto LAB_10060bed0;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10060bed0:
  uVar8 = CDeclarativeWizardContentProvider::startWizard(this,&local_120,1);
  QObject::connect(&local_140,uVar8,"2contentLoaded(QObject*)",pQVar12,"1show()",2);
  if ((cVar6 != '\0') && (local_140 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_140);
  pQVar3 = local_120;
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      UNLOCK();
      if (*(int *)local_120 != 0) {
        return 1;
      }
      local_31 = false;
    }
    if (*(long *)(local_120 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
  return 1;
}

