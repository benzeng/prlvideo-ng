
void FUN_1005b25a0(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  iVar2 = CAbstractWizardModel::currentPageId();
  if (iVar2 != 0x12) {
    lVar4 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    if (*(int *)(lVar4 + 0x50) != 9) {
      iVar2 = CAbstractWizardModel::currentPageId();
      lVar4 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      if (iVar2 == 7) {
        if (*(int *)(lVar4 + 0x50) == 3) {
          FUN_1005b1d80(param_1);
          return;
        }
        if (*(int *)(lVar4 + 0x50) != 2) {
          return;
        }
        lVar4 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
        *(undefined4 *)(lVar4 + 0x50) = 2;
        uVar5 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
        FUN_1005b8760(uVar5,2);
        uVar5 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
        uVar3 = FUN_1005b8750(uVar5);
        goto LAB_1005b2670;
      }
      if (((*(long *)(lVar4 + 0x40) == 0) || (*(int *)(*(long *)(lVar4 + 0x40) + 4) == 0)) ||
         (*(long *)(lVar4 + 0x48) == 0)) {
        pcVar6 = "(!)Error: Vm Configuration instance is null.";
LAB_1005b268e:
        FUN_100df99c0("","prl_client_app",0,pcVar6);
        return;
      }
      uVar5 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      lVar4 = FUN_1005b87b0(uVar5);
      if (lVar4 == 0) {
        pcVar6 = "(!)Error: Vm instance is null.";
        goto LAB_1005b268e;
      }
      iVar2 = CAbstractWizardModel::wizardCtrl();
      bVar1 = (bool)CWizardController::wizardAction(iVar2);
      QAction::setEnabled(bVar1);
    }
  }
  uVar5 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b8760(uVar5,2);
  uVar3 = 2;
LAB_1005b2670:
  FUN_10083fee0(param_1,uVar3);
  return;
}

