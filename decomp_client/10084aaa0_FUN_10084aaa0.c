
int FUN_10084aaa0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CAbstractWizardModel::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (0x33 < iVar1) goto LAB_10084aaec;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (0x33 < iVar1) goto LAB_10084aaec;
    uVar2 = 0;
  }
  FUN_100849b60(param_1,uVar2,iVar1,param_4);
LAB_10084aaec:
  return iVar1 + -0x34;
}

