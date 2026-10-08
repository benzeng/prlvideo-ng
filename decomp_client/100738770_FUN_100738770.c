
void FUN_100738770(undefined8 param_1,int param_2,int param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (param_3 == 2) {
      uVar1 = **(uint **)(param_4 + 8);
      QObject::sender();
      lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
      if (((uVar1 & 1) != 0) && (lVar3 != 0)) {
        cVar2 = FUN_10018c1f0(lVar3,1);
        if (cVar2 == '\0') {
          FUN_1007371c0(param_1,lVar3);
          return;
        }
      }
    }
    else {
      if (param_3 == 1) {
        FUN_100737a40(param_1,*(undefined8 *)(param_4 + 8));
        return;
      }
      if (param_3 == 0) {
        FUN_100737920(param_1,*(undefined8 *)(param_4 + 8));
        return;
      }
    }
  }
  return;
}

