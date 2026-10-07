
undefined8 FUN_1000f0750(long *param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  QString local_38;
  undefined1 local_2a;
  
  plVar2 = (long *)FUN_1000f01e0();
  lVar7 = 0;
  if (*param_1 != 0) {
    lVar7 = *(long *)(*param_1 + 0x10);
  }
  FUN_1007d6a90(&local_38,lVar7 + 0x10);
  puVar4 = (uint *)*plVar2;
  if (1 < *puVar4) {
    FUN_1000f5690(plVar2);
    puVar4 = (uint *)*plVar2;
  }
  if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
LAB_1000f07f7:
    puVar6 = (uint *)(*plVar2 + 8);
  }
  else {
    puVar4 = *(uint **)(puVar4 + 4);
    puVar8 = (uint *)0x0;
    do {
      while (puVar6 = puVar4, cVar1 = operator<((QString *)(puVar6 + 6),&local_38), cVar1 != '\0') {
        puVar4 = *(uint **)(puVar6 + 4);
        if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
          puVar6 = puVar8;
          if (puVar8 == (uint *)0x0) goto LAB_1000f07f7;
          goto LAB_1000f07e6;
        }
      }
      puVar4 = *(uint **)(puVar6 + 2);
      puVar8 = puVar6;
    } while (*(uint **)(puVar6 + 2) != (uint *)0x0);
LAB_1000f07e6:
    cVar1 = operator<(&local_38,(QString *)(puVar6 + 6));
    if (cVar1 != '\0') goto LAB_1000f07f7;
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_2a = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_1000f082e;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1000f082e:
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
    uVar5 = 0;
    if (*(long *)(puVar6 + 8) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(puVar6 + 8) + 0x10);
    }
    FUN_1000f08d0(uVar5);
    uVar5 = FUN_1000f01e0();
    FUN_1000f52f0(uVar5,puVar6);
    uVar5 = 1;
  }
  return uVar5;
}

