
void FUN_1003ab150(long param_1,int param_2)

{
  char cVar1;
  long lVar2;
  
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)&PTR_PTR_1022084c0);
  if ((param_2 < 0) || (lVar2 == 0)) {
    return;
  }
  if ((*(char *)(lVar2 + 0x68) == '\0') && (cVar1 = FUN_1002bed30(lVar2), cVar1 == '\0')) {
    return;
  }
  FUN_1008369c0(*(undefined8 *)(param_1 + 0x10));
  return;
}

