
void FUN_10075c0f0(long param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  
  QWidget::setAttribute(*(undefined8 *)(param_1 + 0x10),0x37,1);
  QWidget::setAttribute(*(undefined8 *)(param_1 + 0x10),0x78,1);
  uVar1 = CTitleBarControllerQt::createTitleBarController(*(QWidget **)(param_1 + 0x10));
  if (DAT_102310820 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_10002bc90(pvVar2);
    DAT_10226c0b0 = 1;
    DAT_102310820 = pvVar2;
  }
  FUN_10002bf30(DAT_102310820,uVar1,5);
  FUN_10075c1a0(param_1);
  FUN_10075c2d0(param_1);
  return;
}

