
void FUN_10007cc00(long param_1)

{
  int iVar1;
  undefined8 local_20;
  
  local_20 = FUN_10007c850();
  FUN_10007c720(param_1,&local_20);
  QWidget::resize(*(QSize **)(param_1 + 0x10));
  iVar1 = FUN_100080630(*(undefined8 *)(param_1 + 0x28));
  if (iVar1 == 0) {
    QWidget::close();
  }
  return;
}

