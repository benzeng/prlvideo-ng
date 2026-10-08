
void FUN_100866600(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

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
    if ((pcVar3 == FUN_1008666b0) && (lVar5 == 0)) {
      *puVar1 = 0;
      pcVar3 = (code *)*plVar2;
      lVar5 = plVar2[1];
    }
    if ((pcVar3 == FUN_1008666d0) && (lVar5 == 0)) {
      *puVar1 = 1;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_10007a7c0();
      return;
    }
    if (param_3 == 1) {
      iVar4 = 1;
    }
    else {
      if (param_3 != 0) {
        return;
      }
      iVar4 = 0;
    }
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222f040,iVar4,(void **)0x0)
    ;
    return;
  }
  return;
}

