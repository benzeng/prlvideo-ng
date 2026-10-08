
bool FUN_1006aab10(void)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  
  lVar1 = QApplication::activeWindow();
  if (lVar1 == 0) {
    bVar3 = false;
  }
  else {
    plVar2 = (long *)QApplication::activeWindow();
    lVar1 = (**(code **)(*plVar2 + 8))(plVar2,"CControlCenterWindow");
    bVar3 = lVar1 != 0;
  }
  return bVar3;
}

