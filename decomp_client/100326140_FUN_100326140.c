
bool FUN_100326140(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = QApplication::activeWindow();
  if (lVar1 == 0) {
    bVar3 = false;
  }
  else {
    lVar2 = 0;
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (lVar2 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
       (lVar2 = 0, *(long *)(param_1 + 0x28) != 0)) {
      lVar2 = QWidget::window();
    }
    bVar3 = lVar1 == lVar2;
  }
  return bVar3;
}

