
void FUN_100376e60(long param_1)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  void *pvVar10;
  long lVar11;
  byte bVar12;
  QArrayData *local_88;
  QVariant local_80;
  QString local_70;
  QVariant local_68;
  QString local_58;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  puVar1 = PTR_s_DynProp_CanShowSheet_102270de0;
  pcVar8 = *(char **)(param_1 + 0x10);
  QVariant::QVariant(&local_40,false);
  QObject::setProperty(pcVar8,(QVariant *)puVar1);
  QVariant::~QVariant(&local_40);
  uVar9 = 0;
  QFrame::setFrameStyle((int)*(undefined8 *)(param_1 + 0x10));
  QFrame::setFrameShadow(*(undefined8 *)(param_1 + 0x10),0x10);
  QWidget::setAutoFillBackground(SUB81(*(undefined8 *)(param_1 + 0x10),0));
  QWidget::setBackgroundRole(*(undefined8 *)(param_1 + 0x10),6);
  QWidget::setAttribute(*(undefined8 *)(param_1 + 0x10),0x49,1);
  QScrollArea::setAlignment(*(undefined8 *)(param_1 + 0x10),0x84);
  QWidget::setFocusPolicy(*(undefined8 *)(param_1 + 0x10),0xf);
  QWidget::setAttribute(*(undefined8 *)(param_1 + 0x10),2,1);
  uVar7 = QAbstractScrollArea::viewport();
  QWidget::setFocusPolicy(uVar7,0xf);
  uVar7 = QAbstractScrollArea::viewport();
  QWidget::setAttribute(uVar7,2,1);
  pcVar8 = (char *)QAbstractScrollArea::viewport();
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_58,uVar9);
  QVariant::QVariant(&local_50,&local_58);
  QObject::setProperty(pcVar8,(QVariant *)"vmUuid");
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100376fd9;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100376fd9:
  pcVar8 = (char *)QAbstractScrollArea::viewport();
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar9 = FUN_100323dd0(uVar9);
  FUN_1001884b0(&local_70,uVar9);
  QVariant::QVariant(&local_68,&local_70);
  QObject::setProperty(pcVar8,(QVariant *)"serverUuid");
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100377068;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100377068:
  pcVar8 = (char *)QAbstractScrollArea::viewport();
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar5 = FUN_100323e20(uVar9);
  QVariant::QVariant(&local_80,uVar5);
  QObject::setProperty(pcVar8,(QVariant *)"displayId");
  QVariant::~QVariant(&local_80);
  uVar9 = 0;
  MacUtils::setWidgetToBeDisplayedInWindowMenu(*(QWidget **)(param_1 + 0x10),false);
  QAbstractScrollArea::setVerticalScrollBarPolicy(*(undefined8 *)(param_1 + 0x10),1);
  QAbstractScrollArea::setHorizontalScrollBarPolicy(*(undefined8 *)(param_1 + 0x10),1);
  pvVar10 = operator_new(0x48);
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10037a7b0(pvVar10,uVar9,0);
  *(void **)(param_1 + 0x28) = pvVar10;
  QScrollArea::setWidget(*(QWidget **)(param_1 + 0x10));
  QWidget::setAttribute(*(undefined8 *)(param_1 + 0x28),2,1);
  QWidget::setFocusPolicy(*(undefined8 *)(param_1 + 0x28),0xf);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar9 = FUN_100323e00(uVar9);
  uVar9 = FUN_100319d40(uVar9);
  FUN_10035b410(uVar9,*(undefined8 *)(param_1 + 0x28));
  uVar7 = FUN_100152280();
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar9 = FUN_100323dd0(uVar9);
  FUN_1001884b0(&local_88,uVar9);
  lVar11 = FUN_100152a20(uVar7,&local_88);
  if (lVar11 == 0) {
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10037726e;
      }
      QArrayData::deallocate(local_88,2,8);
    }
    goto LAB_10037726e;
  }
  uVar9 = FUN_100152280();
  cVar2 = FUN_100155010(uVar9,lVar11,0);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100377202;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100377202:
  if (cVar2 != '\0') {
    pvVar10 = operator_new(0x18);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10036a2d0(pvVar10,*(undefined8 *)(param_1 + 0x10),uVar9,0);
    *(void **)(param_1 + 0x30) = pvVar10;
  }
LAB_10037726e:
  pvVar10 = operator_new(0x38);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10037d9e0(pvVar10,*(undefined8 *)(param_1 + 0x10),uVar9);
  *(void **)(param_1 + 0x38) = pvVar10;
  pvVar10 = operator_new(0x28);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100367b70(pvVar10,*(undefined8 *)(param_1 + 0x10),uVar9,0);
  *(void **)(param_1 + 0x40) = pvVar10;
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar9 = FUN_100323dd0(uVar9);
  iVar6 = FUN_10018a9d0(uVar9);
  if (iVar6 == 0x30000004) {
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar9 = FUN_100323dd0(uVar9);
    cVar2 = FUN_10018ffc0(uVar9);
    if (cVar2 == '\0') {
      QWidget::hide();
      bVar12 = 1;
    }
    else {
      bVar12 = 0;
    }
  }
  else {
    bVar12 = 0;
  }
  if ((*(long *)(param_1 + 0x30) != 0) && (cVar2 = FUN_10036a3f0(), cVar2 != '\0')) {
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    bVar3 = FUN_10037da90(*(undefined8 *)(param_1 + 0x38));
    FUN_10036a330(uVar9,bVar12 | bVar3);
  }
  uVar4 = MacUtils::isWindowInFullScreenTiling(*(QWidget **)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x66) = uVar4;
  return;
}

