
void FUN_1007f8e60(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  QArrayData *pQVar6;
  bool bVar7;
  QArrayData *local_50;
  QArrayData *local_48 [2];
  void *local_38;
  QArrayData **local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_1007f9060) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_1007f90b0) && (lVar5 == 0)) {
      *puVar2 = 1;
    }
    goto LAB_1007f8fcd;
  }
  if (param_2 != 0) goto LAB_1007f8fcd;
  if (param_3 == 1) {
    local_50 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      UNLOCK();
    }
    local_38 = (void *)0x0;
    local_30 = &local_50;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f91d0,1,&local_38);
    if (*(int *)local_50 == -1) goto LAB_1007f8fcd;
    pQVar6 = local_50;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      bVar7 = *(int *)local_50 != 0;
      UNLOCK();
      local_38 = (void *)CONCAT71(local_38._1_7_,bVar7);
joined_r0x0001007f8fb8:
      if (bVar7) goto LAB_1007f8fcd;
    }
  }
  else {
    if (param_3 != 0) goto LAB_1007f8fcd;
    local_48[0] = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_48[0] + 1U) {
      LOCK();
      *(int *)local_48[0] = *(int *)local_48[0] + 1;
      UNLOCK();
    }
    local_38 = (void *)0x0;
    local_30 = local_48;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f91d0,0,&local_38);
    if (*(int *)local_48[0] == -1) goto LAB_1007f8fcd;
    pQVar6 = local_48[0];
    if (*(int *)local_48[0] != 0) {
      LOCK();
      *(int *)local_48[0] = *(int *)local_48[0] + -1;
      bVar7 = *(int *)local_48[0] != 0;
      UNLOCK();
      local_38 = (void *)CONCAT71(local_38._1_7_,bVar7);
      goto joined_r0x0001007f8fb8;
    }
  }
  QArrayData::deallocate(pQVar6,2,8);
LAB_1007f8fcd:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

