
void FUN_100059720(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 auStack_858 [263];
  long *local_20;
  
  bVar5 = 0;
  FUN_100050e90(&local_20,*(long *)(param_1 + 0x10) + 0x78,*(undefined8 *)(param_1 + 0x20));
  if (local_20 == (long *)0x0) {
    FUN_10005aca0((undefined8 *)(param_1 + 0x18));
  }
  else {
    puVar3 = (undefined8 *)(param_1 + 0x18);
    puVar4 = auStack_858;
    for (lVar2 = 0x107; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    }
    FUN_100057cc0(local_20);
    LOCK();
    plVar1 = local_20 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_20 + 0x10))(local_20);
    }
  }
  return;
}

