
undefined8 FUN_10019def0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  Connection local_38 [8];
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  lVar2 = *(long *)(param_1 + 0x18);
  if ((lVar2 == 0) || ((*(byte *)(*(long *)(lVar2 + 8) + 0x20) & 1) == 0)) {
    plVar1 = operator_new(0xf8);
    lVar2 = QApplication::activeWindow();
  }
  else {
    plVar1 = operator_new(0xf8);
  }
  FUN_10019d190(plVar1,param_1,lVar2);
  QWidget::setAttribute(plVar1,0x37,1);
  QObject::connect(local_38,plVar1,"2finished(int)",param_3,param_4,0);
  QMetaObject::Connection::~Connection(local_38);
  (**(code **)(*plVar1 + 0x1a0))(plVar1);
  return 1;
}

