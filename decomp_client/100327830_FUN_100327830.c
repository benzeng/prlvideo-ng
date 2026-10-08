
undefined1 FUN_100327830(undefined8 param_1)

{
  long lVar1;
  QWidget *pQVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  lVar1 = FUN_100323e30(param_1,0);
  if (lVar1 != 0) {
    pQVar2 = (QWidget *)FUN_100323e30(param_1,0);
    uVar3 = MacUtils::isWindowInFullScreenTiling(pQVar2);
  }
  return uVar3;
}

