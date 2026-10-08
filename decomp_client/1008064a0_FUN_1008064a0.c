
int FUN_1008064a0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QWizardPage::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (iVar1 < 5) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return iVar1 + -5;
    }
  }
  else {
    if (param_2 != 0) goto LAB_1008064fe;
    if (iVar1 < 5) {
      FUN_1008062c0(param_1,0,iVar1,param_4);
      return iVar1 + -5;
    }
  }
  iVar1 = iVar1 + -5;
LAB_1008064fe:
  if (param_2 == 0xc) {
    if (iVar1 < 1) {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (iVar1 == 0) {
      FUN_1001a5d60(param_1,param_4[1]);
    }
  }
  return iVar1 + -1;
}

