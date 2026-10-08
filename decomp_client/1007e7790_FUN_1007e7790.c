
void FUN_1007e7790(long param_1,int param_2)

{
  long *plVar1;
  undefined8 extraout_RDX;
  
  QStackedWidget::setCurrentIndex((int)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30));
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 8);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2 != 0,extraout_RDX,0x50);
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0x20);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2 == 2);
  QPushButton::setDefault(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20),0));
  QPushButton::setDefault(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),0));
  QWidget::setFixedHeight((int)param_1);
  return;
}

