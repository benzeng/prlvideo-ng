
undefined8 * FUN_1004d2110(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  
  *param_1 = PTR_shared_null_100ba20d0;
  pQVar2 = (QArrayData *)*param_3;
  iVar6 = *(int *)pQVar2;
  if (1 < iVar6 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
    iVar6 = *(int *)pQVar2;
  }
  if (1 < iVar6 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
    iVar6 = *(int *)pQVar2;
  }
  if (1 < iVar6 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
    iVar6 = *(int *)pQVar2;
  }
  if (iVar6 != -1) {
    if (iVar6 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1004d219b;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004d219b:
  plVar7 = operator_new(0x50);
  FUN_1004f46d0(plVar7);
  *plVar7 = (long)&PTR_FUN_100bc30d8;
  plVar7[5] = (long)FUN_1004d23f0;
  plVar7[6] = 0;
  plVar7[7] = (long)param_2;
  plVar7[8] = (long)pQVar2;
  iVar6 = *(int *)pQVar2;
  if (1 < iVar6 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
    iVar6 = *(int *)pQVar2;
  }
  plVar7[9] = (long)param_1;
  if (iVar6 == -1) goto LAB_1004d2247;
  if (iVar6 == 0) {
LAB_1004d2208:
    QArrayData::deallocate(pQVar2,2,8);
  }
  else {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + -1;
    UNLOCK();
    if (*(int *)pQVar2 == 0) goto LAB_1004d2208;
  }
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1004d2247;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004d2247:
  uVar3 = *(undefined8 *)(*param_2 + 0x90);
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  cVar5 = FUN_100041750(uVar3,plVar7);
  if (cVar5 == '\0') {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  LOCK();
  plVar1 = plVar7 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if (cVar5 != '\0') {
    FUN_1004f4730(plVar7);
  }
  LOCK();
  plVar1 = plVar7 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return param_1;
}

