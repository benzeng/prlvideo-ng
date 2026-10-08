
void FUN_1007365a0(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==((QString *)(*(long *)(param_1 + 0x30) + 0x18),param_2);
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(*(long *)(param_1 + 0x30) + 0x18),param_2);
  FUN_100857520(param_1,*(long *)(param_1 + 0x30) + 0x18);
  FUN_100735fe0(*(undefined8 *)(param_1 + 0x30));
  return;
}

