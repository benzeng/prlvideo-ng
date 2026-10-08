
void FUN_1008677c0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  
  if (param_2 == 10) {
    puVar1 = (undefined4 *)*param_4;
    plVar2 = (long *)param_4[1];
    pcVar3 = (code *)*plVar2;
    lVar5 = plVar2[1];
    if ((pcVar3 == FUN_100867860) && (lVar5 == 0)) {
      *puVar1 = 0;
      pcVar3 = (code *)*plVar2;
      lVar5 = plVar2[1];
    }
    if ((pcVar3 == FUN_100867880) && (lVar5 == 0)) {
      *puVar1 = 1;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 1) {
      iVar4 = 1;
    }
    else {
      if (param_3 != 0) {
        return;
      }
      iVar4 = 0;
    }
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222fe70,iVar4,(void **)0x0)
    ;
    return;
  }
  return;
}

