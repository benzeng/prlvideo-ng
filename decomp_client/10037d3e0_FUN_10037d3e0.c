
void FUN_10037d3e0(QDeclarativeView *param_1,QWidget *param_2,QObject *param_3)

{
  QDeclarativeView *pQVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  void *pvVar5;
  int *piVar6;
  QGLWidget *pQVar7;
  char *pcVar8;
  QString *pQVar9;
  QObject *pQVar10;
  int *piVar11;
  undefined8 uVar12;
  QVariant local_88;
  Data_conflict local_78;
  QVariant local_70;
  Data_conflict local_60;
  QArrayData *local_58;
  QVariant local_50;
  QGLFormat local_40 [15];
  undefined1 local_31;
  
  QDeclarativeView::QDeclarativeView(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10220eaa0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220ec90;
  pvVar5 = operator_new(0x60);
  FUN_10037bdc0(pvVar5,param_1);
  pQVar1 = param_1 + 0x30;
  *(void **)pQVar1 = pvVar5;
  piVar6 = (int *)0x0;
  if (param_2 != (QWidget *)0x0) {
    piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)param_2);
  }
  piVar11 = *(int **)((long)pvVar5 + 0x18);
  if (piVar11 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      piVar11 = *(int **)((long)pvVar5 + 0x18);
    }
    if (piVar11 != (int *)0x0) {
      LOCK();
      *piVar11 = *piVar11 + -1;
      local_31 = *piVar11 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)((long)pvVar5 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)((long)pvVar5 + 0x18));
      }
    }
    *(int **)((long)pvVar5 + 0x18) = piVar6;
    *(QWidget **)((long)pvVar5 + 0x20) = param_2;
  }
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_31 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar6);
    }
  }
  lVar2 = *(long *)pQVar1;
  piVar6 = (int *)0x0;
  if (param_3 != (QObject *)0x0) {
    piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  piVar11 = *(int **)(lVar2 + 0x28);
  if (piVar11 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      piVar11 = *(int **)(lVar2 + 0x28);
    }
    if (piVar11 != (int *)0x0) {
      LOCK();
      *piVar11 = *piVar11 + -1;
      local_31 = *piVar11 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(lVar2 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(lVar2 + 0x28));
      }
    }
    *(int **)(lVar2 + 0x28) = piVar6;
    *(QObject **)(lVar2 + 0x30) = param_3;
  }
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_31 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar6);
    }
  }
  if (param_2 != (QWidget *)0x0) {
    QObject::installEventFilter((QObject *)param_2);
  }
  QObject::installEventFilter(*(QObject **)PTR_self_1021e1388);
  if (*(char *)(*(long *)pQVar1 + 0x48) != '\0') {
    QGLFormat::QGLFormat(local_40);
    QGLFormat::setSwapInterval((int)local_40);
    pQVar7 = operator_new(0x30);
    QGLWidget::QGLWidget(pQVar7,local_40,0,0,0);
    QAbstractScrollArea::setViewport((QWidget *)param_1);
    QGraphicsView::setViewportUpdateMode(param_1,0);
    QGLFormat::~QGLFormat(local_40);
  }
  bVar3 = (bool)QAbstractScrollArea::viewport();
  QWidget::setAutoFillBackground(bVar3);
  pcVar8 = (char *)QAbstractScrollArea::viewport();
  QVariant::QVariant(&local_50,true);
  QObject::setProperty(pcVar8,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_50);
  QFrame::setFrameShape(param_1,0);
  QAbstractScrollArea::setHorizontalScrollBarPolicy(param_1,1);
  QAbstractScrollArea::setVerticalScrollBarPolicy(param_1,1);
  QGraphicsView::setRenderHint(param_1,1,1);
  QDeclarativeView::setResizeMode(param_1,1);
  if (DAT_102312278 == 0) {
    DAT_102312278 = FUN_10037dd60("VmScreenshot",1,0,"VmScreenshot");
  }
  pvVar5 = operator_new(0x10);
  FUN_100733b00(pvVar5);
  pQVar9 = (QString *)QDeclarativeView::engine();
  local_58 = (QArrayData *)QString::fromAscii_helper("osicon",6);
  QDeclarativeEngine::addImageProvider(pQVar9,(QDeclarativeImageProvider *)&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10037d6d3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10037d6d3:
  lVar2 = *(long *)pQVar1;
  pQVar10 = operator_new(0xb0);
  FUN_10072d1f0(pQVar10,param_1);
  piVar11 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar10);
  piVar6 = *(int **)(lVar2 + 0x38);
  if (piVar6 != piVar11) {
    if (piVar11 != (int *)0x0) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      local_31 = *piVar11 != 0;
      UNLOCK();
      piVar6 = *(int **)(lVar2 + 0x38);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(lVar2 + 0x38) != (void *)0x0)) {
        operator_delete(*(void **)(lVar2 + 0x38));
      }
    }
    *(int **)(lVar2 + 0x38) = piVar11;
    *(QObject **)(lVar2 + 0x40) = pQVar10;
  }
  if (piVar11 != (int *)0x0) {
    LOCK();
    *piVar11 = *piVar11 + -1;
    local_31 = *piVar11 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar11);
    }
  }
  lVar2 = *(long *)(*(long *)pQVar1 + 0x38);
  uVar12 = 0;
  if ((lVar2 != 0) && (uVar12 = 0, *(int *)(lVar2 + 4) != 0)) {
    uVar12 = *(undefined8 *)(*(long *)pQVar1 + 0x40);
  }
  uVar4 = FUN_100323e20(param_3);
  FUN_10072dfd0(uVar12,uVar4);
  QDeclarativeView::engine();
  pQVar9 = (QString *)QDeclarativeEngine::rootContext();
  local_60.field7 = QString::fromAscii_helper("PrimaryDisplayId",0x10);
  QVariant::QVariant(&local_70,DAT_100e152b8);
  QDeclarativeContext::setContextProperty(pQVar9,(QVariant *)&local_60);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60.field15 != -1) {
    if (*(int *)local_60.field15 != 0) {
      LOCK();
      *(int *)local_60.field15 = *(int *)local_60.field15 + -1;
      local_31 = *(int *)local_60.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10037d80a;
    }
    QArrayData::deallocate((QArrayData *)local_60.field15,2,8);
  }
LAB_10037d80a:
  QDeclarativeView::engine();
  pQVar9 = (QString *)QDeclarativeEngine::rootContext();
  local_78.field7 = QString::fromAscii_helper("appIsActive",0xb);
  QVariant::QVariant(&local_88,true);
  QDeclarativeContext::setContextProperty(pQVar9,(QVariant *)&local_78);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78.field15 != -1) {
    if (*(int *)local_78.field15 != 0) {
      LOCK();
      *(int *)local_78.field15 = *(int *)local_78.field15 + -1;
      local_31 = *(int *)local_78.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10037d889;
    }
    QArrayData::deallocate((QArrayData *)local_78.field15,2,8);
  }
LAB_10037d889:
  FUN_10037c0f0(*(long *)pQVar1);
  return;
}

