
void FUN_100783790(QWidget *param_1,undefined8 param_2)

{
  void *pvVar1;
  QDeclarativeView *this;
  
  QMainWindow::QMainWindow((QMainWindow *)param_1,param_2,0);
  *(undefined ***)param_1 = &PTR_FUN_10222abc0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222ad78;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10222adc8;
  CWindowInterface::CWindowInterface((CWindowInterface *)(param_1 + 0x30),param_1,0x80);
  *(undefined ***)param_1 = &PTR_FUN_10222abc0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222ad78;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10222adc8;
  pvVar1 = operator_new(0x18);
  FUN_1007850a0(pvVar1,param_1);
  *(void **)(param_1 + 0x48) = pvVar1;
  this = operator_new(0x30);
  QDeclarativeView::QDeclarativeView(this,param_1);
  *(QDeclarativeView **)(param_1 + 0x40) = this;
  QMainWindow::setCentralWidget(param_1);
  FUN_100783880(param_1);
  return;
}

