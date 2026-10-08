
int FUN_100388a80(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = QGraphicsWidget::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (3 < iVar1) goto LAB_100388acc;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (3 < iVar1) goto LAB_100388acc;
    uVar2 = 0;
  }
  FUN_1003887d0(param_1,uVar2,iVar1,param_4);
LAB_100388acc:
  return iVar1 + -4;
}

