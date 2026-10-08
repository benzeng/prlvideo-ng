
void FUN_1006b5cd0(QObject *param_1,undefined8 param_2)

{
  void *pvVar1;
  QMainWindow *pQVar2;
  undefined1 auVar3 [16];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f5730;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar1 = operator_new(0x458);
  *(void **)(param_1 + 0x18) = pvVar1;
  pQVar2 = operator_new(0x30);
  QMainWindow::QMainWindow(pQVar2,0,0);
  *(QMainWindow **)(param_1 + 0x20) = pQVar2;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e15e8;
  auVar3._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar3._0_8_ = PTR_shared_null_1021e15d0;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar3;
  FUN_1006b9aa0(*(undefined8 *)(param_1 + 0x18),pQVar2);
  FUN_1006b5e20(param_1);
  return;
}

