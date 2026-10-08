
void FUN_1006f4ea0(QCloseEvent *param_1,long param_2)

{
  char cVar1;
  
  cVar1 = FUN_1006f3f70(*(undefined8 *)(param_1 + 0x68));
  if (cVar1 != '\0') {
    *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) & 0xfb;
    return;
  }
  QDialog::closeEvent(param_1);
  return;
}

