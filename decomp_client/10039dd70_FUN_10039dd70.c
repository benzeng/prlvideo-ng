
void FUN_10039dd70(long param_1)

{
  long lVar1;
  QString *pQVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  QStackedWidget *this;
  undefined8 uVar8;
  QStatusBar *this_00;
  QArrayData *pQVar9;
  char *pcVar10;
  QVariant local_40;
  undefined8 local_30;
  
  lVar1 = param_1 + 0x20;
  lVar7 = FUN_1003b0a30(lVar1);
  if (lVar7 == 0) {
    pcVar10 = "(!)Error: Vm instance is null.";
  }
  else {
    lVar7 = FUN_1003b0a60(lVar1);
    if (lVar7 != 0) {
      this = operator_new(0x30);
      QStackedWidget::QStackedWidget(this,*(QWidget **)(*(long *)(param_1 + 0x18) + 0x10));
      *(QStackedWidget **)(param_1 + 0x38) = this;
      local_30 = 0;
      QWidget::move((QPoint *)this);
      QWidget::setAutoFillBackground(SUB81(*(undefined8 *)(param_1 + 0x38),0));
      QObject::installEventFilter(*(QObject **)(param_1 + 0x10));
      QWidget::setFixedWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58));
      CProgressIndicator::hide();
      uVar8 = FUN_1003b0ad0(lVar1);
      cVar4 = FUN_1003e5e80(uVar8);
      CAuthorizationLock::setLockState
                (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),(cVar4 == '\0') + '\x01');
      FUN_10039eea0(param_1);
      uVar8 = FUN_1003b0a30(lVar1);
      cVar4 = FUN_10018da50(uVar8);
      if (cVar4 == '\0') {
        bVar5 = (bool)QDialogButtonBox::button
                                (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),0x400);
        QWidget::setEnabled(bVar5);
      }
      FUN_1003b0ad0(lVar1);
      iVar6 = CMappingModel::getSubmitPolicy();
      if (iVar6 == 0) {
        QWidget::hide();
      }
      cVar4 = FUN_100d80630(1);
      if (cVar4 != '\0') {
        QWidget::hide();
      }
      this_00 = operator_new(0x30);
      QStatusBar::QStatusBar(this_00,*(QWidget **)(param_1 + 0x10));
      QMainWindow::setStatusBar(*(QStatusBar **)(param_1 + 0x10));
      QWidget::setFixedHeight((int)this_00);
      QStatusBar::setSizeGripEnabled(SUB81(this_00,0));
      puVar3 = PTR_s_DynProp_CompactPerformed_102270dd0;
      pcVar10 = *(char **)(param_1 + 0x10);
      QVariant::QVariant(&local_40,false);
      QObject::setProperty(pcVar10,(QVariant *)puVar3);
      QVariant::~QVariant(&local_40);
      pQVar2 = *(QString **)(param_1 + 0x58);
      pQVar9 = (QArrayData *)
               QString::fromAscii_helper
                         ("QLabel { border-image: url(:/pixmaps/Banners/warning_text_background.png) 5 5 5 5;}"
                          ,0x53);
      QWidget::setStyleSheet(pQVar2);
      if (*(int *)pQVar9 != -1) {
        if (*(int *)pQVar9 != 0) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          UNLOCK();
          local_30 = CONCAT71(local_30._1_7_,*(int *)pQVar9 != 0);
          if (*(int *)pQVar9 != 0) goto LAB_10039df89;
        }
        QArrayData::deallocate(pQVar9,2,8);
      }
LAB_10039df89:
      QLabel::setMargin((int)*(undefined8 *)(param_1 + 0x58));
      QLabel::setIndent((int)*(undefined8 *)(param_1 + 0x58));
      QWidget::setFixedHeight((int)*(undefined8 *)(param_1 + 0x58));
      FontUtils::setSmallFont(*(QWidget **)(param_1 + 0x58),false);
      QLabel::setWordWrap(SUB81(*(undefined8 *)(param_1 + 0x58),0));
      (**(code **)(**(long **)(param_1 + 0x58) + 0x68))(*(long **)(param_1 + 0x58),0);
      return;
    }
    pcVar10 = "(!)Error: Server instance is null.";
  }
  FUN_100df99c0("[CFG_ED]","prl_client_app",0,pcVar10);
  return;
}

