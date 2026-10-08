
void FUN_100ae3cd0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined1 local_39;
  void *local_38;
  undefined1 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar4 == FUN_100ae3eb0) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100ae3ed0) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100ae3ef0) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100ae3f10) && (lVar6 == 0)) {
      *puVar2 = 3;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100ae3f70) && (lVar6 == 0)) {
      *puVar2 = 4;
    }
    goto switchD_100ae3df5_default;
  }
  if (param_2 != 0) goto switchD_100ae3df5_default;
  switch(param_3) {
  case 0:
    iVar5 = 0;
    break;
  case 1:
    iVar5 = 1;
    break;
  case 2:
    iVar5 = 2;
    break;
  case 3:
    local_39 = *(undefined1 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_39;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223ac70,3,&local_38);
  default:
switchD_100ae3df5_default:
    if (lVar1 == local_20) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  case 4:
    iVar5 = 4;
  }
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223ac70,iVar5,(void **)0x0);
  return;
}

