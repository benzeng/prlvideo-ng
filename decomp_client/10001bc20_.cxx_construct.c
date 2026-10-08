
/* Function Stack Size: 0x10 bytes */

ID CVmConsoleWindowToolbarController::_cxx_construct(ID param_1,SEL param_2)

{
  long lVar1;
  
  lVar1 = _vmConsoleWindow;
  *(undefined8 *)(param_1 + 8 + _vmConsoleWindow) = 0;
  *(undefined8 *)(param_1 + lVar1) = 0;
  lVar1 = _vm;
  *(undefined8 *)(param_1 + 8 + _vm) = 0;
  *(undefined8 *)(param_1 + lVar1) = 0;
  lVar1 = _messageProvider;
  *(undefined8 *)(param_1 + 8 + _messageProvider) = 0;
  *(undefined8 *)(param_1 + lVar1) = 0;
  return param_1;
}

