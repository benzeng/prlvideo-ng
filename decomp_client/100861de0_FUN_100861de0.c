
void FUN_100861de0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

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
  undefined4 *puStack_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar4 == FUN_100861ff0) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100862050) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100862070) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100862090) && (lVar6 == 0)) {
      *puVar2 = 3;
    }
    goto switchD_100861edf_default;
  }
  if (param_2 != 0) goto switchD_100861edf_default;
  switch(param_3) {
  case 0:
    local_3c = *(undefined4 *)param_4[1];
    local_40 = *(undefined4 *)param_4[2];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    puStack_28 = &local_40;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222cad0,0,&local_38);
    break;
  case 1:
    iVar5 = 1;
    goto LAB_100861f4d;
  case 2:
    iVar5 = 2;
LAB_100861f4d:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222cad0,iVar5,(void **)0x0)
    ;
    return;
  case 3:
    local_30 = (undefined4 *)param_4[1];
    puStack_28 = (undefined4 *)param_4[2];
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222cad0,3,&local_38);
    break;
  case 4:
    FUN_1007a72b0();
    return;
  case 5:
    FUN_1007a74b0();
    return;
  case 6:
    FUN_1007a7490();
    return;
  }
switchD_100861edf_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

