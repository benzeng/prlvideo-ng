
void FUN_10058cfe0(QMainWindow *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  void *pvVar1;
  CWindowInterface *pCVar2;
  
  QMainWindow::QMainWindow(param_1,param_2,0);
  *(undefined ***)param_1 = &PTR_FUN_10221d270;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221d440;
  pCVar2 = (CWindowInterface *)(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10221d490;
  CWindowInterface::CWindowInterface(pCVar2,param_1,0xc0);
  *(undefined ***)param_1 = &PTR_FUN_10221d270;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221d440;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10221d490;
  pvVar1 = operator_new(0x90);
  *(void **)(param_1 + 0x40) = pvVar1;
  FUN_10058d490(pvVar1,param_1);
  pvVar1 = operator_new(0xd8);
  FUN_10058fa00(pvVar1,param_1,param_3,param_4,param_5,param_6,pCVar2);
  *(void **)(param_1 + 0x48) = pvVar1;
  return;
}

