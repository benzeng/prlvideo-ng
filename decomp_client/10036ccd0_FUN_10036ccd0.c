
void FUN_10036ccd0(QMainWindow *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  CWindowInterface *pCVar5;
  
  QMainWindow::QMainWindow(param_1,param_5,0);
  *(undefined ***)param_1 = &PTR_FUN_10220dff0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220e1b0;
  pCVar5 = (CWindowInterface *)(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10220e200;
  CWindowInterface::CWindowInterface(pCVar5,param_1,0xe10);
  *(undefined ***)param_1 = &PTR_FUN_10220dff0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220e1b0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10220e200;
  pvVar3 = operator_new(0x58);
  FUN_10036acd0(pvVar3,param_2,param_3,param_4,param_1,param_6,pCVar5);
  *(void **)(param_1 + 0x40) = pvVar3;
  FUN_10036af80(pvVar3);
  FUN_10036b100(pvVar3);
  uVar4 = FUN_1001d50a0();
  uVar1 = FUN_1001d50e0(uVar4);
  FUN_10036c550(pvVar3,uVar1);
  uVar4 = FUN_100152280();
  uVar2 = FUN_100154d40(uVar4);
  FUN_10036b5e0(pvVar3,uVar2);
  FUN_10006bc40(pvVar3);
  return;
}

