
int FUN_1005fbee0(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = QObject::qt_metacall();
  if (-1 < iVar2) {
    if (param_2 == 0xc) {
      if (iVar2 < 1) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar2;
      }
      if (iVar2 == 0) {
        iVar1 = *(int *)param_4[1];
        *(int *)(param_1 + 0x20) = iVar1;
        (**(code **)(**(long **)(param_1 + 0x10) + 0xd8))
                  (*(long **)(param_1 + 0x10),
                   *(undefined8 *)
                    (*(long *)(param_1 + 0x18) + 0x10 +
                    ((long)*(int *)(*(long *)(param_1 + 0x18) + 8) + (long)iVar1) * 8));
        CAbstractWizardPage::wizardCtrl();
        CWizardController::updateWizardActions();
      }
    }
    iVar2 = iVar2 + -1;
  }
  return iVar2;
}

