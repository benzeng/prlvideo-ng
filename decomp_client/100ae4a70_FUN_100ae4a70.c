
void FUN_100ae4a70(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

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
    if ((pcVar3 == FUN_100ae4b30) && (lVar5 == 0)) {
      *puVar1 = 0;
      pcVar3 = (code *)*plVar2;
      lVar5 = plVar2[1];
    }
    if ((pcVar3 == FUN_100ae4b50) && (lVar5 == 0)) {
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
      FUN_100ac9250();
      return;
    case 3:
      FUN_100ac9400();
      return;
    default:
      goto LAB_100ae4ae3;
    }
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10223b170,iVar4,(void **)0x0);
    return;
  }
LAB_100ae4ae3:
  return;
}

