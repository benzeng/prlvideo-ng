
void FUN_10058ec20(QObject *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  QString *pQVar3;
  QIcon *pQVar4;
  char cVar5;
  int iVar6;
  QStackedWidget *this;
  QMacToolBar *this_00;
  QStatusBar *this_01;
  QIcon local_50 [8];
  QString local_48;
  QArrayData *local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  QArrayData *local_30;
  
  this = operator_new(0x30);
  QStackedWidget::QStackedWidget
            (this,*(QWidget **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x10));
  *(QStackedWidget **)(param_1 + 0xb0) = this;
  local_38 = 0;
  uStack_37 = 0;
  QWidget::move((QPoint *)this);
  QWidget::setAutoFillBackground(SUB81(*(undefined8 *)(param_1 + 0xb0),0));
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x58);
  cVar5 = FUN_1005a5f40(param_1 + 0x18);
  CAuthorizationLock::setLockState(uVar1,(cVar5 == '\0') + '\x01');
  cVar5 = FUN_100d80630(1);
  if (cVar5 != '\0') {
    plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x58);
    (**(code **)(*plVar2 + 0x68))(plVar2,0);
  }
  CProgressIndicator::setType(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x68),1)
  ;
  CProgressIndicator::setIndicatorSize
            ((int)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x68));
  CProgressIndicator::setAnimationCentered
            (SUB81(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x68),0));
  pQVar3 = *(QString **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x68);
  local_40 = (QArrayData *)QString::fromAscii_helper("",0);
  CProgressIndicator::setText(pQVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_38 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_38) goto LAB_10058ed69;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10058ed69:
  QWidget::setFixedWidth((int)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x68));
  CProgressIndicator::hide();
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x58) + 0x28) + 9
                ) & 0x80) == 0) goto LAB_10058ee4e;
  QWidget::styleSheet();
  QString::fromUtf8_helper((char *)&local_30,0x1e02b55);
  QString::append(&local_48);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_38 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_38) goto LAB_10058ee09;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10058ee09:
  QWidget::setStyleSheet(*(QString **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x38));
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_38 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_38) goto LAB_10058ee4e;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10058ee4e:
  this_00 = operator_new(0x10);
  QMacToolBar::QMacToolBar(this_00,param_1);
  *(QMacToolBar **)(param_1 + 0xd0) = this_00;
  MacUtils::setToolbarCustomizable(this_00,false);
  QWidget::hide();
  iVar6 = CMappingModel::getSubmitPolicy();
  if (iVar6 == 0) {
    QLayout::removeWidget(*(QWidget **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x50));
    plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x70);
    (**(code **)(*plVar2 + 0x68))(plVar2,0);
    QBoxLayout::addWidget
              (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x50),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x30),0,0);
    QBoxLayout::addWidget
              (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x50),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x38),0,0);
    QLayout::removeWidget(*(QWidget **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 8));
    QWidget::hide();
  }
  this_01 = operator_new(0x30);
  QStatusBar::QStatusBar(this_01,*(QWidget **)(param_1 + 0x10));
  QWidget::setFixedHeight((int)this_01);
  QStatusBar::setSizeGripEnabled(SUB81(this_01,0));
  pQVar4 = *(QIcon **)(param_1 + 0x10);
  QIcon::QIcon(local_50);
  QWidget::setWindowIcon(pQVar4);
  QIcon::~QIcon(local_50);
  QObject::installEventFilter(*(QObject **)(param_1 + 0x10));
  return;
}

