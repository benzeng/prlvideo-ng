
void FUN_100783d20(long param_1,char param_2)

{
  char *pcVar1;
  undefined8 local_30;
  QVariant local_28;
  
  QWidget::setVisible(SUB81(param_1,0));
  if (param_2 != '\0') {
    FUN_100783dd0(param_1);
    QDeclarativeView::rootObject();
    pcVar1 = (char *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1390);
    local_30 = *(undefined8 *)(param_1 + 0x48);
    QVariant::QVariant(&local_28,0x27,&local_30,1);
    QObject::setProperty(pcVar1,(QVariant *)"feedbackData");
    QVariant::~QVariant(&local_28);
  }
  return;
}

