
void FUN_10061d180(QLineEdit *param_1)

{
  CPasswordEditWatcher *pCVar1;
  CLicenseKeyFormatter *this;
  undefined8 local_50;
  QString local_48;
  QVariant local_40;
  QFontMetrics local_30 [15];
  undefined1 local_21;
  
  QFontMetrics::QFontMetrics(local_30,(QFont *)(*(long *)(param_1 + 0x28) + 0x38));
  QFontMetrics::width(local_30,0x57);
  QFontMetrics::width(local_30,0x2d);
  QWidget::setMinimumWidth((int)param_1);
  QLineEdit::placeholderText();
  QVariant::QVariant(&local_40,&local_48);
  QObject::setProperty((char *)param_1,(QVariant *)"PlaceholderText");
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10061d234;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10061d234:
  pCVar1 = operator_new(0x28);
  CPasswordEditWatcher::CPasswordEditWatcher(pCVar1,param_1,2);
  this = operator_new(0x20);
  local_50 = 0x600000005;
  CLicenseKeyFormatter::CLicenseKeyFormatter(this,param_1,(QObject *)param_1,(KeyParams *)&local_50)
  ;
  QFontMetrics::~QFontMetrics(local_30);
  return;
}

