
/* WARNING: Removing unreachable block (ram,0x0001004311fc) */

void FUN_100431000(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 local_3d;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_100431250) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_1004312b0) && (lVar5 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100431310) && (lVar5 == 0)) {
      *puVar2 = 2;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100431370) && (lVar5 == 0)) {
      *puVar2 = 3;
    }
    goto switchD_1004310ff_default;
  }
  if (param_2 != 0) goto switchD_1004310ff_default;
  switch(param_3) {
  case 0:
    local_3d = *(undefined1 *)param_4[1];
    local_3c = *(undefined4 *)param_4[2];
    local_38 = (void *)0x0;
    local_30 = (undefined4 *)&local_3d;
    local_28 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_100bc09d0,0,&local_38);
    break;
  case 1:
    local_3d = *(undefined1 *)param_4[1];
    local_3c = *(undefined4 *)param_4[2];
    local_38 = (void *)0x0;
    local_30 = (undefined4 *)&local_3d;
    local_28 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_100bc09d0,1,&local_38);
    break;
  case 2:
    local_3c = *(undefined4 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_100bc09d0,2,&local_38);
    break;
  case 3:
    local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)param_4[1]);
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_100bc09d0,3,&local_38);
    break;
  case 4:
    uVar6 = *(undefined4 *)param_4[1];
    goto LAB_100431206;
  case 5:
    uVar6 = 0;
LAB_100431206:
    FUN_100430570(param_1,uVar6);
    return;
  case 6:
    FUN_1004307f0(param_1,*(undefined1 *)param_4[1]);
    return;
  }
switchD_1004310ff_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

