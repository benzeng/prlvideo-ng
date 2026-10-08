
void FUN_1007379d0(undefined8 param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (((param_2 & 1) != 0) && (lVar1 != 0)) {
    cVar2 = FUN_10018c1f0(lVar1,1);
    if (cVar2 == '\0') {
      FUN_1007371c0(param_1,lVar1);
      return;
    }
  }
  return;
}

