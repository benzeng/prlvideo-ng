
void FUN_1007a70e0(QWidget *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  QGridLayout *this;
  Connection local_30 [16];
  
  QWidget::QWidget(param_1,param_3,param_4);
  *(undefined ***)param_1 = &PTR_FUN_10222cb10;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222ccc0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x70) = PTR_shared_null_1021e15e8;
  QWidget::setAttribute(param_1,2,1);
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,param_1);
  *(QGridLayout **)(param_1 + 0x30) = this;
  QLayout::setContentsMargins((int)this,0,0x10,0);
  QGridLayout::setSpacing((int)*(undefined8 *)(param_1 + 0x30));
  FUN_1007a72b0(param_1);
  QObject::connect(local_30,param_2,"2refreshView()",param_1,"1OnRefreshView()",0);
  QMetaObject::Connection::~Connection(local_30);
  return;
}

