
void FUN_100806600(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  undefined8 local_58;
  undefined4 local_50 [2];
  void *local_48;
  undefined8 *local_40;
  undefined8 *puStack_38;
  undefined8 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    if ((param_3 == 0x24) && (*(int *)param_4[1] - 1U < 2)) {
      if (DAT_10227150c == 0) {
        DAT_10227150c = FUN_1001e4190("CLicenseWrap::LicenseInfo",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10227150c;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto switchD_100806cd8_default;
  }
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar6 = (code *)*plVar3;
    lVar7 = plVar3[1];
    if ((pcVar6 == FUN_100807470) && (lVar7 == 0)) {
      *puVar2 = 0;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_1008074c0) && (lVar7 == 0)) {
      *puVar2 = 1;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807510) && (lVar7 == 0)) {
      *puVar2 = 2;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807560) && (lVar7 == 0)) {
      *puVar2 = 3;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_1008075c0) && (lVar7 == 0)) {
      *puVar2 = 4;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807610) && (lVar7 == 0)) {
      *puVar2 = 5;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807660) && (lVar7 == 0)) {
      *puVar2 = 6;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_1008076b0) && (lVar7 == 0)) {
      *puVar2 = 7;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807700) && (lVar7 == 0)) {
      *puVar2 = 8;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807760) && (lVar7 == 0)) {
      *puVar2 = 9;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_1008077c0) && (lVar7 == 0)) {
      *puVar2 = 10;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807810) && (lVar7 == 0)) {
      *puVar2 = 0xb;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807860) && (lVar7 == 0)) {
      *puVar2 = 0xc;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_1008078c0) && (lVar7 == 0)) {
      *puVar2 = 0xd;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807920) && (lVar7 == 0)) {
      *puVar2 = 0xe;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807980) && (lVar7 == 0)) {
      *puVar2 = 0xf;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_1008079e0) && (lVar7 == 0)) {
      *puVar2 = 0x10;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807a40) && (lVar7 == 0)) {
      *puVar2 = 0x12;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807aa0) && (lVar7 == 0)) {
      *puVar2 = 0x14;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807b00) && (lVar7 == 0)) {
      *puVar2 = 0x15;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807b50) && (lVar7 == 0)) {
      *puVar2 = 0x16;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807ba0) && (lVar7 == 0)) {
      *puVar2 = 0x17;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807bf0) && (lVar7 == 0)) {
      *puVar2 = 0x18;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807c50) && (lVar7 == 0)) {
      *puVar2 = 0x19;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807c70) && (lVar7 == 0)) {
      *puVar2 = 0x1a;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807c90) && (lVar7 == 0)) {
      *puVar2 = 0x1b;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807cb0) && (lVar7 == 0)) {
      *puVar2 = 0x1c;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807cd0) && (lVar7 == 0)) {
      *puVar2 = 0x1d;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807cf0) && (lVar7 == 0)) {
      *puVar2 = 0x1e;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807d10) && (lVar7 == 0)) {
      *puVar2 = 0x1f;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807d60) && (lVar7 == 0)) {
      *puVar2 = 0x20;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807db0) && (lVar7 == 0)) {
      *puVar2 = 0x21;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807e00) && (lVar7 == 0)) {
      *puVar2 = 0x22;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807e60) && (lVar7 == 0)) {
      *puVar2 = 0x23;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807e80) && (lVar7 == 0)) {
      *puVar2 = 0x24;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807ee0) && (lVar7 == 0)) {
      *puVar2 = 0x25;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807f30) && (lVar7 == 0)) {
      *puVar2 = 0x26;
      pcVar6 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar6 == FUN_100807f50) && (lVar7 == 0)) {
      *puVar2 = 0x27;
    }
    goto switchD_100806cd8_default;
  }
  if (param_2 != 0) goto switchD_100806cd8_default;
  uVar4 = local_58._4_4_;
  switch(param_3) {
  case 0:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0,&local_48);
    break;
  case 1:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,1,&local_48);
    break;
  case 2:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,2,&local_48);
    break;
  case 3:
    local_40 = (undefined8 *)param_4[1];
    local_58 = CONCAT44(uVar4,*(undefined4 *)param_4[2]);
    local_48 = (void *)0x0;
    puStack_38 = &local_58;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,3,&local_48);
    break;
  case 4:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,4,&local_48);
    break;
  case 5:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,5,&local_48);
    break;
  case 6:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,6,&local_48);
    break;
  case 7:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,7,&local_48);
    break;
  case 8:
    local_40 = (undefined8 *)param_4[1];
    local_50[0] = *(undefined4 *)param_4[3];
    local_58 = CONCAT44(uVar4,*(undefined4 *)param_4[2]);
    local_48 = (void *)0x0;
    puStack_38 = &local_58;
    local_30 = (undefined8 *)local_50;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,8,&local_48);
    break;
  case 9:
    local_40 = (undefined8 *)param_4[1];
    local_50[0] = *(undefined4 *)param_4[3];
    local_58 = CONCAT44(uVar4,*(undefined4 *)param_4[2]);
    local_48 = (void *)0x0;
    puStack_38 = &local_58;
    local_30 = (undefined8 *)local_50;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,9,&local_48);
    break;
  case 10:
    local_40 = (undefined8 *)param_4[1];
    puStack_38 = (undefined8 *)param_4[2];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,10,&local_48);
    break;
  case 0xb:
    local_40 = (undefined8 *)param_4[1];
    puStack_38 = (undefined8 *)param_4[2];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0xb,&local_48);
    break;
  case 0xc:
    local_40 = (undefined8 *)param_4[1];
    local_58 = CONCAT71(local_58._1_7_,*(undefined1 *)param_4[2]);
    local_48 = (void *)0x0;
    puStack_38 = &local_58;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0xc,&local_48);
    break;
  case 0xd:
    local_40 = (undefined8 *)param_4[1];
    local_58 = CONCAT44(uVar4,*(undefined4 *)param_4[2]);
    local_48 = (void *)0x0;
    puStack_38 = &local_58;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0xd,&local_48);
    break;
  case 0xe:
    local_40 = (undefined8 *)param_4[1];
    local_50[0] = CONCAT31(local_50[0]._1_3_,*(undefined1 *)param_4[2]);
    local_58 = CONCAT44(uVar4,*(undefined4 *)param_4[3]);
    local_48 = (void *)0x0;
    puStack_38 = (undefined8 *)local_50;
    local_30 = &local_58;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0xe,&local_48);
    break;
  case 0xf:
    local_40 = (undefined8 *)param_4[1];
    local_50[0] = CONCAT31(local_50[0]._1_3_,*(undefined1 *)param_4[2]);
    local_58 = CONCAT44(uVar4,*(undefined4 *)param_4[3]);
    local_48 = (void *)0x0;
    puStack_38 = (undefined8 *)local_50;
    local_30 = &local_58;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0xf,&local_48);
    break;
  case 0x10:
    local_58 = *(undefined8 *)param_4[1];
    goto LAB_10080705a;
  case 0x11:
    local_58 = 0;
