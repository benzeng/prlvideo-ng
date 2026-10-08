
void FUN_1004e61b0(long param_1)

{
  long lVar1;
  
  CMacToolbarSearchField::stopSearching();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_1004e6080();
  if (((*(long *)(param_1 + 0x88) != 0) && (*(int *)(*(long *)(param_1 + 0x88) + 4) != 0)) &&
     (*(long **)(param_1 + 0x90) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x20))();
  }
  lVar1 = QApplication::activeWindow();
  if (lVar1 != *(long *)(param_1 + 0x18)) {
    return;
  }
  QApplication::setActiveWindow((QWidget *)0x0);
  QApplication::setActiveWindow(*(QWidget **)(param_1 + 0x18));
  return;
}

