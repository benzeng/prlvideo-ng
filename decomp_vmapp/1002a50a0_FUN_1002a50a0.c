
uint FUN_1002a50a0(long param_1,uint param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 < param_2) {
    return 0;
  }
  if (0xffff < param_3) {
    return 0;
  }
  QMutex::lock();
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar8 = 0;
  uVar5 = (ulong)uVar7;
  while (uVar9 = (uint)uVar5, uVar9 != 0) {
    uVar4 = uVar9 >> 1;
    uVar5 = (ulong)uVar4;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)(uVar8 + uVar4) * 0x10);
    if (uVar1 <= param_2) {
      if (param_2 <= uVar1) goto LAB_1002a5227;
      uVar8 = uVar8 + uVar4 + 1;
      uVar5 = (ulong)((uVar9 - 1) - uVar4);
    }
  }
  if (((uVar8 == 0) ||
      (*(uint *)(*(long *)(param_1 + 0x20) + 4 + (ulong)(uVar8 - 1) * 0x10) < param_2)) &&
     ((uVar7 <= uVar8 || (param_3 < *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar8 * 0x10))))) {
    if (uVar7 < *(uint *)(param_1 + 0x1c)) {
      pvVar6 = *(void **)(param_1 + 0x20);
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x1c) + 0x10;
      pvVar6 = operator_new__((ulong)uVar9 << 4,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (pvVar6 == (void *)0x0) goto LAB_1002a5227;
      *(uint *)(param_1 + 0x1c) = uVar9;
      pvVar2 = *(void **)(param_1 + 0x20);
      _memcpy(pvVar6,pvVar2,(ulong)uVar7 << 4);
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
        uVar7 = *(uint *)(param_1 + 0x18);
      }
      *(void **)(param_1 + 0x20) = pvVar6;
    }
    lVar10 = (ulong)uVar8 * 0x10;
    _memmove((void *)((long)pvVar6 + lVar10 + 0x10),(void *)((long)pvVar6 + lVar10),
             (ulong)(uVar7 - uVar8) << 4);
    lVar3 = *(long *)(param_1 + 0x20);
    *(uint *)(lVar3 + lVar10) = param_2;
    *(uint *)(lVar3 + 4 + lVar10) = param_3;
    *(undefined8 *)(lVar3 + 8 + lVar10) = param_4;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    QMutex::unlock();
  }
  else {
LAB_1002a5227:
    QMutex::unlock();
    param_2 = 0;
  }
  return param_2;
}

