
void FUN_100a4b0e0(long param_1)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  char cVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 local_40;
  uint local_3c;
  int *local_38;
  undefined1 local_29;
  
  local_38 = (int *)PTR_shared_null_1021e15e8;
  cVar4 = FUN_100a4aaf0();
  if (cVar4 == '\0') goto LAB_100a4b267;
  QMutex::lock();
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","VmCliPathResolverClient",3,"dataReceived requestId = %d, mapSize = %d",
                  local_3c,*(undefined4 *)(*(long *)(param_1 + 0x30) + 4));
  }
  puVar10 = (undefined8 *)(param_1 + 0x30);
  puVar5 = (uint *)*puVar10;
  if (1 < *puVar5) {
    FUN_100a4cdd0(puVar10);
    puVar5 = *(uint **)(param_1 + 0x30);
  }
  if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
LAB_100a4b1dd:
    puVar7 = puVar5 + 2;
  }
  else {
    puVar3 = *(uint **)(puVar5 + 4);
    puVar8 = (uint *)0x0;
    do {
      while (puVar7 = puVar3, uVar6 = puVar7[6], local_3c <= uVar6) {
        puVar3 = *(uint **)(puVar7 + 2);
        puVar8 = puVar7;
        if (*(uint **)(puVar7 + 2) == (uint *)0x0) goto LAB_100a4b1d9;
      }
      puVar3 = *(uint **)(puVar7 + 4);
    } while (*(uint **)(puVar7 + 4) != (uint *)0x0);
    if (puVar8 == (uint *)0x0) goto LAB_100a4b1dd;
    uVar6 = puVar8[6];
    puVar7 = puVar8;
LAB_100a4b1d9:
    if (local_3c < uVar6) goto LAB_100a4b1dd;
  }
  if (1 < *puVar5) {
    FUN_100a4cdd0(puVar10);
    puVar5 = *(uint **)(param_1 + 0x30);
  }
  plVar9 = (long *)0x0;
  if (puVar7 != puVar5 + 2) {
    plVar9 = *(long **)(puVar7 + 8);
    if (plVar9 != (long *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    FUN_100a4c9d0(puVar10,puVar7);
  }
  QMutex::unlock();
  if (plVar9 != (long *)0x0) {
    plVar1 = (long *)plVar9[2];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,local_40,&local_38);
    }
    LOCK();
    plVar1 = plVar9 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_100a4b267:
  if (*local_38 != -1) {
    if (*local_38 != 0) {
      LOCK();
      *local_38 = *local_38 + -1;
      UNLOCK();
      if (*local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    FUN_10003cda0(&local_38,local_38);
  }
  return;
}

