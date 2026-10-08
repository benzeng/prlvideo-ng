
void FUN_10044e890(undefined8 param_1,int param_2,int param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    if (param_3 == 2) {
      uVar1 = **(undefined1 **)(param_4 + 8);
      QObject::sender();
      lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1398);
      if (lVar2 != 0) {
        FUN_10044aaa0(param_1,lVar2,uVar1);
        return;
      }
    }
    else {
      if (param_3 == 1) {
        FUN_10044be00(param_1);
        return;
      }
      if (param_3 == 0) {
        FUN_100449fd0(param_1);
        return;
      }
    }
  }
  return;
}

