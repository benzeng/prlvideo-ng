
long * FUN_100108ab0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  if (*(uint *)*param_1 < 2) {
    puVar4 = (undefined8 *)QListData::append();
    plVar5 = operator_new(8);
    lVar3 = *param_2;
    *plVar5 = lVar3;
    plVar6 = plVar5;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      plVar6 = (long *)(ulong)*puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_100109570(param_1,0x7fffffff,1);
    plVar5 = operator_new(8);
    lVar3 = *param_2;
    *plVar5 = lVar3;
    plVar6 = plVar5;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      plVar6 = (long *)(ulong)uVar2;
    }
  }
  *puVar4 = plVar5;
  return plVar6;
}

