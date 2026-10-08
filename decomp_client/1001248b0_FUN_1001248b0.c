
bool FUN_1001248b0(void)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  
  lVar1 = QApplication::activeWindow();
  bVar2 = true;
  if (lVar1 != 0) {
    plVar3 = (long *)QApplication::activeWindow();
    lVar1 = (**(code **)(*plVar3 + 8))(plVar3,"CControlCenterWindow");
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}

