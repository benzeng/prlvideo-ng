
void FUN_100836200(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  int iVar4;
  code *pcVar5;
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
    pcVar5 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar5 == FUN_100836790) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_1008367b0) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_1008367d0) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100836830) && (lVar6 == 0)) {
      *puVar2 = 3;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100836890) && (lVar6 == 0)) {
      *puVar2 = 4;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_1008368b0) && (lVar6 == 0)) {
      *puVar2 = 5;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100836910) && (lVar6 == 0)) {
      *puVar2 = 6;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100836970) && (lVar6 == 0)) {
      *puVar2 = 7;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_1008369c0) && (lVar6 == 0)) {
      *puVar2 = 8;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_1008369e0) && (lVar6 == 0)) {
      *puVar2 = 9;
    }
    goto switchD_1008363fb_default;
  }
  if (param_2 != 0) goto switchD_1008363fb_default;
  switch(param_3) {
  case 0:
    iVar4 = 0;
    goto LAB_10083657b;
  case 1:
    iVar4 = 1;
    goto LAB_10083657b;
  case 2:
    local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)param_4[1]);
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102210560,2,&local_38);
    break;
  case 3:
    local_30 = (undefined4 *)param_4[1];
    local_3c = *(undefined4 *)param_4[2];
    local_38 = (void *)0x0;
    local_28 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102210560,3,&local_38);
    break;
  case 4:
    iVar4 = 4;
    goto LAB_10083657b;
  case 5:
    local_3c = *(undefined4 *)param_4[1];
    local_40 = *(undefined4 *)param_4[2];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    local_28 = &local_40;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102210560,5,&local_38);
    break;
  case 6:
    local_3c = *(undefined4 *)param_4[1];
    local_40 = *(undefined4 *)param_4[2];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    local_28 = &local_40;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102210560,6,&local_38);
    break;
  case 7:
    local_30 = (undefined4 *)param_4[1];
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102210560,7,&local_38);
    break;
  case 8:
    iVar4 = 8;
LAB_10083657b:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102210560,iVar4,(void **)0x0)
    ;
    return;
  case 9:
    local_3c = *(undefined4 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102210560,9,&local_38);
    break;
  case 10:
    FUN_1003ad9e0();
    return;
  case 0xb:
    FUN_1003ad9f0();
    return;
  case 0xc:
    FUN_1003ada00();
    return;
  case 0xd:
    FUN_1003ada10();
    return;
  case 0xe:
    FUN_1003ada20();
    return;
  case 0xf:
    FUN_1003ada30();
    return;
  case 0x10:
    FUN_1003ada40();
    return;
  case 0x11:
    FUN_1003ada50();
    return;
  case 0x12:
    FUN_1003ada60();
    return;
  case 0x13:
    FUN_1003adad0();
    return;
  case 0x14:
    FUN_1003adae0();
    return;
  case 0x15:
    FUN_1003adaf0();
    return;
  case 0x16:
    FUN_1003adb00();
    return;
  case 0x17:
    FUN_1003adb80();
    return;
  case 0x18:
    FUN_1003adb90();
    return;
  case 0x19:
    FUN_1003adba0();
    return;
  }
switchD_1008363fb_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

