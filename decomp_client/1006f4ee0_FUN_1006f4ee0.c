
void FUN_1006f4ee0(long param_1)

{
  char cVar1;
  
  cVar1 = FUN_1006f3f70(*(undefined8 *)(param_1 + 0x68));
  if (cVar1 != '\0') {
    return;
  }
  QDialog::reject();
  return;
}

