
void FUN_100ae4480(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  QArrayData *pQVar8;
  bool bVar9;
  QArrayData *local_78;
  Data *local_70;
  QArrayData *local_68;
  undefined2 local_5e;
  undefined4 local_5c;
  void *local_58;
  undefined4 *local_50;
  undefined2 *local_48;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100ae48d0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
    goto switchD_100ae4503_default;
  }
  if (param_2 != 0) goto switchD_100ae4503_default;
  switch(param_3) {
  case 0:
    local_5c = *(undefined4 *)param_4[1];
    local_5e = *(undefined2 *)param_4[2];
    local_58 = (void *)0x0;
    local_50 = &local_5c;
    local_48 = &local_5e;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10223aec0,0,&local_58);
    goto switchD_100ae4503_default;
  case 1:
    FUN_100ac3910(param_1);
    return;
  case 2:
    FUN_100ac4170(param_1);
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x000100ae45b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x158))(param_1,*(undefined8 *)param_4[1]);
    return;
  case 4:
    pcVar5 = *(code **)(*(long *)param_1 + 0x160);
    local_68 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      UNLOCK();
      local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_68 != 0);
    }
    plVar2 = (long *)param_4[3];
    uVar3 = *(undefined8 *)param_4[2];
    local_70 = (Data *)*plVar2;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 == 0) {
        QListData::detach((int)&local_70);
        lVar6 = (long)*(int *)(local_70 + 8);
        lVar4 = *plVar2;
        if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_70 + lVar6 * 8) &&
           (lVar7 = *(int *)(local_70 + 0xc) - lVar6,
           lVar7 != 0 && lVar6 <= *(int *)(local_70 + 0xc))) {
          _memcpy(local_70 + lVar6 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8)
                  ,lVar7 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + 1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_70 != 0);
      }
    }
    (*pcVar5)(param_1,&local_68,uVar3,&local_70);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_70 != 0);
        if (*(int *)local_70 != 0) goto LAB_100ae47b2;
      }
      QListData::dispose(local_70);
    }
LAB_100ae47b2:
    if (*(int *)local_68 == -1) goto switchD_100ae4503_default;
    pQVar8 = local_68;
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      bVar9 = *(int *)local_68 != 0;
      UNLOCK();
      local_58 = (void *)CONCAT71(local_58._1_7_,bVar9);
joined_r0x000100ae46b0:
      if (bVar9) goto switchD_100ae4503_default;
    }
    break;
  case 5:
    pcVar5 = *(code **)(*(long *)param_1 + 0x168);
    local_78 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      UNLOCK();
      local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_78 != 0);
    }
    (*pcVar5)(param_1,&local_78,*(undefined8 *)param_4[2]);
    if (*(int *)local_78 == -1) goto switchD_100ae4503_default;
    pQVar8 = local_78;
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      bVar9 = *(int *)local_78 != 0;
      UNLOCK();
      local_58 = (void *)CONCAT71(local_58._1_7_,bVar9);
      goto joined_r0x000100ae46b0;
    }
    break;
  case 6:
    FUN_100ac6130(param_1,*(undefined8 *)param_4[1],*(undefined1 *)param_4[2]);
    return;
  case 7:
    FUN_100ac6200(param_1);
    return;
  case 8:
    FUN_100ac65b0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 9:
    FUN_100ac6400(param_1);
    return;
  case 10:
    FUN_100ac3950(param_1);
    return;
  default:
    goto switchD_100ae4503_default;
  }
  QArrayData::deallocate(pQVar8,2,8);
switchD_100ae4503_default:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

