
void * FUN_100791b60(void *param_1,void *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  size_t sVar7;
  ulong uVar8;
  void *pvVar9;
  
  *(undefined8 *)((long)param_1 + 0x80) = 0;
  uVar3 = *(uint *)((long)param_2 + 0x4c);
  pvVar6 = _memcpy(param_1,param_2,0x52);
  *(undefined8 *)((long)param_1 + 0x78) = 0;
  *(undefined8 *)((long)param_1 + 0x70) = 0;
  *(undefined8 *)((long)param_1 + 0x68) = 0;
  *(undefined8 *)((long)param_1 + 0x60) = 0;
  *(undefined8 *)((long)param_1 + 0x58) = 0;
  if ((ulong)uVar3 == 0) {
    *(undefined4 *)((long)param_1 + 0x88) = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
  }
  else {
    if ((ulong)*(uint *)((long)param_1 + 0x4c) < 2) {
      pvVar6 = (void *)((long)param_1 + 0x88);
    }
    else {
      pvVar6 = (void *)((long)param_1 + (ulong)*(uint *)((long)param_1 + 0x4c) * 8 + 0x80);
    }
    uVar8 = (ulong)*(uint *)((long)param_2 + 0x4c);
    if (uVar8 < 2) {
      pvVar9 = (void *)((long)param_2 + 0x88);
      sVar7 = 8;
    }
    else {
      pvVar9 = (void *)((long)param_2 + uVar8 * 8 + 0x80);
      sVar7 = uVar8 << 3;
    }
    pvVar6 = _memcpy(pvVar6,pvVar9,sVar7);
    uVar8 = 0;
    do {
      if (uVar8 != 0) {
        *(undefined8 *)((long)param_1 + uVar8 * 8 + 0x80) = 0;
      }
      lVar4 = *(long *)((long)param_2 + uVar8 * 8 + 0x80);
      if (lVar4 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        pvVar6 = (void *)(ulong)*puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
      }
      plVar5 = *(long **)((long)param_1 + uVar8 * 8 + 0x80);
      *(long *)((long)param_1 + uVar8 * 8 + 0x80) = lVar4;
      if (plVar5 != (long *)0x0) {
        LOCK();
        puVar1 = (uint *)(plVar5 + 1);
        uVar2 = *puVar1;
        pvVar6 = (void *)(ulong)uVar2;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar2 == 1) {
          pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))();
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar3);
  }
  return pvVar6;
}

