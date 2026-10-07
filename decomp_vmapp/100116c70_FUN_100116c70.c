
void FUN_100116c70(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  QArrayData *pQVar9;
  int *local_68;
  long *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long *local_48;
  QArrayData *local_40;
  long *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar6 = (code *)*plVar3;
    lVar8 = plVar3[1];
    if ((pcVar6 == FUN_100117220) && (lVar8 == 0)) {
      *puVar2 = 0;
      pcVar6 = (code *)*plVar3;
      lVar8 = plVar3[1];
    }
    if (pcVar6 != FUN_100117240) {
      return;
    }
    if (lVar8 != 0) {
      return;
    }
    *puVar2 = 1;
    return;
  }
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    iVar7 = 0;
    goto LAB_100116d24;
  case 1:
    iVar7 = 1;
LAB_100116d24:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100baa010,iVar7,(void **)0x0)
    ;
    return;
  case 2:
    FUN_1000743b0();
    return;
  case 3:
    FUN_1000743f0();
    return;
  case 4:
    local_30 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
    local_38 = *(long **)param_4[2];
    if (local_38 != (long *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_100070600(param_1,&local_30,&local_38);
    if (local_38 != (long *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (*(int *)local_30 == -1) {
      return;
    }
    pQVar9 = local_30;
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    break;
  case 5:
    local_40 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
    }
    local_48 = *(long **)param_4[2];
    if (local_48 != (long *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    FUN_100074de0(param_1,&local_40,&local_48);
    if (local_48 != (long *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    if (*(int *)local_40 == -1) {
      return;
    }
    pQVar9 = local_40;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_21 = 0;
    }
    break;
  case 6:
    local_50 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
    }
    FUN_100075060(param_1,&local_50);
    if (*(int *)local_50 == -1) {
      return;
    }
    pQVar9 = local_50;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_21 = 0;
    }
    break;
  case 7:
    uVar4 = *(undefined8 *)param_4[1];
    local_58 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
    }
    uVar1 = *(undefined4 *)param_4[3];
    local_60 = *(long **)param_4[4];
    if (local_60 != (long *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    FUN_1000752a0(param_1,uVar4,&local_58,uVar1,&local_60);
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar3 = local_60 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    if (*(int *)local_58 == -1) {
      return;
    }
    pQVar9 = local_58;
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_21 = 0;
    }
    break;
  case 8:
    FUN_100075020(param_1,*(undefined1 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 9:
    local_68 = *(int **)param_4[1];
    if (local_68 != (int *)0x0) {
      LOCK();
      *local_68 = *local_68 + 1;
      local_21 = *local_68 != 0;
      UNLOCK();
    }
    FUN_10007f300(param_1,&local_68,*(undefined4 *)param_4[2]);
    piVar5 = local_68;
    if (local_68 != (int *)0x0) {
      LOCK();
      *local_68 = *local_68 + -1;
      local_21 = *local_68 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_68 != (int *)0x0)) {
        FUN_100031ed0(local_68);
        operator_delete(piVar5);
      }
    }
  default:
    goto switchD_100116d0b_default;
  }
  QArrayData::deallocate(pQVar9,2,8);
switchD_100116d0b_default:
  return;
}

