
undefined8 FUN_100586cf0(QObject *param_1,QEvent *param_2,long param_3)

{
  short sVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((*(QEvent **)(*(long *)(param_1 + 0x18) + 0x50) == param_2) ||
     (*(QEvent **)(*(long *)(param_1 + 0x18) + 0x98) == param_2)) {
    sVar1 = *(short *)(param_3 + 0x10);
    if (sVar1 == 8) {
      MacUtils::disableNonLatinKeyboardLayouts();
      sVar1 = *(short *)(param_3 + 0x10);
    }
    if (sVar1 == 9) {
      MacUtils::restoreNonLatinKeyboardLayouts();
    }
  }
  if ((*(QEvent **)(*(long *)(param_1 + 0x18) + 0x98) == param_2) &&
     (*(short *)(param_3 + 0x10) == 6)) {
    plVar2 = (long *)QComboBox::lineEdit();
    (**(code **)(*plVar2 + 0x28))(plVar2,param_3);
    uVar3 = 1;
  }
  else {
    uVar3 = QObject::eventFilter(param_1,param_2);
  }
  return uVar3;
}

