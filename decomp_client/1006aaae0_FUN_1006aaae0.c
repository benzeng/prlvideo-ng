
bool FUN_1006aaae0(void)

{
  bool bVar1;
  int iVar2;
  QWidget *pQVar3;
  
  pQVar3 = (QWidget *)QApplication::activeWindow();
  if (pQVar3 == (QWidget *)0x0) {
    bVar1 = false;
  }
  else {
    iVar2 = MacUtils::mergeableWindowsCountForWindow(pQVar3);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}

