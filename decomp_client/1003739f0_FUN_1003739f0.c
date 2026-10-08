
QObject * FUN_1003739f0(long param_1,undefined8 *param_2,undefined4 param_3,int param_4,long param_5
                       )

{
  undefined8 *puVar1;
  QObject *pQVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  QArrayData *local_b0;
  undefined4 local_a8;
  int *local_a0;
  QObject *local_98;
  undefined1 local_90 [48];
  QArrayData *local_60;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  pQVar2 = operator_new(0x48);
  FUN_10036cdf0(pQVar2,param_2,param_3,0,0);
  if (param_5 == 0) {
    iVar7 = 1;
    if (param_4 != 3) {
      iVar7 = param_4;
    }
    FUN_100371ce0(local_90,param_1,param_2,param_3,iVar7,&local_49);
    FUN_10036bfc0(pQVar2,local_90);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100373ad0;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
  else {
    FUN_10036bfc0(pQVar2,param_5);
  }
LAB_100373ad0:
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  local_a0 = piVar3;
  local_98 = pQVar2;
  FUN_100375b60(param_1 + 0x18,&local_a0);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x20);
  local_b0 = (QArrayData *)*param_2;
  if (1 < *(int *)local_b0 + 1U) {
    LOCK();
    *(int *)local_b0 = *(int *)local_b0 + 1;
    local_31 = *(int *)local_b0 != 0;
    UNLOCK();
  }
  puVar6 = (uint *)*puVar1;
  local_a8 = param_3;
  if (1 < *puVar6) {
    FUN_100376900(puVar1);
    puVar6 = (uint *)*puVar1;
  }
  lVar4 = FUN_1003762d0(puVar6,&local_b0);
  if (lVar4 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    lVar4 = FUN_100376750(puVar1,&local_b0,&local_48);
  }
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar3 = *(int **)(lVar4 + 0x28);
  if (piVar3 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      local_48 = CONCAT71(local_48._1_7_,*piVar5 != 0);
      piVar3 = *(int **)(lVar4 + 0x28);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      local_48 = CONCAT71(local_48._1_7_,*piVar3 != 0);
      if ((*piVar3 == 0) && (*(void **)(lVar4 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(lVar4 + 0x28));
      }
    }
    *(int **)(lVar4 + 0x28) = piVar5;
    *(QObject **)(lVar4 + 0x30) = pQVar2;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    local_48 = CONCAT71(local_48._1_7_,*piVar5 != 0);
    if (*piVar5 == 0) {
      operator_delete(piVar5);
    }
  }
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      UNLOCK();
      local_48 = CONCAT71(local_48._1_7_,*(int *)local_b0 != 0);
      if (*(int *)local_b0 != 0) goto LAB_100373c43;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100373c43:
  FUN_100834030(param_1,param_2,param_3);
  return pQVar2;
}

