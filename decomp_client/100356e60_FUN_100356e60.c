
undefined1 FUN_100356e60(long param_1)

{
  QWidget *pQVar1;
  char cVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    pQVar1 = (QWidget *)FUN_100323e30(param_1,0);
    uVar3 = 0;
    if (pQVar1 != (QWidget *)0x0) {
      cVar2 = MacUtils::isWindowInNativeFullScreen(pQVar1);
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = MacUtils::isWindowPrimaryInFullScreen(pQVar1);
      }
    }
  }
  return uVar3;
}

