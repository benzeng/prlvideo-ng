
void FUN_100830970(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long local_48;
  undefined1 local_39;
  void *local_38;
  undefined1 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar4 == FUN_100830bb0) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100830c00) && (lVar6 == 0)) {
      *puVar2 = 1;
    }
    goto switchD_100830a1f_default;
  }
  if (param_2 != 0) goto switchD_100830a1f_default;
  switch(param_3) {
  case 0:
    local_39 = *(undefined1 *)param_4[1];
    iVar5 = 0;
    break;
  case 1:
    local_39 = *(undefined1 *)param_4[1];
    iVar5 = 1;
    break;
  case 2:
    FUN_10034c4b0(param_1);
    return;
  case 3:
    local_48 = *(long *)param_4[1];
    if (local_48 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_10034afe0(param_1,&local_48,*(undefined4 *)param_4[2]);
    if (local_48 != 0) {
      _PrlHandle_Free();
    }
    goto switchD_100830a1f_default;
  case 4:
    FUN_10034a470(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 5:
    FUN_10034af00(param_1,param_4[1],param_4[2]);
    return;
  case 6:
    FUN_10034c9d0(param_1);
    return;
  case 7:
    FUN_10034cf30(param_1,*(undefined4 *)param_4[1],param_4[2]);
    return;
  default:
    goto switchD_100830a1f_default;
  }
  local_30 = &local_39;
  local_38 = (void *)0x0;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220d320,iVar5,&local_38);
switchD_100830a1f_default:
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

