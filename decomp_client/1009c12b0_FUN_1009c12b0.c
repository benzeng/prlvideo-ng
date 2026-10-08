
void FUN_1009c12b0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

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
    if ((pcVar3 == FUN_1009c13b0) && (lVar5 == 0)) {
      *puVar1 = 0;
      pcVar3 = (code *)*plVar2;
      lVar5 = plVar2[1];
    }
    if ((pcVar3 == FUN_1009c13d0) && (lVar5 == 0)) {
      *puVar1 = 1;
      pcVar3 = (code *)*plVar2;
      lVar5 = plVar2[1];
    }
    if ((pcVar3 == FUN_1009c13f0) && (lVar5 == 0)) {
      *puVar1 = 2;
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
      iVar4 = 2;
      break;
    case 3:
      FUN_1009b9c10(param_1,*(undefined8 *)param_4[1]);
      return;
    default:
      goto switchD_1009c1363_default;
    }
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102235e50,iVar4,(void **)0x0)
    ;
    return;
  }
switchD_1009c1363_default:
  return;
}

