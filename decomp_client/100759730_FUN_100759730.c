
void FUN_100759730(QMenu *param_1,undefined8 param_2)

{
  QSignalMapper *this;
  
  QMenu::QMenu(param_1,(QWidget *)0x0);
  param_1->field0_0x0 = (undefined4 **)&PTR_FUN_102228820;
  param_1->field2_0x10 = (undefined4 **)&PTR_FUN_1022289d0;
  *(undefined8 *)((long)&param_1[1].field1_0x8.field0_0x0 + 6) = param_2;
  this = operator_new(0x10);
  QSignalMapper::QSignalMapper(this,(QObject *)param_1);
  *(QSignalMapper **)((long)&param_1[1].field0_0x0 + 6) = this;
  FUN_100759800(param_1);
  return;
}

