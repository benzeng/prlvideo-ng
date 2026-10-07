
void FUN_10005f450(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (*(uint *)*param_1 < 2) {
    puVar4 = (undefined8 *)QListData::append();
    puVar5 = operator_new(0x18);
    piVar1 = (int *)*param_2;
    *puVar5 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar5[1] = param_2[1];
    piVar1 = (int *)param_2[2];
    puVar5[2] = piVar1;
    if (*piVar1 == -1) goto LAB_10005f5ca;
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      goto LAB_10005f5ca;
    }
    plVar8 = puVar5 + 2;
    QListData::detach((int)plVar8);
  }
  else {
    puVar4 = (undefined8 *)FUN_10005fe00(param_1,0x7fffffff,1);
    puVar5 = operator_new(0x18);
    piVar1 = (int *)*param_2;
    *puVar5 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar5[1] = param_2[1];
    piVar1 = (int *)param_2[2];
    puVar5[2] = piVar1;
    if (*piVar1 == -1) goto LAB_10005f5ca;
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      goto LAB_10005f5ca;
    }
    plVar8 = puVar5 + 2;
    QListData::detach((int)plVar8);
  }
  lVar2 = *plVar8;
  lVar6 = (long)*(int *)(lVar2 + 8);
  lVar3 = param_2[2];
  if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar6 * 8) &&
     (lVar7 = *(int *)(lVar2 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(lVar2 + 0xc))) {
    _memcpy((void *)(lVar2 + 0x10 + lVar6 * 8),
            (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar7 * 8);
  }
LAB_10005f5ca:
  puVar5[1] = param_2[1];
  *puVar4 = puVar5;
  return;
}

