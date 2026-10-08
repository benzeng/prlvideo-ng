
void FUN_100382800(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x30) + 0x30) != 0)) {
    QWidget::releaseKeyboard();
    return;
  }
  return;
}

