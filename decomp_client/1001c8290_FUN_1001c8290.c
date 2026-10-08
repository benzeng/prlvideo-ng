
void FUN_1001c8290(QMenu *param_1)

{
  Connection local_20 [8];
  
  QMenu::QMenu(param_1,(QWidget *)0x0);
  param_1->field0_0x0 = (undefined4 **)&PTR_FUN_1021ff1d0;
  param_1->field2_0x10 = (undefined4 **)&PTR_FUN_1021ff380;
  QObject::connect(local_20,param_1,"2aboutToShow()",param_1,"1onAboutToShow()",0);
  QMetaObject::Connection::~Connection(local_20);
  return;
}

