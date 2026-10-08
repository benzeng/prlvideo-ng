
void FUN_100143840(CBaseDialog *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  Connection local_b8 [8];
  Connection local_b0 [8];
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QColor local_90 [16];
  QColor local_80 [16];
  QPalette local_70 [16];
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QLocale local_48 [8];
  QString local_40;
  QBrush local_38 [8];
  QBrush local_30 [15];
  undefined1 local_21;
  
  CBaseDialog::CBaseDialog(param_1,param_3,0,0);
  *(undefined ***)param_1 = &PTR_FUN_1021fbfc0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fc1b0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1021fc200;
  pvVar2 = operator_new(0x40);
  *(void **)(param_1 + 0x60) = pvVar2;
  FUN_100144ca0(pvVar2,param_1);
  QLocale::QLocale(local_48);
  QLocale::name();
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ja_JP",5);
  cVar1 = operator==(&local_40,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10014390b;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10014390b:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10014393b;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10014393b:
  QLocale::~QLocale(local_48);
  iVar3 = 0x172;
  if (cVar1 != '\0') {
    iVar3 = 600;
  }
  QWidget::setFixedSize((int)param_1,iVar3);
  QLabel::text();
  QString::arg(&local_58,&local_60,param_2,0,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001439b9;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001439b9:
  QLabel::setText(*(QString **)(*(long *)(param_1 + 0x60) + 0x28));
  QPalette::QPalette(local_70);
  QColor::QColor(local_80,0x13);
  QBrush::QBrush(local_38,local_80,1);
  QPalette::setBrush(local_70,0,9,local_38);
  QBrush::~QBrush(local_38);
  QColor::QColor(local_90,0x13);
  QBrush::QBrush(local_30,local_90,1);
  QPalette::setBrush(local_70,2,9,local_30);
  QBrush::~QBrush(local_30);
  QWidget::setPalette(*(QPalette **)(*(long *)(param_1 + 0x60) + 0x10));
  QTextBrowser::setOpenLinks(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),0));
  QTextEdit::toHtml();
  FUN_100116020(&local_a8);
  QString::arg(&local_98,&local_a0,&local_a8,0,0x20);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100143aee;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100143aee:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100143b24;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100143b24:
  QTextEdit::setHtml(*(QString **)(*(long *)(param_1 + 0x60) + 0x10));
  QObject::connect(local_b0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38),"2clicked()",param_1,
                   "2canceled()",0);
  QMetaObject::Connection::~Connection(local_b0);
  QObject::connect(local_b8,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),
                   "2anchorClicked(const QUrl&)",param_1,"1onAnchorClicked(const QUrl&)",0);
  QMetaObject::Connection::~Connection(local_b8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100143bd6;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100143bd6:
  QPalette::~QPalette(local_70);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}

