
undefined1 FUN_1000f0050(long *param_1,undefined8 param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined1 uVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  QString local_40;
  undefined1 local_32;
  
  plVar2 = (long *)FUN_1000f01e0();
  lVar7 = 0;
  if (*param_1 != 0) {
    lVar7 = *(long *)(*param_1 + 0x10);
  }
  FUN_1007d6a90(&local_40,lVar7 + 0x10);
  puVar4 = (uint *)*plVar2;
  if (1 < *puVar4) {
    FUN_1000f5690(plVar2);
    puVar4 = (uint *)*plVar2;
  }
  if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
LAB_1000f0107:
    puVar6 = (uint *)(*plVar2 + 8);
  }
  else {
    puVar4 = *(uint **)(puVar4 + 4);
    puVar9 = (uint *)0x0;
    do {
      while (puVar6 = puVar4, cVar1 = operator<((QString *)(puVar6 + 6),&local_40), cVar1 != '\0') {
        puVar4 = *(uint **)(puVar6 + 4);
        if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
          puVar6 = puVar9;
          if (puVar9 == (uint *)0x0) goto LAB_1000f0107;
          goto LAB_1000f00f6;
        }
      }
      puVar4 = *(uint **)(puVar6 + 2);
      puVar9 = puVar6;
    } while (*(uint **)(puVar6 + 2) != (uint *)0x0);
LAB_1000f00f6:
    cVar1 = operator<(&local_40,(QString *)(puVar6 + 6));
    if (cVar1 != '\0') goto LAB_1000f0107;
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1000f013f;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1000f013f:
  puVar3 = (undefined8 *)FUN_1000f01e0();
  puVar4 = (uint *)*puVar3;
  if (1 < *puVar4) {
    FUN_1000f5690(puVar3);
    puVar4 = (uint *)*puVar3;
  }
  if (puVar4 + 2 == puVar6) {
    uVar5 = 0;
  }
  else {
    uVar8 = 0;
    if (*(long *)(puVar6 + 8) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(puVar6 + 8) + 0x10);
    }
    FUN_1000f02c0(uVar8,param_2,param_1);
    uVar5 = 1;
  }
  return uVar5;
}

