
void FUN_1004d5c70(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_10044e460();
  if (lVar3 != 0) {
    uVar4 = FUN_10044e660(param_1);
    uVar2 = FUN_1003c0920(uVar4);
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x28);
    (**(code **)(*plVar1 + 0x68))(plVar1,uVar2);
    uVar4 = FUN_10044e660(param_1);
    uVar2 = FUN_1003c08b0(uVar4);
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x30);
    (**(code **)(*plVar1 + 0x68))(plVar1,uVar2);
    uVar4 = FUN_10044e660(param_1);
    uVar2 = FUN_1003c0840(uVar4);
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x38);
    (**(code **)(*plVar1 + 0x68))(plVar1,uVar2);
    QStackedWidget::setCurrentIndex((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 8));
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
  return;
}

