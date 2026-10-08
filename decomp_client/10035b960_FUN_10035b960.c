
undefined1 FUN_10035b960(long param_1,QObject *param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  uint *puVar5;
  undefined1 uVar6;
  QObject *pQVar7;
  QObject *pQVar8;
  uint *local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  FUN_10006b440(&local_28,*(long *)(param_1 + 0x18) + 0x40);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  uVar1 = local_28[2];
  if (uVar1 == local_28[3]) {
    uVar6 = 0;
  }
  else {
    puVar5 = local_28 + (long)(int)uVar1 * 2 + 4;
    lVar4 = (long)(int)local_28[3] * 8 + (long)(int)uVar1 * -8;
    do {
      lVar2 = **(long **)puVar5;
      pQVar7 = (QObject *)0x0;
      if ((lVar2 != 0) && (pQVar7 = (QObject *)0x0, *(int *)(lVar2 + 4) != 0)) {
        pQVar7 = (QObject *)(*(long **)puVar5)[1];
      }
      pQVar8 = (QObject *)0x0;
      if ((piVar3 != (int *)0x0) && (pQVar8 = (QObject *)0x0, piVar3[1] != 0)) {
        pQVar8 = param_2;
      }
      uVar6 = 1;
      if (pQVar7 == pQVar8) goto LAB_10035b9fa;
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
    uVar6 = 0;
  }
LAB_10035b9fa:
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_1b = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_1b) {
      operator_delete(piVar3);
    }
  }
  if (*local_28 != 0xffffffff) {
    if (*local_28 != 0) {
      LOCK();
      *local_28 = *local_28 - 1;
      UNLOCK();
      if (*local_28 != 0) {
        return uVar6;
      }
      local_1a = 0;
    }
    FUN_10006b5d0(&local_28,local_28);
  }
  return uVar6;
}

