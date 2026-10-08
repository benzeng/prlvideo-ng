
void FUN_100368660(long param_1)

{
  int iVar1;
  int in_stack_00000018;
  
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    iVar1 = FUN_100323e20();
    if (in_stack_00000018 == iVar1) {
      FUN_100367d40(param_1);
      QWidget::update();
      return;
    }
  }
  return;
}

