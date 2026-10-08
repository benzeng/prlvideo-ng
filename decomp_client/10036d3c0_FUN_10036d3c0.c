
void FUN_10036d3c0(QShowEvent *param_1)

{
  QSize local_20;
  undefined8 local_18;
  
  QWidget::showEvent(param_1);
  local_18 = QWidget::pos();
  local_20.field0_0x0 = 0xffffffff;
  local_20.field1_0x4 = 0xffffffff;
  WidgetUtils::ensureWidgetVisible((QWidget *)param_1,(QPoint *)&local_18,&local_20,-1);
  return;
}

