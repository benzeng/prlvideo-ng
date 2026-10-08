
void FUN_1009b90e0(QDialog *param_1,undefined8 param_2)

{
  QPixmap *pQVar1;
  QFont *pQVar2;
  char cVar3;
  void *pvVar4;
  QArrayData *pQVar5;
  QFont local_60 [16];
  QPixmap local_50 [32];
  Connection local_30 [15];
  undefined1 local_21;
  
  QDialog::QDialog(param_1,param_2,0);
  *(undefined ***)param_1 = &PTR_FUN_102235e90;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102236068;
  QWidget::setWindowModality(param_1,1);
  pvVar4 = operator_new(0x48);
  *(void **)(param_1 + 0x30) = pvVar4;
  FUN_1009b9c90(pvVar4,param_1);
  QObject::connect(local_30,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),
                   "2clicked( QAbstractButton* )",param_1,"1OnButtonClicked( QAbstractButton* )",0);
  QMetaObject::Connection::~Connection(local_30);
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x30) + 0x10);
  ResourceUtils::getAppIcon(local_50,6);
  QLabel::setPixmap(pQVar1);
  QPixmap::~QPixmap(local_50);
  pQVar2 = *(QFont **)(*(long *)(param_1 + 0x30) + 0x38);
  FontUtils::getSmallFont(SUB81(local_60,0));
  CProgressIndicator::setTextFont(pQVar2);
  QFont::~QFont(local_60);
  cVar3 = FUN_1009b92b0(param_1);
  if (cVar3 != '\0') {
    QWidget::setWindowFlags(param_1,5);
  }
  pQVar5 = (QArrayData *)QString::fromAscii_helper("*{color:palette(text)}",0x16);
  QWidget::setStyleSheet((QString *)param_1);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009b9220;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1009b9220:
  CProgressIndicator::toggleAnimation(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38),0));
  return;
}

