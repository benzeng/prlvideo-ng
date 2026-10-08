
void FUN_10083c260(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

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
    if ((pcVar3 == FUN_10083c330) && (lVar5 == 0)) {
      *puVar1 = 0;
      pcVar3 = (code *)*plVar2;
      lVar5 = plVar2[1];
    }
    if ((pcVar3 == FUN_10083c350) && (lVar5 == 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00010083c308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x1c0))();
      return;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x00010083c312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x1d0))();
      return;
    default:
      goto switchD_10083c2e3_default;
    }
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221a0a0,iVar4,(void **)0x0)
    ;
    return;
  }
switchD_10083c2e3_default:
  return;
}

