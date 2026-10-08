
void FUN_1007a7b50(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)QGridLayout::itemAtPosition((int)*(undefined8 *)(param_1 + 0x30),param_2);
  if (plVar1 != (long *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x68))(plVar1);
    if (lVar2 != 0) {
      (**(code **)(*plVar1 + 0x68))(plVar1);
      lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222c830);
      if (lVar2 != 0) {
        FUN_1007a7a20(param_1,lVar2);
        return;
      }
    }
  }
  return;
}

