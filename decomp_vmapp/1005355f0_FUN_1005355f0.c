
/* WARNING: Removing unreachable block (ram,0x00010053580e) */

void FUN_1005355f0(long param_1,undefined1 param_2)

{
  long *plVar1;
  QMapNodeBase *pQVar2;
  ulong *puVar3;
  QMapNodeBase *pQVar4;
  undefined8 uVar5;
  bool bVar6;
  QMapNodeBase *local_40;
  undefined1 local_33;
  undefined1 local_31;
  
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x20) = 1;
  plVar1 = (long *)(param_1 + 0x10);
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x10);
  if (*(uint *)pQVar2 == 0) {
    pQVar2 = (QMapNodeBase *)QMapDataBase::createData();
    local_40 = pQVar2;
    if (*(long *)(*plVar1 + 0x10) != 0) {
      puVar3 = (ulong *)FUN_100541db0(*(long *)(*plVar1 + 0x10),pQVar2);
      *(ulong **)(pQVar2 + 0x10) = puVar3;
      *puVar3 = *puVar3 & 3 | (ulong)(pQVar2 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else {
    local_40 = pQVar2;
    if (*(uint *)pQVar2 != 0xffffffff) {
      LOCK();
      *(uint *)pQVar2 = *(uint *)pQVar2 + 1;
      local_33 = *(uint *)pQVar2 != 0;
      UNLOCK();
      pQVar2 = (QMapNodeBase *)*plVar1;
      local_40 = pQVar2;
    }
  }
  QMutex::unlock();
  if (1 < *(uint *)pQVar2) {
    FUN_100541d10(&local_40);
    pQVar2 = local_40;
  }
  if (*(long *)(pQVar2 + 0x10) == 0) {
    pQVar4 = pQVar2 + 8;
  }
  else {
    pQVar4 = *(QMapNodeBase **)(pQVar2 + 0x20);
  }
  while( true ) {
    if (1 < *(uint *)pQVar2) {
      FUN_100541d10(&local_40);
      pQVar2 = local_40;
    }
    if (pQVar4 == pQVar2 + 8) break;
    uVar5 = 0;
    if (*(long *)(pQVar4 + 0x20) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(pQVar4 + 0x20) + 0x10);
    }
    FUN_10053a340(uVar5,param_2);
    pQVar4 = (QMapNodeBase *)FUN_1005413d0(&local_40,pQVar4);
    pQVar2 = local_40;
  }
  bVar6 = (param_1 + 8U & 0xfffffffffffffffe) != 0;
  if (bVar6) {
    QMutex::lock();
  }
  FUN_100541150(plVar1);
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (bVar6) {
    QMutex::unlock();
  }
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100541c50();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
  return;
}

