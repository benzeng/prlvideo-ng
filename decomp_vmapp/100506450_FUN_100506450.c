
void FUN_100506450(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==(param_2,(QString *)(param_1 + 0x18));
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  QString::operator=((QString *)(param_1 + 0x18),param_2);
  return;
}