LAB_10080705a:
    local_48 = (void *)0x0;
    local_40 = &local_58;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0x10,&local_48);
    break;
  case 0x12:
    local_58 = *(undefined8 *)param_4[1];
    goto LAB_100807099;
  case 0x13:
    local_58 = 0;
LAB_100807099:
    local_48 = (void *)0x0;
    local_40 = &local_58;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0x12,&local_48);
    break;
  case 0x14:
    local_50[0] = *(undefined4 *)param_4[2];
    local_58 = CONCAT44(uVar4,*(undefined4 *)param_4[1]);
    local_48 = (void *)0x0;
    local_40 = &local_58;
    puStack_38 = (undefined8 *)local_50;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0x14,&local_48);
    break;
  case 0x15:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0x15,&local_48);
    break;
  case 0x16:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0x16,&local_48);
    break;
  case 0x17:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0x17,&local_48);
    break;
  case 0x18:
    local_58 = CONCAT71(local_58._1_7_,*(undefined1 *)param_4[1]);
    local_48 = (void *)0x0;
    local_40 = &local_58;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0x18,&local_48);
    break;
  case 0x19:
    iVar5 = 0x19;
    goto LAB_1008073b0;
  case 0x1a:
    iVar5 = 0x1a;
    goto LAB_1008073b0;
  case 0x1b:
    iVar5 = 0x1b;
    goto LAB_1008073b0;
  case 0x1c:
    iVar5 = 0x1c;
    goto LAB_1008073b0;
  case 0x1d:
    iVar5 = 0x1d;
    goto LAB_1008073b0;
  case 0x1e:
    iVar5 = 0x1e;
    goto LAB_1008073b0;
  case 0x1f:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0x1f,&local_48);
    break;
  case 0x20:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0x20,&local_48);
    break;
  case 0x21:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0x21,&local_48);
    break;
  case 0x22:
    local_40 = (undefined8 *)param_4[1];
    local_58 = CONCAT44(uVar4,*(undefined4 *)param_4[2]);
    local_48 = (void *)0x0;
    puStack_38 = &local_58;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0x22,&local_48);
    break;
  case 0x23:
    iVar5 = 0x23;
    goto LAB_1008073b0;
  case 0x24:
    local_40 = (undefined8 *)param_4[1];
    puStack_38 = (undefined8 *)param_4[2];
    local_30 = (undefined8 *)param_4[3];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0x24,&local_48);
    break;
  case 0x25:
    local_40 = (undefined8 *)param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,0x25,&local_48);
    break;
  case 0x26:
    iVar5 = 0x26;
    goto LAB_1008073b0;
  case 0x27:
    iVar5 = 0x27;
LAB_1008073b0:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,iVar5,(void **)0x0)
    ;
    return;
  }
switchD_100806cd8_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

