
void FUN_10042b280(long param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  double dVar5;
  
  cVar2 = QAbstractButton::isChecked();
  plVar3 = (long *)(param_1 + 0x138);
  if (cVar2 != '\0') {
    plVar3 = (long *)(param_1 + 0x140);
  }
  lVar1 = *plVar3;
  if (lVar1 != 0) {
    QDoubleSpinBox::value();
    CDiskImageInfo::setCurrentSize(lVar1);
    cVar2 = QAbstractButton::isChecked();
    plVar3 = (long *)(param_1 + 0x138);
    if (cVar2 != '\0') {
      plVar3 = (long *)(param_1 + 0x140);
    }
    lVar1 = *plVar3;
    dVar5 = DAT_102273e60;
    if (lVar1 != 0) {
      lVar4 = CDiskImageInfo::getMinSize();
      dVar5 = (double)lVar4 * DAT_100e14d10;
    }
    FUN_10042de40(dVar5,param_1,lVar1 != 0);
  }
  FUN_10042da70(param_1);
  return;
}

