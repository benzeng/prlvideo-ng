
void FUN_1003a3590(QMainWindow *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  QMainWindow::QMainWindow(param_1,param_3,0);
  *(undefined ***)param_1 = &PTR_FUN_102210200;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022103d0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102210420;
  CWindowInterface::CWindowInterface((CWindowInterface *)(param_1 + 0x30),param_1,0xc0);
  *(undefined ***)param_1 = &PTR_FUN_102210200;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022103d0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102210420;
  pvVar1 = operator_new(0x70);
  FUN_10039d7a0(pvVar1,param_1,param_2);
  *(void **)(param_1 + 0x40) = pvVar1;
  FUN_10039dd70(pvVar1);
  FUN_10039e0a0(pvVar1);
  FUN_10039e850(pvVar1);
  FUN_10039ec10(pvVar1);
  return;
}

