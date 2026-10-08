
void FUN_1008519d0(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 local_90;
  undefined8 local_88;
  QArrayData *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar5 == FUN_100851ef0) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100851f40) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100851fa0) && (lVar6 == 0)) {
      *puVar2 = 2;
    }
    goto switchD_100851aaa_default;
  }
  if (param_2 != 0) goto switchD_100851aaa_default;
  switch(param_3) {
  case 0:
    local_3c = *(undefined4 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102225980,0,&local_38);
    break;
  case 1:
    local_3c = *(undefined4 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102225980,1,&local_38);
    break;
  case 2:
    local_3c = *(undefined4 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102225980,2,&local_38);
    break;
  case 3:
    uVar4 = FUN_1006ea700(param_1,param_4[1],param_4[2]);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 4:
    local_48 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar4 = FUN_1006ea700(param_1,param_4[1],&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_100851bad;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100851bad:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 5:
    local_50 = (QArrayData *)PTR_shared_null_1021e1288;
    local_58 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar4 = FUN_1006ea700(param_1,&local_50,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_58 != 0);
        if (*(int *)local_58 != 0) goto LAB_100851c10;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100851c10:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_50 != 0);
        if (*(int *)local_50 != 0) goto LAB_100851c40;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100851c40:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 6:
    uVar4 = FUN_1006ea710(param_1,param_4[1]);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 7:
    local_68 = 0;
    local_60 = 0xffffffffffffffff;
    uVar4 = FUN_1006ea710(param_1,&local_68);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 8:
    uVar4 = FUN_1006ea720(param_1,param_4[1],param_4[2]);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 9:
    local_78 = 0;
    local_70 = 0xffffffffffffffff;
    uVar4 = FUN_1006ea720(param_1,param_4[1],&local_78);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 10:
    local_80 = (QArrayData *)PTR_shared_null_1021e1288;
    local_90 = 0;
    local_88 = 0xffffffffffffffff;
    uVar4 = FUN_1006ea720(param_1,&local_80,&local_90);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_80 != 0);
        if (*(int *)local_80 != 0) goto LAB_100851d62;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100851d62:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 0xb:
    uVar4 = FUN_1006ea740(param_1,*(undefined1 *)param_4[1]);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 0xc:
    uVar4 = FUN_1006ea740(param_1,0);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 0xd:
    uVar4 = FUN_1006ea760();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
  }
switchD_100851aaa_default:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

