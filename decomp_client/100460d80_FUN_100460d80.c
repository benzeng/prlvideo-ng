
void FUN_100460d80(long param_1)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  
  lVar8 = FUN_10044e580();
  if (lVar8 == 0) {
    pcVar11 = "(!)Error: Server instance is null.";
  }
  else {
    lVar8 = FUN_10044e460(param_1);
    if (lVar8 != 0) {
      uVar9 = FUN_10044e460(param_1);
      iVar5 = FUN_10018a9d0(uVar9);
      if (iVar5 == 0x30000008) {
        iVar5 = QStackedWidget::currentIndex();
        if (iVar5 == 0) {
          QWidget::setFixedWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x118));
          QProgressBar::setMaximum((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1e0));
          QProgressBar::setValue((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1e0));
        }
      }
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1b0);
      uVar10 = FUN_10044e460(param_1);
      FUN_10018a9d0(uVar10);
      QStackedWidget::setCurrentIndex((int)uVar9);
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
      uVar10 = FUN_10044e460(param_1);
      FUN_10018a9d0(uVar10);
      QStackedWidget::setCurrentIndex((int)uVar9);
      uVar9 = FUN_10044e660(param_1);
      bVar3 = FUN_1003be8b0(uVar9);
      plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x1f0);
      uVar1 = *(uint *)(plVar2[5] + 8);
      (**(code **)(*plVar2 + 0x68))(plVar2,bVar3);
      plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x128);
      (**(code **)(*plVar2 + 0x68))(plVar2,bVar3);
      plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x1f8);
      (**(code **)(*plVar2 + 0x68))(plVar2,bVar3);
      plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x10);
      (**(code **)(*plVar2 + 0x68))(plVar2,bVar3);
      uVar9 = FUN_10044e660(param_1);
      uVar4 = FUN_1003be930(uVar9);
      plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x18);
      (**(code **)(*plVar2 + 0x68))(plVar2,uVar4);
      plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 400);
      (**(code **)(*plVar2 + 0x68))(plVar2,uVar4);
      plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x198);
      (**(code **)(*plVar2 + 0x68))(plVar2,uVar4);
      plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x1b0);
      (**(code **)(*plVar2 + 0x68))(plVar2,uVar4);
      plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x1e8);
      (**(code **)(*plVar2 + 0x68))(plVar2,uVar4);
      if ((byte)((byte)((uVar1 & 0x8000) >> 0xf) ^ bVar3) == 1) {
        QWidget::layout();
        QLayout::activate();
        uVar6 = FUN_10044e5b0(param_1);
        uVar7 = FUN_10044e5a0(param_1);
        FUN_100838de0(param_1,uVar6,uVar7);
        return;
      }
      return;
    }
    pcVar11 = "(!)Error: Vm instance is null.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar11);
  return;
}

