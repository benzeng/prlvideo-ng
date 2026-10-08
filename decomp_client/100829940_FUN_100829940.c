
void FUN_100829940(QObject *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 0xc) {
    if (param_3 == 3) {
      if (1 < *(uint *)param_4[1]) {
LAB_100829b2e:
        *(undefined4 *)*param_4 = 0xffffffff;
        goto switchD_100829ac4_default;
      }
      iVar6 = DAT_102273648;
      if (DAT_102273648 == 0) {
        iVar6 = FUN_100321b00("CVmDesktop::GuestAppStatus",0xffffffffffffffff,1);
        DAT_102273648 = iVar6;
      }
    }
    else {
      if ((param_3 != 0x11) || (*(int *)param_4[1] != 1)) goto LAB_100829b2e;
      iVar6 = DAT_10226db58;
      if (DAT_10226db58 == 0) {
        iVar6 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
        DAT_10226db58 = iVar6;
      }
    }
    *(int *)*param_4 = iVar6;
    goto switchD_100829ac4_default;
  }
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar7 = (code *)*plVar3;
    lVar8 = plVar3[1];
    if ((pcVar7 == FUN_100829f20) && (lVar8 == 0)) {
      *puVar2 = 0;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_100829f70) && (lVar8 == 0)) {
      *puVar2 = 1;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_100829fd0) && (lVar8 == 0)) {
      *puVar2 = 2;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_10082a030) && (lVar8 == 0)) {
      *puVar2 = 3;
      pcVar7 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if ((pcVar7 == FUN_10082a090) && (lVar8 == 0)) {
      *puVar2 = 4;
    }
    goto switchD_100829ac4_default;
  }
  if (param_2 != 0) goto switchD_100829ac4_default;
  switch(param_3) {
  case 0:
    local_4c = *(undefined4 *)param_4[1];
    local_40 = &local_4c;
    iVar6 = 0;
    goto LAB_100829c3f;
  case 1:
    local_40 = (undefined4 *)param_4[1];
    local_4c = *(undefined4 *)param_4[2];
    local_50 = *(undefined4 *)param_4[3];
    local_38 = &local_4c;
    local_30 = &local_50;
    iVar6 = 1;
    goto LAB_100829c3f;
  case 2:
    local_40 = (undefined4 *)param_4[1];
    local_4c = CONCAT31(local_4c._1_3_,*(undefined1 *)param_4[2]);
    local_38 = &local_4c;
    iVar6 = 2;
    goto LAB_100829c3f;
  case 3:
    local_4c = *(undefined4 *)param_4[1];
    local_50 = *(undefined4 *)param_4[2];
    local_40 = &local_4c;
    local_38 = &local_50;
    iVar6 = 3;
    goto LAB_100829c3f;
  case 4:
    local_4c = *(undefined4 *)param_4[1];
    local_50 = *(undefined4 *)param_4[2];
    local_40 = &local_4c;
    local_38 = &local_50;
    iVar6 = 4;
LAB_100829c3f:
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220b820,iVar6,&local_48);
    break;
  case 5:
    uVar5 = FUN_10031b640(param_1,*(undefined1 *)param_4[1]);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar5;
    }
    break;
  case 6:
    uVar5 = FUN_10031b640(param_1,0);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar5;
    }
    break;
  case 7:
    FUN_100321ac0(param_1);
    return;
  case 8:
    FUN_10031de60(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 9:
    FUN_10031e490(param_1,param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 10:
    FUN_10031ead0(param_1,param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 0xb:
    puVar4 = (undefined8 *)param_4[2];
    local_58 = *(undefined4 *)(puVar4 + 3);
    local_60 = puVar4[2];
    local_70 = *puVar4;
    local_68 = puVar4[1];
    FUN_10031fc50(param_1,param_4[1]);
    break;
  case 0xc:
    FUN_1003206a0(param_1,param_4[1],*(undefined8 *)param_4[2]);
    return;
  case 0xd:
    FUN_10031fff0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 0xe:
    local_78 = *(long *)param_4[1];
    if (local_78 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_100320890(param_1,&local_78,*(undefined4 *)param_4[2]);
    if (local_78 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 0xf:
    local_80 = *(long *)param_4[1];
    if (local_80 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_100321440(param_1,&local_80,*(undefined4 *)param_4[2]);
    if (local_80 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 0x10:
    FUN_10031d8a0(param_1,*(undefined1 *)param_4[1]);
    return;
  case 0x11:
    FUN_100321aa0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  }
switchD_100829ac4_default:
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

