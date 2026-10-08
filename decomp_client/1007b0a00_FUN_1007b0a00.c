
void FUN_1007b0a00(QObject *param_1,QEvent *param_2,long param_3)

{
  char cVar1;
  
  if ((*(QEvent **)(param_1 + 0xf8) == param_2) && (*(short *)(param_3 + 0x10) == 0xe)) {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x110) + 0x80))();
    if (cVar1 != '\0') {
      FUN_1007b0870(param_1);
    }
  }
  if (((*(QEvent **)(param_1 + 0x78) == param_2) && (*(short *)(param_3 + 0x10) == 0x45)) &&
     (*(long *)(param_1 + 0xf8) == *(long *)(param_3 + 0x18))) {
    FUN_1007acbe0(param_1);
  }
  QDialog::eventFilter(param_1,param_2);
  return;
}

