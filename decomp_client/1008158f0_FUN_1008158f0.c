
void FUN_1008158f0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar4 == FUN_100815b00) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100815b20) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100815b40) && (lVar6 == 0)) {
      *puVar2 = 2;
    }
    goto switchD_1008159c5_default;
  }
  if (param_2 != 0) goto switchD_1008159c5_default;
  switch(param_3) {
  case 0:
    iVar5 = 0;
    break;
  case 1:
    iVar5 = 1;
    break;
  case 2:
    local_3c = *(undefined4 *)param_4[1];
    local_40 = *(undefined4 *)param_4[2];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    local_28 = &local_40;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102203910,2,&local_38);
  default:
switchD_1008159c5_default:
    if (lVar1 == local_20) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  case 3:
    FUN_100243a40(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 4:
    FUN_100243ef0();
    return;
  case 5:
    FUN_100243f80();
    return;
  case 6:
    FUN_100243ff0();
    return;
  case 7:
    FUN_100244500();
    return;
  case 8:
    FUN_100244fc0();
    return;
  }
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102203910,iVar5,(void **)0x0);
  return;
}

