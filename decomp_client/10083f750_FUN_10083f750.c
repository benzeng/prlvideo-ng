
void FUN_10083f750(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  QArrayData *local_50;
  undefined4 local_48;
  QArrayData *local_40;
  void *local_38;
  QArrayData **local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    if (((param_3 == 0x1a) || (param_3 == 0x24)) && (*(int *)param_4[1] == 1)) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto switchD_10083f917_default;
  }
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar7 = plVar3[1];
    if ((pcVar5 == FUN_10083fee0) && (lVar7 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_10083ff30) && (lVar7 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_10083ff90) && (lVar7 == 0)) {
      *puVar2 = 2;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_10083fff0) && (lVar7 == 0)) {
      *puVar2 = 3;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_100840050) && (lVar7 == 0)) {
      *puVar2 = 4;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_100840070) && (lVar7 == 0)) {
      *puVar2 = 5;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_1008400c0) && (lVar7 == 0)) {
      *puVar2 = 6;
    }
    goto switchD_10083f917_default;
  }
  if (param_2 != 0) goto switchD_10083f917_default;
  switch(param_3) {
  case 0:
    local_40 = (QArrayData *)CONCAT44(local_40._4_4_,*(undefined4 *)param_4[1]);
    local_38 = (void *)0x0;
    local_30 = &local_40;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221e1e0,0,&local_38);
    break;
  case 1:
    local_40 = (QArrayData *)CONCAT44(local_40._4_4_,*(undefined4 *)param_4[1]);
    local_38 = (void *)0x0;
    local_30 = &local_40;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221e1e0,1,&local_38);
    break;
  case 2:
    local_40 = (QArrayData *)CONCAT44(local_40._4_4_,*(undefined4 *)param_4[1]);
    local_38 = (void *)0x0;
    local_30 = &local_40;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221e1e0,2,&local_38);
    break;
  case 3:
    local_40 = *(QArrayData **)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_40;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221e1e0,3,&local_38);
    break;
  case 4:
    iVar6 = 4;
    goto LAB_10083faac;
  case 5:
    puVar4 = (undefined8 *)param_4[1];
    local_50 = (QArrayData *)*puVar4;
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      UNLOCK();
    }
    local_48 = *(undefined4 *)(puVar4 + 1);
    local_38 = (void *)0x0;
    local_30 = &local_50;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221e1e0,5,&local_38);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_50 != 0);
        if (*(int *)local_50 != 0) break;
      }
      QArrayData::deallocate(local_50,2,8);
    }
    break;
  case 6:
    iVar6 = 6;
LAB_10083faac:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221e1e0,iVar6,(void **)0x0)
    ;
    return;
  case 7:
    FUN_1005b02a0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 8:
    FUN_1005b1bf0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 9:
    FUN_1005b1f30(param_1,*(undefined4 *)param_4[1]);
    return;
  case 10:
    FUN_1005b2060(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0xb:
    FUN_1005b2130(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0xc:
    FUN_1005b2dd0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0xd:
    FUN_1005b2e70();
    return;
  case 0xe:
    FUN_1005b2820(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0xf:
    FUN_1005b2d80();
    return;
  case 0x10:
    FUN_1005b2700();
    return;
  case 0x11:
    FUN_1005b1d80();
    return;
  case 0x12:
    FUN_1005b37d0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x13:
    FUN_1005b3150(param_1,param_4[1]);
    return;
  case 0x14:
    FUN_1005b3780(param_1,param_4[1]);
    return;
  case 0x15:
    FUN_1005b28c0(param_1,param_4[1]);
    return;
  case 0x16:
    FUN_1005b2910(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 0x17:
    FUN_1005b2940();
    return;
  case 0x18:
    FUN_1005b29a0();
    return;
  case 0x19:
    FUN_1005b3910();
    return;
  case 0x1a:
    FUN_1005b2c10(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 0x1b:
    FUN_1005b09f0();
    return;
  case 0x1c:
    FUN_1005b42d0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x1d:
    FUN_1005b47c0(param_1,param_4[1]);
    return;
  case 0x1e:
    FUN_1005b51d0(param_1,param_4[1]);
    return;
  case 0x1f:
    FUN_1005b5ca0(param_1,param_4[1],param_4[2]);
    return;
  case 0x20:
    FUN_1005b5ec0(param_1,param_4[1]);
    return;
  case 0x21:
    FUN_1005b61c0();
    return;
  case 0x22:
    FUN_1005b66f0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x23:
    FUN_1005b16c0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x24:
    FUN_1005b1a20(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 0x25:
    FUN_1005b1a90(param_1,*(undefined4 *)param_4[1]);
    return;
  }
switchD_10083f917_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

