
undefined8 FUN_100326190(long param_1)

{
  undefined8 uVar1;
  
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    uVar1 = QWidget::window();
    return uVar1;
  }
  return 0;
}

