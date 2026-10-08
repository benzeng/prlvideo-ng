
void FUN_100144140(CBaseDialog *param_1,undefined8 param_2)

{
  void *pvVar1;
  Connection local_80 [8];
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QColor local_60 [16];
  QColor local_50 [16];
  QPalette local_40 [16];
  QBrush local_30 [8];
  QBrush local_28 [15];
  undefined1 local_19;
  
  CBaseDialog::CBaseDialog(param_1,param_2,0,0);
  *(undefined ***)param_1 = &PTR_FUN_1021fc268;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fc458;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1021fc4a8;
  pvVar1 = operator_new(0x20);
  *(void **)(param_1 + 0x60) = pvVar1;
  FUN_1001455e0(pvVar1,param_1);
  QWidget::setFixedSize((int)param_1,0x172);
  QPalette::QPalette(local_40);
  QColor::QColor(local_50,0x13);
  QBrush::QBrush(local_30,local_50,1);
  QPalette::setBrush(local_40,0,9,local_30);
  QBrush::~QBrush(local_30);
  QColor::QColor(local_60,0x13);
  QBrush::QBrush(local_28,local_60,1);
  QPalette::setBrush(local_40,2,9,local_28);
  QBrush::~QBrush(local_28);
  QWidget::setPalette(*(QPalette **)(*(long *)(param_1 + 0x60) + 0x10));
  QTextBrowser::setOpenLinks(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),0));
  QTextEdit::toHtml();
  FUN_100116020(&local_78);
  QString::arg(&local_68,&local_70,&local_78,0,0x20);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001442ae;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1001442ae:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001442de;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1001442de:
  QTextEdit::setHtml(*(QString **)(*(long *)(param_1 + 0x60) + 0x10));
  QProgressBar::setMaximum((int)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18));
  QObject::connect(local_80,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),
                   "2anchorClicked(const QUrl&)",param_1,"1onAnchorClicked(const QUrl&)",0);
  QMetaObject::Connection::~Connection(local_80);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10014435c;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10014435c:
  QPalette::~QPalette(local_40);
  return;
}

