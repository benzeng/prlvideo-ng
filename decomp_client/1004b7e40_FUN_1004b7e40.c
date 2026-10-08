
void FUN_1004b7e40(long param_1)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_10044e460();
  if (lVar4 != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x58);
    (**(code **)(*plVar1 + 0x70))(plVar1);
    QWidget::setFixedWidth((int)plVar1);
    uVar5 = FUN_10044e660(param_1);
    cVar2 = FUN_1003bf670(uVar5);
    if (cVar2 != '\0') {
      uVar5 = FUN_10044e460(param_1);
      uVar3 = FUN_1001222e0(uVar5);
      plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xd0);
      (**(code **)(*plVar1 + 0x68))(plVar1,uVar3 & 1);
      plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xb0);
      (**(code **)(*plVar1 + 0x68))(plVar1,(uVar3 & 2) >> 1);
      plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x90);
      (**(code **)(*plVar1 + 0x68))(plVar1,(uVar3 & 4) >> 2);
      plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xf0);
      (**(code **)(*plVar1 + 0x68))(plVar1,(uVar3 & 8) >> 3);
      FUN_1004b7f80(param_1);
    }
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x110);
    (**(code **)(*plVar1 + 0x68))(plVar1,cVar2);
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x70);
                    /* WARNING: Could not recover jumptable at 0x0001004b7f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x68))(plVar1,cVar2);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
  return;
}

