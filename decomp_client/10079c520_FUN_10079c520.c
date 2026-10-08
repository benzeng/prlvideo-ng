
QWidget * FUN_10079c520(long param_1,QString *param_2,long param_3,CContentWindow *param_4)

{
  QObject *pQVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  void *pvVar8;
  QString *pQVar9;
  undefined8 *puVar10;
  char *pcVar11;
  int *piVar12;
  QObject *pQVar13;
  int *local_b0;
  QVariant local_98;
  QArrayData *local_88;
  QVariant local_80;
  QArrayData *local_70;
  Connection local_68 [8];
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_3 == 0) {
    return (QWidget *)0x0;
  }
  uVar4 = FUN_100794960();
  lVar5 = FUN_100795470(uVar4,param_3,param_2);
  if (lVar5 == 0) {
    return (QWidget *)0x0;
  }
  if (param_4 == (CContentWindow *)0x0) {
    plVar6 = (long *)FUN_100613ce0(param_1 + 0x10);
    pQVar13 = (QObject *)0x1;
    local_b0 = (int *)0x0;
    if ((*plVar6 == 0) || (local_b0 = (int *)0x0, *(int *)(*plVar6 + 4) == 0)) {
LAB_10079c60f:
      param_4 = operator_new(0x48);
      CContentWindow::CContentWindow(param_4,0,0);
      CAppliance::getType();
      iVar3 = QString::compare_helper
                        (local_48 + *(long *)(local_48 + 0x10),*(undefined4 *)(local_48 + 4),
                         PTR_s_Windows_10_development_102275048,0xffffffff,1);
      if (iVar3 == 0) {
        QMetaObject::tr((char *)&local_40,(char *)&PTR_staticMetaObject_10222c5b0,
                        (int)PTR_s_Windows_10_Development_Environme_102270928);
      }
      else {
        CAppliance::getApplianceName();
      }
      QWidget::setWindowTitle((QString *)param_4);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079c6de;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_10079c6de:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079c70e;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_10079c70e:
      QObject::property((char *)&local_58);
      QObject::setProperty((char *)param_4,(QVariant *)"serverUuid");
      QVariant::~QVariant(&local_58);
      if ((char)pQVar13 != '\0') goto LAB_10079c776;
      bVar2 = true;
    }
    else {
      pQVar1 = (QObject *)plVar6[1];
      local_b0 = (int *)0x0;
      if (pQVar1 == (QObject *)0x0) goto LAB_10079c60f;
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
      local_b0 = (int *)0x0;
      if (piVar7 == (int *)0x0) goto LAB_10079c60f;
      local_b0 = piVar7;
      if (piVar7[1] == 0) {
        pQVar13 = (QObject *)0x0;
        goto LAB_10079c60f;
      }
      QWidget::show();
      QWidget::raise();
      QWidget::activateWindow();
      pQVar13 = (QObject *)0x0;
      if (piVar7[1] != 0) {
        pQVar13 = pQVar1;
      }
      param_4 = (CContentWindow *)0x0;
      bVar2 = false;
    }
    LOCK();
    *local_b0 = *local_b0 + -1;
    local_31 = *local_b0 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(local_b0);
    }
    if (!bVar2) {
      return (QWidget *)pQVar13;
    }
  }
LAB_10079c776:
  WidgetUtils::setWindowResizeEnabled((QWidget *)param_4,false);
  CContentWindow::contentWidget();
  pvVar8 = operator_new(0x10);
  FUN_100733b00(pvVar8);
  pQVar9 = (QString *)CContentWidget::engine();
  local_60 = (QArrayData *)QString::fromAscii_helper("osicon",6);
  QDeclarativeEngine::addImageProvider(pQVar9,(QDeclarativeImageProvider *)&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079c80c;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10079c80c:
  pvVar8 = operator_new(0x40);
  uVar4 = CContentWindow::contentWidget();
  FUN_10079a1d0(pvVar8,uVar4,lVar5,param_1);
  uVar4 = FUN_10079a1e0(pvVar8);
  QObject::connect(local_68,uVar4,"2contentLoaded(QObject*)",param_4,"1show()",2);
  QMetaObject::Connection::~Connection(local_68);
  lVar5 = CContentWidget::content();
  if (lVar5 == 0) goto LAB_10079c984;
  local_70 = (QArrayData *)QString::fromAscii_helper("contentProviderClass",0x14);
  CContentWidget::content();
  puVar10 = (undefined8 *)CContentInfo::contentProvider();
  (**(code **)*puVar10)(puVar10);
  pcVar11 = (char *)QMetaObject::className();
  QVariant::QVariant(&local_80,pcVar11);
  FUN_100075a90(param_4,&local_70,&local_80);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079c911;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10079c911:
  local_88 = (QArrayData *)QString::fromAscii_helper("applianceUuid",0xd);
  QVariant::QVariant(&local_98,param_2);
  FUN_100075a90(param_4,&local_88,&local_98);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079c984;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10079c984:
  puVar10 = (undefined8 *)FUN_100613ce0(param_1 + 0x10,param_2);
  piVar7 = (int *)0x0;
  if (param_4 != (CContentWindow *)0x0) {
    piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)param_4);
  }
  piVar12 = (int *)*puVar10;
  if (piVar12 != piVar7) {
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
      piVar12 = (int *)*puVar10;
    }
    if (piVar12 != (int *)0x0) {
      LOCK();
      *piVar12 = *piVar12 + -1;
      local_31 = *piVar12 != 0;
      UNLOCK();
      if ((!(bool)local_31) && ((void *)*puVar10 != (void *)0x0)) {
        operator_delete((void *)*puVar10);
      }
    }
    *puVar10 = piVar7;
    puVar10[1] = param_4;
  }
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_31 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar7);
    }
  }
  return (QWidget *)param_4;
}

