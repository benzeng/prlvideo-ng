
void FUN_100052fc0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  plVar6 = operator_new(0x28);
  pQVar3 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
  }
  *(undefined4 *)(plVar6 + 1) = 1;
  plVar6[2] = param_1;
  *plVar6 = (long)&PTR_FUN_100bef5a8;
  plVar6[3] = (long)pQVar3;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
  }
  *(undefined1 *)(plVar6 + 4) = 1;
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  cVar5 = FUN_100041750(uVar2,plVar6);
  if (cVar5 == '\0') {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  LOCK();
  plVar1 = plVar6 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return;
}

