
void FUN_10039d7a0(QObject *param_1,QWidget *param_2,undefined8 param_3)

{
  void *pvVar1;
  CHelpButton *this;
  CWindowResizeController *pCVar2;
  QLabel *pQVar3;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f1b90;
  *(QWidget **)(param_1 + 0x10) = param_2;
  pvVar1 = operator_new(0x60);
  *(void **)(param_1 + 0x18) = pvVar1;
  FUN_1003b08a0(param_1 + 0x20,param_3,param_2,param_1);
  *(undefined8 *)(param_1 + 0x38) = 0;
  this = operator_new(0x38);
  CHelpButton::CHelpButton(this,param_2);
  *(CHelpButton **)(param_1 + 0x40) = this;
  pCVar2 = operator_new(0x88);
  CWindowResizeController::CWindowResizeController(pCVar2,param_2,param_1,0);
  *(CWindowResizeController **)(param_1 + 0x48) = pCVar2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,*(undefined8 *)(param_1 + 0x10),0);
  *(QLabel **)(param_1 + 0x58) = pQVar3;
  QMacToolBar::QMacToolBar((QMacToolBar *)(param_1 + 0x60),*(QObject **)(param_1 + 0x10));
  FUN_1003a3ed0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  FUN_10039d8d0(param_1);
  return;
}

