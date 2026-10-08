
void FUN_10082ab90(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  undefined4 local_50;
  undefined1 local_49;
  void *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar5 == FUN_10082afe0) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10082b000) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10082b020) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10082b080) && (lVar6 == 0)) {
      *puVar2 = 3;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10082b0e0) && (lVar6 == 0)) {
      *puVar2 = 4;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10082b140) && (lVar6 == 0)) {
      *puVar2 = 5;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10082b160) && (lVar6 == 0)) {
      *puVar2 = 6;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10082b1c0) && (lVar6 == 0)) {
      *puVar2 = 7;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10082b1e0) && (lVar6 == 0)) {
      *puVar2 = 8;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10082b230) && (lVar6 == 0)) {
      *puVar2 = 9;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10082b280) && (lVar6 == 0)) {
      *puVar2 = 10;
    }
    goto switchD_10082adb5_default;
  }
  if (param_2 != 0) goto switchD_10082adb5_default;
  switch(param_3) {
  case 0:
    iVar4 = 0;
    goto LAB_10082af7d;
  case 1:
    iVar4 = 1;
    goto LAB_10082af7d;
  case 2:
    local_50 = *(undefined4 *)param_4[1];
    local_48 = (void *)0x0;
    local_40 = &local_50;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220ba70,2,&local_48);
    break;
  case 3:
    local_49 = *(undefined1 *)param_4[1];
    local_50 = *(undefined4 *)param_4[2];
    local_48 = (void *)0x0;
    local_40 = (undefined4 *)&local_49;
    local_38 = &local_50;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220ba70,3,&local_48);
    break;
  case 4:
    local_50 = CONCAT31(local_50._1_3_,*(undefined1 *)param_4[1]);
    local_48 = (void *)0x0;
    local_40 = &local_50;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220ba70,4,&local_48);
    break;
  case 5:
    iVar4 = 5;
    goto LAB_10082af7d;
  case 6:
    local_40 = (undefined4 *)param_4[1];
    local_49 = *(undefined1 *)param_4[2];
    local_50 = *(undefined4 *)param_4[3];
    local_48 = (void *)0x0;
    local_38 = (undefined4 *)&local_49;
    local_30 = &local_50;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220ba70,6,&local_48);
    break;
  case 7:
    iVar4 = 7;
    goto LAB_10082af7d;
  case 8:
    local_40 = (undefined4 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220ba70,8,&local_48);
    break;
  case 9:
    local_40 = (undefined4 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220ba70,9,&local_48);
    break;
  case 10:
    iVar4 = 10;
LAB_10082af7d:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220ba70,iVar4,(void **)0x0);
    return;
  case 0xb:
    FUN_100328aa0(param_1,*(undefined1 *)param_4[1]);
    return;
  }
switchD_10082adb5_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

