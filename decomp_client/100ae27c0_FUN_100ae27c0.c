
void FUN_100ae27c0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  QArrayData *pQVar11;
  bool bVar12;
  QArrayData *local_98;
  QArrayData *local_90;
  Data *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar7 = (code *)*plVar3;
    lVar9 = plVar3[1];
    if ((pcVar7 == FUN_100ae31b0) && (lVar9 == 0)) {
      *puVar2 = 0;
      pcVar7 = (code *)*plVar3;
      lVar9 = plVar3[1];
    }
    if ((pcVar7 == FUN_100ae31d0) && (lVar9 == 0)) {
      *puVar2 = 1;
      pcVar7 = (code *)*plVar3;
      lVar9 = plVar3[1];
    }
    if ((pcVar7 == FUN_100ae3240) && (lVar9 == 0)) {
      *puVar2 = 2;
      pcVar7 = (code *)*plVar3;
      lVar9 = plVar3[1];
    }
    if ((pcVar7 == FUN_100ae3260) && (lVar9 == 0)) {
      *puVar2 = 3;
      pcVar7 = (code *)*plVar3;
      lVar9 = plVar3[1];
    }
    if ((pcVar7 == FUN_100ae32c0) && (lVar9 == 0)) {
      *puVar2 = 4;
      pcVar7 = (code *)*plVar3;
      lVar9 = plVar3[1];
    }
    if ((pcVar7 == FUN_100ae32e0) && (lVar9 == 0)) {
      *puVar2 = 5;
      pcVar7 = (code *)*plVar3;
      lVar9 = plVar3[1];
    }
    if ((pcVar7 == FUN_100ae3300) && (lVar9 == 0)) {
      *puVar2 = 6;
      pcVar7 = (code *)*plVar3;
      lVar9 = plVar3[1];
    }
    if ((pcVar7 == FUN_100ae3350) && (lVar9 == 0)) {
      *puVar2 = 7;
      pcVar7 = (code *)*plVar3;
      lVar9 = plVar3[1];
    }
    if ((pcVar7 == FUN_100ae33a0) && (lVar9 == 0)) {
      *puVar2 = 8;
      pcVar7 = (code *)*plVar3;
      lVar9 = plVar3[1];
    }
    if ((pcVar7 == FUN_100ae33f0) && (lVar9 == 0)) {
      *puVar2 = 9;
      pcVar7 = (code *)*plVar3;
      lVar9 = plVar3[1];
    }
    if ((pcVar7 == FUN_100ae3450) && (lVar9 == 0)) {
      *puVar2 = 10;
    }
    goto switchD_100ae29ee_default;
  }
  if (param_2 != 0) goto switchD_100ae29ee_default;
  switch(param_3) {
  case 0:
    iVar6 = 0;
    goto LAB_100ae2b89;
  case 1:
    local_5c = *(undefined4 *)param_4[1];
    local_60 = *(undefined4 *)param_4[2];
    local_64 = *(undefined4 *)param_4[3];
    local_50 = &local_5c;
    local_48 = &local_60;
    local_40 = &local_64;
    iVar6 = 1;
    break;
  case 2:
    iVar6 = 2;
    goto LAB_100ae2b89;
  case 3:
    local_5c = CONCAT31(local_5c._1_3_,*(undefined1 *)param_4[1]);
    local_50 = &local_5c;
    iVar6 = 3;
    break;
  case 4:
    iVar6 = 4;
    goto LAB_100ae2b89;
  case 5:
    iVar6 = 5;
    goto LAB_100ae2b89;
  case 6:
    local_50 = (undefined4 *)param_4[1];
    iVar6 = 6;
    break;
  case 7:
    local_50 = (undefined4 *)param_4[1];
    iVar6 = 7;
    break;
  case 8:
    local_50 = (undefined4 *)param_4[1];
    iVar6 = 8;
    break;
  case 9:
    local_5c = CONCAT31(local_5c._1_3_,*(undefined1 *)param_4[1]);
    local_50 = &local_5c;
    iVar6 = 9;
    break;
  case 10:
    iVar6 = 10;
LAB_100ae2b89:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a7d0,iVar6,(void **)0x0)
    ;
    return;
  case 0xb:
    FUN_100ad9460(param_1);
    return;
  case 0xc:
    FUN_100ad4d20(param_1);
    return;
  case 0xd:
    FUN_100ad84b0(param_1);
    return;
  case 0xe:
    FUN_100ad56f0(param_1);
    return;
  case 0xf:
    FUN_100ad1cd0(param_1,param_4[1],param_4[2]);
    return;
  case 0x10:
    local_70 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_70 + 1U) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      UNLOCK();
      local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_70 != 0);
    }
    FUN_100ad6040(param_1,&local_70,*(undefined8 *)param_4[2]);
    if (*(int *)local_70 == -1) goto switchD_100ae29ee_default;
    pQVar11 = local_70;
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      bVar12 = *(int *)local_70 != 0;
      UNLOCK();
      local_58 = (void *)CONCAT71(local_58._1_7_,bVar12);
