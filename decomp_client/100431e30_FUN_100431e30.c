
void FUN_100431e30(long param_1,void *param_2)

{
  char *pcVar1;
  Data_conflict local_38;
  undefined4 local_30;
  QVariant local_28;
  
  local_30 = 0x80000000;
  local_38.field7 = 0;
  QVariant::QVariant(&local_28,0x2a,param_2,0);
  QVariant::operator=((QVariant *)&local_38,&local_28);
  QVariant::~QVariant(&local_28);
  pcVar1 = (char *)QAbstractItemView::itemDelegate();
  QObject::setProperty(pcVar1,(QVariant *)"SelectedIndex");
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),0));
  QVariant::~QVariant((QVariant *)&local_38);
  return;
}

