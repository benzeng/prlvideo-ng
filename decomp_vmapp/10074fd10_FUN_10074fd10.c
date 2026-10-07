
undefined8
FUN_10074fd10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong *puVar9;
  uint uVar10;
  
  uVar10 = *(uint *)(param_1 + 0x10);
  plVar1 = (long *)(param_1 + 0x20);
  if (uVar10 == 0) {
    uVar10 = 0;
  }
  else {
    uVar8 = 0;
    do {
      pvVar5 = operator_new(0x78,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (pvVar5 == (void *)0x0) break;
      FUN_100751a50(pvVar5,param_1,param_2,param_3,param_4,param_5,param_6);
      plVar6 = operator_new(0x18);
      plVar6[2] = (long)pvVar5;
      plVar6[1] = (long)plVar1;
      lVar2 = *(long *)(param_1 + 0x20);
      *plVar6 = lVar2;
      *(long **)(lVar2 + 8) = plVar6;
      *(long **)(param_1 + 0x20) = plVar6;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
      uVar8 = uVar8 + 1;
      uVar10 = *(uint *)(param_1 + 0x10);
    } while (uVar8 < uVar10);
  }
  puVar9 = (ulong *)(param_1 + 0x30);
  if (*puVar9 == (ulong)uVar10) {
    for (plVar6 = *(long **)(param_1 + 0x28); plVar6 != plVar1; plVar6 = (long *)plVar6[1]) {
      QThread::start(plVar6[2],7);
    }
    QSemaphore::release((int)param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
    uVar7 = CONCAT71((uint7)(uint3)((uint)*(undefined4 *)(param_1 + 0x10) >> 8),1);
  }
  else {
    FUN_1008e3970("","Compression",0,"Failed to allocate workers");
    for (plVar6 = *(long **)(param_1 + 0x28); plVar6 != plVar1; plVar6 = (long *)plVar6[1]) {
      if ((long *)plVar6[2] != (long *)0x0) {
        (**(code **)(*(long *)plVar6[2] + 0x20))();
      }
    }
    if (*puVar9 == 0) {
      uVar7 = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x20);
      plVar6 = *(long **)(param_1 + 0x28);
      lVar3 = *plVar6;
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar2 + 8);
      **(long **)(lVar2 + 8) = lVar3;
      *puVar9 = 0;
      if (plVar6 == plVar1) {
        uVar7 = 0;
      }
      else {
        do {
          plVar4 = (long *)plVar6[1];
          operator_delete(plVar6);
          plVar6 = plVar4;
        } while (plVar4 != plVar1);
        uVar7 = 0;
      }
    }
  }
  return uVar7;
}

