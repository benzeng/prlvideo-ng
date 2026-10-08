
void FUN_10085dcc0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

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
    if ((pcVar3 == FUN_10085dd90) && (lVar5 == 0)) {
      *puVar1 = 0;
      pcVar3 = (code *)*plVar2;
      lVar5 = plVar2[1];
    }
    if ((pcVar3 == FUN_10085ddb0) && (lVar5 == 0)) {
      *puVar1 = 1;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      iVar4 = 0;
      break;
    case 1:
      iVar4 = 1;
      break;
    case 2:
      FUN_100784c50();
      return;
    case 3:
      FUN_100784e40();
      return;
    case 4:
      FUN_100784f10(param_1,param_4[1]);
      return;
    default:
      goto switchD_10085dd43_default;
    }
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222ab80,iVar4,(void **)0x0)
    ;
    return;
  }
switchD_10085dd43_default:
  return;
}

