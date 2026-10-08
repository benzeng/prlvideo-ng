
void FUN_100812b70(QObject *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  long local_58;
  undefined1 local_49;
  void *local_48;
  undefined1 *local_40;
  long local_38;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 0xc) {
    if ((param_3 == 3) && (*(int *)param_4[1] == 1)) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto switchD_100812c61_default;
  }
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar6 = (code *)*plVar3;
    lVar8 = plVar3[1];
    if ((pcVar6 == FUN_100812f60) && (lVar8 == 0)) {
      *puVar2 = 0;
      pcVar6 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar6 == FUN_100812fc0) && (lVar8 == 0)) {
      *puVar2 = 1;
    }
    goto switchD_100812c61_default;
  }
  if (param_2 != 0) goto switchD_100812c61_default;
  switch(param_3) {
  case 0:
    local_38 = param_4[2];
    local_49 = *(undefined1 *)param_4[1];
    iVar7 = 0;
    goto LAB_100812cda;
  case 1:
    local_49 = *(undefined1 *)param_4[1];
    iVar7 = 1;
LAB_100812cda:
    local_40 = &local_49;
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102202120,iVar7,&local_48);
    break;
  case 2:
    FUN_10022af60(param_1,param_4[1]);
    return;
  case 3:
    FUN_10022ba60(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
    return;
  case 4:
    FUN_10022a5f0(param_1,param_4[1]);
    return;
  case 5:
    FUN_10022a900(param_1);
    return;
  case 6:
    FUN_10022a890(param_1);
    return;
  case 7:
    FUN_10022b230(param_1,*(undefined4 *)param_4[1]);
    return;
  case 8:
    uVar5 = FUN_100229bb0(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar5;
    }
    break;
  case 9:
    uVar5 = FUN_10022aed0(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar5;
    }
    break;
  case 10:
    uVar5 = FUN_10022a040(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar5;
    }
    break;
  case 0xb:
    uVar5 = FUN_10022a1a0(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar5;
    }
    break;
  case 0xc:
    uVar5 = FUN_10022b590(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar5;
    }
    break;
  case 0xd:
    uVar5 = FUN_100229ad0(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar5;
    }
    break;
  case 0xe:
    uVar5 = FUN_10022b850(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar5;
    }
    break;
  case 0xf:
    local_58 = *(long *)param_4[1];
    if (local_58 != 0) {
      _PrlHandle_AddRef();
    }
    uVar4 = FUN_10022aa20(param_1,&local_58);
    if (local_58 != 0) {
      _PrlHandle_Free();
    }
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar4;
    }
    break;
  case 0x10:
    uVar5 = FUN_10022ba80(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar5;
    }
    break;
  case 0x11:
    uVar5 = FUN_10022bb30(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar5;
    }
  }
switchD_100812c61_default:
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

