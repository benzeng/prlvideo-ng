
void FUN_100a704a0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  uint *puVar6;
  QArrayData *pQVar7;
  undefined8 *puVar8;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  puVar6 = *(uint **)(param_1 + 0x18);
  if (1 < *puVar6) {
    if ((puVar6[2] & 0x7fffffff) == 0) {
      puVar6 = (uint *)QArrayData::allocate(8,8,0,2);
      *puVar1 = puVar6;
    }
    else {
      FUN_100a71c90(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
      puVar6 = (uint *)*puVar1;
    }
  }
  puVar8 = (undefined8 *)((long)puVar6 + *(long *)(puVar6 + 4));
  while( true ) {
    if (1 < *puVar6) {
      if ((puVar6[2] & 0x7fffffff) == 0) {
        puVar6 = (uint *)QArrayData::allocate(8,8,0,2);
        *puVar1 = puVar6;
      }
      else {
        FUN_100a71c90(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
        puVar6 = (uint *)*puVar1;
      }
    }
    if (puVar8 == (undefined8 *)((long)puVar6 + (long)(int)puVar6[1] * 8 + *(long *)(puVar6 + 4)))
    break;
    plVar3 = (long *)*puVar8;
    if (plVar3 != (long *)0x0) {
      plVar4 = (long *)plVar3[0xc];
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      plVar4 = (long *)*plVar3;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      operator_delete(plVar3);
      puVar6 = (uint *)*puVar1;
    }
    puVar8 = puVar8 + 1;
  }
  FUN_100a71610(puVar1);
  plVar3 = *(long **)(param_1 + 0x38);
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)plVar3[0xc];
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    plVar4 = (long *)*plVar3;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    operator_delete(plVar3);
  }
  pQVar7 = (QArrayData *)*puVar1;
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100a7065a;
      pQVar7 = (QArrayData *)*puVar1;
    }
    QArrayData::deallocate(pQVar7,8,8);
  }
LAB_100a7065a:
  QReadWriteLock::~QReadWriteLock((QReadWriteLock *)(param_1 + 0x10));
  return;
}