joined_r0x000100ae2cf1:
      if (bVar12) goto switchD_100ae29ee_default;
    }
    goto LAB_100ae2cfb;
  case 0x11:
    uVar4 = *(undefined8 *)param_4[1];
    local_78 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      UNLOCK();
      local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_78 != 0);
    }
    FUN_100ad64c0(param_1,uVar4,&local_78);
    if (*(int *)local_78 == -1) goto switchD_100ae29ee_default;
    pQVar11 = local_78;
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      bVar12 = *(int *)local_78 != 0;
      UNLOCK();
      local_58 = (void *)CONCAT71(local_58._1_7_,bVar12);
      goto joined_r0x000100ae2cf1;
    }
LAB_100ae2cfb:
    uVar10 = 1;
    goto LAB_100ae2fab;
  case 0x12:
    FUN_100ad92f0(param_1,*(undefined1 *)param_4[1]);
    return;
  case 0x13:
    FUN_100ad2010(param_1);
    return;
  case 0x14:
    FUN_100ad8a00(param_1);
    return;
  case 0x15:
    FUN_100ad5d10(param_1);
    return;
  case 0x16:
                    /* WARNING: Could not recover jumptable at 0x000100ae2db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x158))(param_1,*(undefined8 *)param_4[1]);
    return;
  case 0x17:
    pcVar7 = *(code **)(*(long *)param_1 + 0x160);
    local_80 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_80 + 1U) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      UNLOCK();
      local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_80 != 0);
    }
    plVar3 = (long *)param_4[3];
    uVar4 = *(undefined8 *)param_4[2];
    local_88 = (Data *)*plVar3;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 == 0) {
        QListData::detach((int)&local_88);
        lVar5 = (long)*(int *)(local_88 + 8);
        lVar9 = *plVar3;
        if (((Data *)(lVar9 + (long)*(int *)(lVar9 + 8) * 8) != local_88 + lVar5 * 8) &&
           (lVar8 = *(int *)(local_88 + 0xc) - lVar5,
           lVar8 != 0 && lVar5 <= *(int *)(local_88 + 0xc))) {
          _memcpy(local_88 + lVar5 * 8 + 0x10,(void *)(lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8)
                  ,lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_88 != 0);
      }
    }
    (*pcVar7)(param_1,&local_80,uVar4,&local_88);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_88 != 0);
        if (*(int *)local_88 != 0) goto LAB_100ae2f85;
      }
      QListData::dispose(local_88);
    }
LAB_100ae2f85:
    if (*(int *)local_80 == -1) goto switchD_100ae29ee_default;
    pQVar11 = local_80;
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_80 != 0);
      if (*(int *)local_80 != 0) goto switchD_100ae29ee_default;
    }
LAB_100ae2fa6:
    uVar10 = 2;
    goto LAB_100ae2fab;
  case 0x18:
    pcVar7 = *(code **)(*(long *)param_1 + 0x168);
    local_90 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_90 + 1U) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      UNLOCK();
      local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_90 != 0);
    }
    (*pcVar7)(param_1,&local_90,*(undefined8 *)param_4[2]);
    if (*(int *)local_90 == -1) goto switchD_100ae29ee_default;
    pQVar11 = local_90;
    if (*(int *)local_90 == 0) goto LAB_100ae2fa6;
    LOCK();
    *(int *)local_90 = *(int *)local_90 + -1;
    UNLOCK();
    local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_90 != 0);
    if (*(int *)local_90 != 0) goto switchD_100ae29ee_default;
    uVar10 = 2;
    goto LAB_100ae2fab;
  case 0x19:
    pcVar7 = *(code **)(*(long *)param_1 + 0x170);
    local_98 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_98 + 1U) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      UNLOCK();
      local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_98 != 0);
    }
    (*pcVar7)(param_1,&local_98,*(undefined8 *)param_4[2],*(undefined8 *)param_4[3]);
    if (*(int *)local_98 == -1) goto switchD_100ae29ee_default;
    pQVar11 = local_98;
    if (*(int *)local_98 == 0) goto LAB_100ae2fa6;
    LOCK();
    *(int *)local_98 = *(int *)local_98 + -1;
    UNLOCK();
    local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_98 != 0);
    if (*(int *)local_98 != 0) goto switchD_100ae29ee_default;
    uVar10 = 2;
LAB_100ae2fab:
    QArrayData::deallocate(pQVar11,uVar10,8);
  default:
    goto switchD_100ae29ee_default;
  }
  local_58 = (void *)0x0;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a7d0,iVar6,&local_58);
switchD_100ae29ee_default:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

