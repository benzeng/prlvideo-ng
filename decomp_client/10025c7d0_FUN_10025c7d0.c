
undefined8 FUN_10025c7d0(QObject *param_1,undefined4 param_2,undefined4 param_3)

{
  QMapNodeBase *pQVar1;
  char cVar2;
  QObject *pQVar3;
  int *piVar4;
  void *pvVar5;
  undefined8 uVar6;
  QObject *pQVar7;
  int *piVar8;
  CDeclarativeWizardContentProvider *this;
  QWidget *pQVar9;
  QString *pQVar10;
  undefined8 uVar11;
  CAbstractWizardModel *pCVar12;
  char *pcVar13;
  CContentArea *pCVar14;
  long local_a0;
  long local_98;
  long local_90;
  QVariant local_88;
  QArrayData *local_78;
  QMapNodeBase *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  if (((*(long *)(param_1 + 0x68) == 0) || (*(int *)(*(long *)(param_1 + 0x68) + 4) == 0)) ||
     (*(long *)(param_1 + 0x70) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"Content area absent.");
    pQVar7 = operator_new(0x48);
    CContentWindow::CContentWindow((CContentWindow *)pQVar7,0,0);
    piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar7);
    pQVar3 = param_1 + 0x38;
    piVar4 = *(int **)(param_1 + 0x38);
    if (piVar4 != piVar8) {
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        local_31 = *piVar8 != 0;
        UNLOCK();
        piVar4 = *(int **)pQVar3;
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_31 = *piVar4 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)pQVar3 != (void *)0x0)) {
          operator_delete(*(void **)pQVar3);
        }
      }
      *(int **)(param_1 + 0x38) = piVar8;
      *(QObject **)(param_1 + 0x40) = pQVar7;
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
    pQVar10 = (QString *)0x0;
    if ((*(long *)pQVar3 != 0) && (pQVar10 = (QString *)0x0, *(int *)(*(long *)pQVar3 + 4) != 0)) {
      pQVar10 = *(QString **)(param_1 + 0x40);
    }
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Parallels_Wizard_10226eea0);
    QWidget::setWindowTitle(pQVar10);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10025c931;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10025c931:
    pcVar13 = (char *)0x0;
    if ((*(long *)pQVar3 != 0) && (pcVar13 = (char *)0x0, *(int *)(*(long *)pQVar3 + 4) != 0)) {
      pcVar13 = *(char **)(param_1 + 0x40);
    }
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10015aab0(&local_58,uVar6);
    QVariant::QVariant(&local_50,&local_58);
    QObject::setProperty(pcVar13,(QVariant *)"serverUuid");
    QVariant::~QVariant(&local_50);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10025c9c7;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10025c9c7:
    CContentWindow::contentWidget();
    pQVar3 = (QObject *)CContentWidget::contentArea();
    piVar4 = (int *)0x0;
    if (pQVar3 != (QObject *)0x0) {
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    }
    piVar8 = *(int **)(param_1 + 0x68);
    if (piVar8 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_31 = *piVar4 != 0;
        UNLOCK();
        piVar8 = *(int **)(param_1 + 0x68);
      }
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + -1;
        local_31 = *piVar8 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x68));
        }
      }
      *(int **)(param_1 + 0x68) = piVar4;
      *(QObject **)(param_1 + 0x70) = pQVar3;
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar4);
      }
    }
  }
  pQVar3 = param_1 + 0x38;
  if (((*(long *)pQVar3 != 0) && (*(int *)(*(long *)pQVar3 + 4) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    if (DAT_102310820 == (void *)0x0) {
      pvVar5 = operator_new(0x18);
      FUN_10002bc90(pvVar5);
      DAT_10226c0b0 = 1;
      DAT_102310820 = pvVar5;
    }
    pvVar5 = DAT_102310820;
    uVar6 = CContentWindow::titleBarController();
    FUN_10002bf30(pvVar5,uVar6,2);
    pQVar9 = (QWidget *)0x0;
    if ((*(long *)pQVar3 != 0) && (pQVar9 = (QWidget *)0x0, *(int *)(*(long *)pQVar3 + 4) != 0)) {
      pQVar9 = *(QWidget **)(param_1 + 0x40);
    }
    WidgetUtils::setWindowResizeEnabled(pQVar9,false);
  }
  pQVar7 = operator_new(0x38);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1005c1100(pQVar7,uVar6,param_1);
  piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar7);
  piVar4 = *(int **)(param_1 + 0x48);
  if (piVar4 != piVar8) {
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x48);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x48));
      }
    }
    *(int **)(param_1 + 0x48) = piVar8;
    *(QObject **)(param_1 + 0x50) = pQVar7;
  }
  if (piVar8 != (int *)0x0) {
    LOCK();
    *piVar8 = *piVar8 + -1;
    local_31 = *piVar8 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar8);
    }
  }
  FUN_10025d1c0(param_1,param_2);
  this = operator_new(0x50);
  pCVar14 = (CContentArea *)0x0;
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (pCVar14 = (CContentArea *)0x0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
    pCVar14 = *(CContentArea **)(param_1 + 0x70);
  }
  pCVar12 = (CAbstractWizardModel *)0x0;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (pCVar12 = (CAbstractWizardModel *)0x0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
    pCVar12 = *(CAbstractWizardModel **)(param_1 + 0x50);
  }
  pQVar9 = (QWidget *)CContentArea::window();
  CDeclarativeWizardContentProvider::CDeclarativeWizardContentProvider
            (this,pCVar14,pCVar12,pQVar9,param_1);
  piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar4 = *(int **)(param_1 + 0x58);
  if (piVar4 != piVar8) {
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x58);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x58));
      }
    }
    *(int **)(param_1 + 0x58) = piVar8;
    *(CDeclarativeWizardContentProvider **)(param_1 + 0x60) = this;
  }
  if (piVar8 != (int *)0x0) {
    LOCK();
    *piVar8 = *piVar8 + -1;
    local_31 = *piVar8 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar8);
    }
  }
  if (((*(long *)pQVar3 != 0) && (*(int *)(*(long *)pQVar3 + 4) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    CContentWindow::contentWidget();
    pvVar5 = operator_new(0x10);
    FUN_100733b00(pvVar5);
    pQVar10 = (QString *)CContentWidget::engine();
    local_60 = (QArrayData *)QString::fromAscii_helper("osicon",6);
    QDeclarativeEngine::addImageProvider(pQVar10,(QDeclarativeImageProvider *)&local_60);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10025cd21;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10025cd21:
    pvVar5 = operator_new(0x10);
    FUN_10073aa80(pvVar5);
    pQVar10 = (QString *)CContentWidget::engine();
    local_68 = (QArrayData *)QString::fromAscii_helper("fileIcon",8);
    QDeclarativeEngine::addImageProvider(pQVar10,(QDeclarativeImageProvider *)&local_68);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10025cd95;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_10025cd95:
  local_70 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_78 = (QArrayData *)QString::fromAscii_helper("wizardStyleType",0xf);
  QVariant::QVariant(&local_88,"pd10");
  FUN_10008d1b0(&local_70,&local_78,&local_88);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025ce0f;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10025ce0f:
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x60);
  }
  uVar11 = CDeclarativeWizardContentProvider::startWizard(uVar6,&local_70,param_3);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x50);
  }
  QObject::connect(&local_90,uVar6,"2finished(int)",param_1,"1onNewVmWizardFinished(int)",0);
  if (local_90 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x50);
  }
  QObject::connect(&local_98,uVar6,"2currentPageIdChanged(int,int)",param_1,
                   "1onCurrentPageIdChanged(int,int)",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_98 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  QObject::connect(&local_a0,uVar11,"2contentLoaded(QObject*)",param_1,
                   "1onNewVmWizardContentLoaded()",2);
  if ((cVar2 != '\0') && (local_a0 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  pQVar1 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    if (*(long *)(local_70 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
  return 0;
}

