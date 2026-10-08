
void FUN_10035a010(long param_1,ulong param_2,char param_3)

{
  if ((param_2 & 2) != 0) {
    if (param_3 != '\0') {
      MessageUtils::setMessageHidden(0x3b14,1);
    }
    if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
       (*(long *)(param_1 + 0x28) != 0)) {
      QWidget::close();
      if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
         (*(long **)(param_1 + 0x28) != (long *)0x0)) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
      }
    }
  }
  if ((param_2 & 4) != 0) {
    if (param_3 != '\0') {
      MessageUtils::setMessageHidden(0x3c58,1);
    }
    FUN_10035a6b0(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x34) = 2;
  return;
}

