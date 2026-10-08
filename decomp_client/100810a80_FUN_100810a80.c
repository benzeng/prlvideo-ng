
void FUN_100810a80(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  
  if (param_2 == 0xc) {
    switch(param_3) {
    case 2:
      goto switchD_100810b0a_caseD_2;
    case 3:
      if (*(int *)param_4[1] != 0) {
        *(undefined4 *)*param_4 = 0xffffffff;
        return;
      }
      *(undefined4 *)*param_4 = 2;
      return;
    case 4:
      if (*(int *)param_4[1] != 0) {
        *(undefined4 *)*param_4 = 0xffffffff;
        return;
      }
      *(undefined4 *)*param_4 = 2;
      return;
    default:
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    case 8:
      if (*(int *)param_4[1] != 0) {
        *(undefined4 *)*param_4 = 0xffffffff;
        return;
      }
      *(undefined4 *)*param_4 = 2;
      return;
    }
  }
  if (param_2 == 10) {
    puVar1 = (undefined4 *)*param_4;
    plVar2 = (long *)param_4[1];
    pcVar4 = (code *)*plVar2;
    lVar6 = plVar2[1];
    if ((pcVar4 == FUN_100810dd0) && (lVar6 == 0)) {
      *puVar1 = 0;
      pcVar4 = (code *)*plVar2;
      lVar6 = plVar2[1];
    }
    if (pcVar4 != FUN_100810df0) {
      return;
    }
    if (lVar6 != 0) {
      return;
    }
    *puVar1 = 1;
    return;
  }
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    iVar5 = 0;
    goto LAB_100810bbe;
  case 1:
    iVar5 = 1;
LAB_100810bbe:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022013e0,iVar5,(void **)0x0)
    ;
    return;
  case 2:
    FUN_100218b00(param_1,*(undefined4 *)param_4[1]);
    return;
  case 3:
    FUN_1002190d0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 4:
    FUN_100219700(param_1,*(undefined4 *)param_4[1]);
    return;
  case 5:
    FUN_100219ff0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 6:
    FUN_100219e30(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 7:
    FUN_100219fd0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 8:
    FUN_100217ca0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 9:
    FUN_10021a2f0();
    return;
  case 10:
    FUN_1002186b0();
    return;
  case 0xb:
    FUN_10021a620();
    return;
  case 0xc:
    FUN_10021a090();
    return;
  case 0xd:
    FUN_10021a2a0();
    return;
  case 0xe:
    FUN_10021a200();
    return;
  case 0xf:
    uVar3 = FUN_1002183c0();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 0x10:
    uVar3 = FUN_100218800();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 0x11:
    uVar3 = FUN_100218870();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 0x12:
    uVar3 = FUN_100218f80();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 0x13:
    uVar3 = FUN_100219150();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 0x14:
    uVar3 = FUN_1002191c0();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 0x15:
    uVar3 = FUN_100219620();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 0x16:
    uVar3 = FUN_100219840();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
  }
  return;
switchD_100810b0a_caseD_2:
  if (*(int *)param_4[1] != 0) {
    *(undefined4 *)*param_4 = 0xffffffff;
    return;
  }
  *(undefined4 *)*param_4 = 2;
  return;
}

