
void FUN_1006f2c00(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 0xc) {
    if ((((param_3 == 9) || (param_3 == 10)) || (param_3 == 0xb)) && (*(int *)param_4[1] == 1)) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto LAB_1006f2d0d;
  }
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar6 = (long *)param_4[1];
    UNRECOVERED_JUMPTABLE = (code *)*plVar6;
    lVar4 = plVar6[1];
    if ((UNRECOVERED_JUMPTABLE == FUN_1006ef180) && (lVar4 == 0)) {
      *puVar2 = 0;
      UNRECOVERED_JUMPTABLE = (code *)*plVar6;
      lVar4 = plVar6[1];
    }
    if ((UNRECOVERED_JUMPTABLE == FUN_1006ef240) && (lVar4 == 0)) {
      *puVar2 = 1;
    }
    goto LAB_1006f2d0d;
  }
  if (param_2 != 0) goto LAB_1006f2d0d;
  switch(param_3) {
  case 0:
    local_3c = *(undefined4 *)param_4[1];
LAB_1006f2f06:
    iVar3 = 0;
    goto LAB_1006f2f23;
  case 1:
    local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)param_4[1]);
LAB_1006f2d82:
    iVar3 = 1;
LAB_1006f2f23:
    local_30 = &local_3c;
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f5920,iVar3,&local_38);
    break;
  case 2:
    FUN_1006efca0(param_1);
    return;
  case 3:
    FUN_1006f12f0(param_1,param_4[1]);
    return;
  case 4:
    if (param_1[0x154] != (QObject)0x1) {
      param_1[0x154] = (QObject)0x1;
      local_3c = CONCAT31(local_3c._1_3_,1);
      goto LAB_1006f2d82;
    }
    break;
  case 5:
    FUN_1006f16f0(param_1,*(undefined1 *)param_4[1]);
    return;
  case 6:
    FUN_1006f1960(param_1,*(undefined4 *)param_4[1],param_4[2],param_4[3],param_4[4],param_4[5]);
    return;
  case 7:
    plVar6 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x1b0);
    uVar5 = 3;
    goto LAB_1006f2e9f;
  case 8:
    FUN_1006f1f70(param_1);
    return;
  case 9:
    if (*(int *)param_4[2] == 1) {
      plVar6 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x1b0);
      uVar5 = 2;
      goto LAB_1006f2e9f;
    }
    break;
  case 10:
    if (*(int *)param_4[2] == 2) {
LAB_1006f2e82:
      plVar6 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x1b0);
      uVar5 = 1;
LAB_1006f2e9f:
                    /* WARNING: Could not recover jumptable at 0x0001006f2ea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,uVar5);
      return;
    }
    break;
  case 0xb:
    if (*(int *)param_4[2] == 1) goto LAB_1006f2e82;
    break;
  case 0xc:
    if ((*(int *)(param_1 + 0x150) == 1) &&
       ((DAT_10230ffd0 < 2 ||
        (FUN_100df99c0("","prl_client_app",2,"Online store load timeout. Show store content."),
        *(int *)(param_1 + 0x150) != 2)))) {
      *(undefined4 *)(param_1 + 0x150) = 2;
      local_3c = 2;
      goto LAB_1006f2f06;
    }
    break;
  case 0xd:
    FUN_100df99c0("","prl_client_app",0,
                  "Purchase completion page load timeout! Upgrade purchase result might be incomplete!"
                 );
    if (lVar1 == local_28) {
      FUN_1006efe40(param_1);
      return;
    }
    goto LAB_1006f2f66;
  }
LAB_1006f2d0d:
  if (lVar1 == local_28) {
    return;
  }
LAB_1006f2f66:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

