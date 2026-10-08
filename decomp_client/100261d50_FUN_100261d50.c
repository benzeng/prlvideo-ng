
undefined8 FUN_100261d50(QObject *param_1)

{
  QMapNodeBase *pQVar1;
  char cVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  CDeclarativeWizardContentProvider *this;
  QWidget *pQVar6;
  undefined8 uVar7;
  QString *pQVar8;
  CAbstractWizardModel *pCVar9;
  CContentArea *pCVar10;
  long local_68;
  QVariant local_60;
  QArrayData *local_50;
  QMapNodeBase *local_48;
  long local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  if (((*(long *)(param_1 + 0x50) == 0) || (*(int *)(*(long *)(param_1 + 0x50) + 4) == 0)) ||
     (*(long *)(param_1 + 0x58) == 0)) {
    pQVar3 = operator_new(0x48);
    CContentWindow::CContentWindow((CContentWindow *)pQVar3,0,0);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    piVar5 = *(int **)(param_1 + 0x40);
    if (piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        piVar5 = *(int **)(param_1 + 0x40);
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_29 = *piVar5 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x40));
        }
      }
      *(int **)(param_1 + 0x40) = piVar4;
      *(QObject **)(param_1 + 0x48) = pQVar3;
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
    pQVar8 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar8 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar8 = *(QString **)(param_1 + 0x48);
    }
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Parallels_Wizard_10226eea0);
    QWidget::setWindowTitle(pQVar8);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100261e83;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_100261e83:
    pQVar6 = (QWidget *)0x0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar6 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar6 = *(QWidget **)(param_1 + 0x48);
    }
    WidgetUtils::setWindowResizeEnabled(pQVar6,false);
    param_1[0x38] = (QObject)0x1;
    CContentWindow::contentWidget();
    pQVar3 = (QObject *)CContentWidget::contentArea();
    piVar5 = (int *)0x0;
    if (pQVar3 != (QObject *)0x0) {
      piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    }
    piVar4 = *(int **)(param_1 + 0x50);
    if (piVar4 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_29 = *piVar5 != 0;
        UNLOCK();
        piVar4 = *(int **)(param_1 + 0x50);
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x50));
        }
      }
      *(int **)(param_1 + 0x50) = piVar5;
      *(QObject **)(param_1 + 0x58) = pQVar3;
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar5);
      }
    }
  }
  this = operator_new(0x50);
  pCVar10 = (CContentArea *)0x0;
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (pCVar10 = (CContentArea *)0x0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
    pCVar10 = *(CContentArea **)(param_1 + 0x58);
  }
  pCVar9 = (CAbstractWizardModel *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pCVar9 = (CAbstractWizardModel *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pCVar9 = *(CAbstractWizardModel **)(param_1 + 0x30);
  }
  pQVar6 = (QWidget *)CContentArea::window();
  CDeclarativeWizardContentProvider::CDeclarativeWizardContentProvider
            (this,pCVar10,pCVar9,pQVar6,param_1);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
  }
  QObject::connect(&local_40,uVar7,"2finished( int )",param_1,"1onTransporterWizardFinished( int )",
                   2);
  if (local_40 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  local_48 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_50 = (QArrayData *)QString::fromAscii_helper("wizardStyleType",0xf);
  QVariant::QVariant(&local_60,"pd10");
  FUN_10008d1b0(&local_48,&local_50,&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026209d;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10026209d:
  uVar7 = CDeclarativeWizardContentProvider::startWizard(this,&local_48,1);
  QObject::connect(&local_68,uVar7,"2contentLoaded(QObject*)",param_1,
                   "1onTransporterWizardStarted()",2);
  if ((cVar2 != '\0') && (local_68 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  pQVar1 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    if (*(long *)(local_48 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
  return 0;
}

