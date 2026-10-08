
void FUN_10037d2e0(long param_1)

{
  undefined8 uVar1;
  QWidget *pQVar2;
  int extraout_EDX;
  int extraout_var;
  bool bVar3;
  int iVar4;
  
  uVar1 = QVariant::toRect();
  if (extraout_EDX < (int)uVar1) {
    bVar3 = false;
  }
  else {
    iVar4 = (int)((ulong)uVar1 >> 0x20);
    if (extraout_var < iVar4) {
      bVar3 = false;
    }
    else if ((((*(int *)(param_1 + 0x4c) != (int)uVar1) ||
              (*(int *)(param_1 + 0x54) != extraout_EDX)) || (*(int *)(param_1 + 0x50) != iVar4)) ||
            (bVar3 = true, *(int *)(param_1 + 0x58) != extraout_var)) {
      *(undefined8 *)(param_1 + 0x4c) = uVar1;
      *(ulong *)(param_1 + 0x54) = CONCAT44(extraout_var,extraout_EDX);
      FUN_100834d00(*(undefined8 *)(param_1 + 0x10),param_1 + 0x4c);
      bVar3 = true;
    }
  }
  if ((bool)*(char *)(param_1 + 0x49) == bVar3) {
    return;
  }
  *(bool *)(param_1 + 0x49) = bVar3;
  FUN_100834ca0(*(undefined8 *)(param_1 + 0x10),bVar3);
  WidgetUtils::setTransparentForMouseEvents(*(QWidget **)(param_1 + 0x10),bVar3);
  pQVar2 = (QWidget *)QAbstractScrollArea::viewport();
  WidgetUtils::setTransparentForMouseEvents(pQVar2,bVar3);
  return;
}

