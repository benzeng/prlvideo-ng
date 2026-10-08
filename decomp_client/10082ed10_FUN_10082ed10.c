
void FUN_10082ed10(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long local_60;
  long local_58;
  undefined1 local_4a;
  undefined1 local_49;
  void *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar4 == FUN_10082f060) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_10082f080) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_10082f0a0) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_10082f100) && (lVar6 == 0)) {
      *puVar2 = 3;
    }
    goto switchD_10082ee17_default;
  }
  if (param_2 != 0) goto switchD_10082ee17_default;
  switch(param_3) {
  case 0:
    iVar5 = 0;
    goto LAB_10082ee44;
  case 1:
    iVar5 = 1;
LAB_10082ee44:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220c890,iVar5,(void **)0x0)
    ;
    return;
  case 2:
    local_49 = *(undefined1 *)param_4[1];
    local_4a = *(undefined1 *)param_4[2];
    local_38 = &local_4a;
    iVar5 = 2;
    goto LAB_10082eebd;
  case 3:
    local_49 = *(undefined1 *)param_4[1];
    iVar5 = 3;
LAB_10082eebd:
    local_40 = &local_49;
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220c890,iVar5,&local_48);
    break;
  case 4:
    local_58 = *(long *)param_4[1];
    if (local_58 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_10033c9a0(param_1,&local_58);
    if (local_58 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 5:
    local_60 = *(long *)param_4[1];
    if (local_60 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_10033c630(param_1,&local_60,*(undefined4 *)param_4[2]);
    if (local_60 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 6:
    FUN_10033ce90(param_1,param_4[1],*(undefined8 *)param_4[2]);
    return;
  case 7:
    FUN_10033d050(param_1);
    return;
  case 8:
    FUN_10033d200(param_1,*(undefined4 *)param_4[1]);
    return;
  case 9:
    FUN_10033d220(param_1);
    return;
  case 10:
    FUN_10033d320(param_1);
    return;
  case 0xb:
    FUN_10033d470(param_1,param_4[1],*(undefined4 *)param_4[2]);
    return;
  }
switchD_10082ee17_default:
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

