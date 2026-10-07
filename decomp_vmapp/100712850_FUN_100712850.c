
void FUN_100712850(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

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
    if ((pcVar3 == FUN_1007129f0) && (lVar5 == 0)) {
      *puVar1 = 0;
      pcVar3 = (code *)*plVar2;
      lVar5 = plVar2[1];
    }
    if ((pcVar3 == FUN_100712a10) && (lVar5 == 0)) {
      *puVar1 = 1;
      pcVar3 = (code *)*plVar2;
      lVar5 = plVar2[1];
    }
    if ((pcVar3 == FUN_100712a30) && (lVar5 == 0)) {
      *puVar1 = 2;
      pcVar3 = (code *)*plVar2;
      lVar5 = plVar2[1];
    }
    if ((pcVar3 == FUN_100712a50) && (lVar5 == 0)) {
      *puVar1 = 3;
      pcVar3 = (code *)*plVar2;
      lVar5 = plVar2[1];
    }
    if ((pcVar3 == FUN_100712a70) && (lVar5 == 0)) {
      *puVar1 = 4;
      pcVar3 = (code *)*plVar2;
      lVar5 = plVar2[1];
    }
    if ((pcVar3 == FUN_100712a90) && (lVar5 == 0)) {
      *puVar1 = 5;
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
      iVar4 = 3;
      break;
    case 4:
      iVar4 = 4;
      break;
    case 5:
      iVar4 = 5;
      break;
    default:
      goto switchD_10071297d_default;
    }
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bce250,iVar4,(void **)0x0)
    ;
    return;
  }
switchD_10071297d_default:
  return;
}

