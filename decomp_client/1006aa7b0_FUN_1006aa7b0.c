
undefined8 FUN_1006aa7b0(void)

{
  char cVar1;
  QWidget *pQVar2;
  undefined8 uVar3;
  
  pQVar2 = (QWidget *)QApplication::activeWindow();
  if (pQVar2 == (QWidget *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = MacUtils::isSheetWindow(pQVar2);
    if ((cVar1 == '\0') ||
       (pQVar2 = *(QWidget **)(*(long *)(pQVar2 + 8) + 0x10), pQVar2 != (QWidget *)0x0)) {
      cVar1 = MacUtils::isStandardButtonEnabled(pQVar2,0x8000);
      if (cVar1 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = MacUtils::isStandardButtonVisible(pQVar2,0x8000);
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

