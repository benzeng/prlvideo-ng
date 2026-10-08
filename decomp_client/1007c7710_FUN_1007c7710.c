
void FUN_1007c7710(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==((QString *)(param_1 + 0x20),param_2);
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(param_1 + 0x20),param_2);
  FUN_100864190(*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}

