
void FUN_1005064c0(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==(param_2,(QString *)(param_1 + 0x20));
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  QString::operator=((QString *)(param_1 + 0x20),param_2);
  return;
}

