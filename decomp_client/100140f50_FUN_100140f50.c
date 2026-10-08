
int FUN_100140f50(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 0;
  iVar4 = 0;
  if ((((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
      (*(long *)(param_1 + 0x38) != 0)) &&
     (((iVar1 = iVar4, *(long *)(param_1 + 0x40) != 0 &&
       (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) && (*(long *)(param_1 + 0x48) != 0)))) {
    iVar1 = QSpinBox::value();
    iVar4 = *(int *)(param_1 + 0x70);
    iVar2 = QAbstractSlider::singleStep();
    iVar3 = iVar1 % iVar2;
    if (iVar3 != 0) {
      iVar5 = iVar1 - iVar3;
      if (iVar3 < iVar2 / 2) {
        iVar1 = iVar5;
        if (iVar5 < iVar2) {
          iVar1 = iVar2;
        }
      }
      else {
        iVar1 = iVar5 + iVar2;
        if (iVar4 < iVar5 + iVar2) {
          iVar1 = iVar4;
        }
      }
    }
  }
  return iVar1;
}

