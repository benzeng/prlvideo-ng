
/* WARNING: Removing unreachable block (ram,0x00010084a1d9) */

void FUN_100849b60(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  int iVar4;
  code *pcVar5;
  undefined1 uVar6;
  long lVar7;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 != 0xc) {
    if (param_2 == 10) {
      puVar2 = (undefined4 *)*param_4;
      plVar3 = (long *)param_4[1];
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
      if ((pcVar5 == FUN_10084a8e0) && (lVar7 == 0)) {
        *puVar2 = 0;
        pcVar5 = (code *)*plVar3;
        lVar7 = plVar3[1];
      }
      if ((pcVar5 == FUN_10084a900) && (lVar7 == 0)) {
        *puVar2 = 1;
        pcVar5 = (code *)*plVar3;
        lVar7 = plVar3[1];
      }
      if ((pcVar5 == FUN_10084a960) && (lVar7 == 0)) {
        *puVar2 = 2;
        pcVar5 = (code *)*plVar3;
        lVar7 = plVar3[1];
      }
      if ((pcVar5 == FUN_10084a980) && (lVar7 == 0)) {
        *puVar2 = 3;
        pcVar5 = (code *)*plVar3;
        lVar7 = plVar3[1];
      }
      if ((pcVar5 == FUN_10084a9e0) && (lVar7 == 0)) {
        *puVar2 = 4;
      }
      goto switchD_100849cc8_default;
    }
    if (param_2 != 0) goto switchD_100849cc8_default;
    switch(param_3) {
    case 0:
      iVar4 = 0;
      goto LAB_10084a157;
    case 1:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022241f0,1,&local_38);
      break;
    case 2:
      iVar4 = 2;
LAB_10084a157:
      QMetaObject::activate
                (param_1,(QMetaObject *)&PTR_staticMetaObject_1022241f0,iVar4,(void **)0x0);
      return;
    case 3:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022241f0,3,&local_38);
      break;
    case 4:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022241f0,4,&local_38);
      break;
    case 5:
      uVar6 = *(undefined1 *)param_4[1];
      goto LAB_10084a1ed;
    case 6:
      uVar6 = 1;
LAB_10084a1ed:
      FUN_100676830(param_1,uVar6);
      return;
    case 7:
      FUN_100678a70();
      return;
    case 8:
      FUN_100681260(param_1,param_4[1]);
      return;
    case 9:
      FUN_1006768e0();
      return;
    case 10:
      FUN_10067fbe0();
      return;
    case 0xb:
      FUN_100676340(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0xc:
      FUN_100677fa0();
      return;
    case 0xd:
      FUN_100676950(param_1,param_4[1],param_4[2]);
      return;
    case 0xe:
      FUN_10067c4e0();
      return;
    case 0xf:
      FUN_10067e8c0(param_1,*(undefined4 *)param_4[1],*(undefined1 *)param_4[2]);
      return;
    case 0x10:
      FUN_10067d820(param_1,*(undefined4 *)param_4[1],*(undefined1 *)param_4[2],
                    *(undefined4 *)param_4[3]);
      return;
    case 0x11:
      FUN_10067f8f0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 0x12:
      FUN_10067f990(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0x13:
      FUN_10067bf50(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0x14:
      FUN_10067c600(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0x15:
      FUN_100678e80(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0x16:
      FUN_10067c8f0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0x17:
      FUN_100676b60(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0x18:
      FUN_100679d40(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0x19:
      FUN_10067b690(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0x1a:
      FUN_10067bba0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0x1b:
      FUN_10067bb10();
      return;
    case 0x1c:
      FUN_10067d800();
      return;
    case 0x1d:
      FUN_10067deb0();
      return;
    case 0x1e:
      FUN_10067b000(param_1,*(undefined4 *)param_4[1],param_4[2]);
      return;
    case 0x1f:
      FUN_10067a8e0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3],
                    param_4[4]);
      return;
    case 0x20:
      FUN_10067a560(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0x21:
      FUN_10067fbf0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0x22:
      FUN_10067ff30(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0x23:
      FUN_10067fef0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 0x24:
      FUN_100680620();
      return;
    case 0x25:
      FUN_100680640(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0x26:
      FUN_10067a010(param_1,*(undefined1 *)param_4[1]);
      return;
    case 0x27:
      FUN_100680780(param_1,*(undefined4 *)param_4[1],*(undefined1 *)param_4[2]);
      return;
    case 0x28:
      FUN_100679ce0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0x29:
      FUN_100680800(param_1,*(undefined4 *)param_4[1],param_4[2]);
      return;
    case 0x2a:
      FUN_100680be0(param_1,*(undefined4 *)param_4[1],param_4[2]);
      return;
    case 0x2b:
      FUN_100680ea0(param_1,*(undefined1 *)param_4[1]);
      return;
    case 0x2c:
      FUN_1006810f0(param_1,*(undefined4 *)param_4[1],*(undefined8 *)param_4[2]);
      return;
    case 0x2d:
      FUN_1006813a0(param_1,*(undefined4 *)param_4[1],*(undefined8 *)param_4[2]);
      return;
    case 0x2e:
      FUN_100681ae0(param_1,*(undefined4 *)param_4[1],*(undefined8 *)param_4[2]);
      return;
    case 0x2f:
      FUN_1006822a0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0x30:
      FUN_1006824b0(param_1,*(undefined4 *)param_4[1],*(undefined8 *)param_4[2]);
      return;
    case 0x31:
      FUN_1006827c0(param_1,*(undefined4 *)param_4[1],param_4[2]);
      return;
    case 0x32:
      FUN_100682a50();
      return;
    case 0x33:
      FUN_100682aa0();
      return;
    }
    goto switchD_100849cc8_default;
  }
  switch(param_3) {
  case 1:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  default:
    goto switchD_100849c8d_caseD_2;
  case 3:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 4:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0xd:
    if (*(uint *)param_4[1] < 2) {
      iVar4 = DAT_10227150c;
      if (DAT_10227150c == 0) {
        iVar4 = FUN_1001e4190("CLicenseWrap::LicenseInfo",0xffffffffffffffff,1);
        DAT_10227150c = iVar4;
      }
LAB_100849d92:
      *(int *)*param_4 = iVar4;
      break;
    }
    goto switchD_100849c8d_caseD_2;
  case 0xf:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x10:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x11:
  case 0x12:
  case 0x20:
  case 0x23:
  case 0x28:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
      break;
    }
    if (*(int *)param_4[1] == 1) {
      iVar4 = DAT_10226db58;
      if (DAT_10226db58 == 0) {
        iVar4 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
        DAT_10226db58 = iVar4;
      }
      goto LAB_100849d92;
    }
switchD_100849c8d_caseD_2:
    *(undefined4 *)*param_4 = 0xffffffff;
    break;
  case 0x13:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x14:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x15:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x16:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x17:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x18:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x19:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x1a:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x1e:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x1f:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x21:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x22:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x27:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x29:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x2a:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x2c:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x2d:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x2e:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x30:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    break;
  case 0x31:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
switchD_100849cc8_default:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

