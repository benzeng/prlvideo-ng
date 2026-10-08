
void FUN_1009b9c10(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0x4000);
  if (lVar1 == param_2) {
    FUN_1009c13b0(param_1);
    return;
  }
  lVar1 = QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0x10000);
  if (lVar1 != param_2) {
    lVar1 = QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0x400000);
    if (lVar1 != param_2) {
      return;
    }
    FUN_1009c13f0(param_1);
    return;
  }
  FUN_1009c13d0(param_1);
  return;
}

