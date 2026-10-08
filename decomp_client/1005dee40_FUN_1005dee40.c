
void FUN_1005dee40(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  
  if (param_2 == 0xc) {
    if ((param_3 == 3) && (*(uint *)param_4[1] < 2)) {
      uVar2 = FUN_1003dff90();
      *(undefined4 *)*param_4 = uVar2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1005db210(param_1,0);
      return;
    case 1:
switchD_1005dee85_caseD_1:
      FUN_1005db8e0(param_1);
      return;
    case 2:
      if (DAT_1023109c0 == (void *)0x0) {
        pvVar3 = operator_new(0x18);
        FUN_10076b480(pvVar3);
        DAT_102271418 = 1;
        DAT_1023109c0 = pvVar3;
      }
      FUN_10076b4e0(DAT_1023109c0);
      return;
    case 3:
      lVar1 = *(long *)param_4[1];
      FUN_1005ec970(*(long *)(param_1 + 0x10) + 0x48);
      CAbstractWizardModel::wizardCtrl();
      lVar4 = CWizardController::parentWidget();
      if ((lVar4 != 0) && (lVar4 = QWidget::window(), lVar4 == lVar1))
      goto switchD_1005dee85_caseD_1;
      break;
    case 4:
      FUN_1005da6f0(param_1);
      return;
    case 5:
      FUN_1005db720(param_1);
      return;
    }
  }
  return;
}

