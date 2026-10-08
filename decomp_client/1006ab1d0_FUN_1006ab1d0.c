
undefined8 FUN_1006ab1d0(void)

{
  QWidget *pQVar1;
  undefined8 uVar2;
  
  pQVar1 = (QWidget *)QApplication::activeWindow();
  if (pQVar1 == (QWidget *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = MacUtils::isTabbingAllowedForWindow(pQVar1);
  }
  return uVar2;
}

