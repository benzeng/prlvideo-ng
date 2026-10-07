
int FUN_1002a5250(long param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar9;
  uint uVar10;
  ulong uVar8;
  
  QMutex::lock();
  uVar9 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
    pvVar2 = *(void **)(param_1 + 0x30);
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x2c) + 0x10;
    pvVar2 = operator_new__((ulong)uVar10 << 4,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (pvVar2 == (void *)0x0) {
      QMutex::unlock();
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar10;
    pvVar1 = *(void **)(param_1 + 0x30);
    _memcpy(pvVar2,pvVar1,uVar9 << 4);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      uVar9 = (ulong)*(uint *)(param_1 + 0x28);
      uVar10 = *(uint *)(param_1 + 0x2c);
    }
    *(void **)(param_1 + 0x30) = pvVar2;
    uVar7 = (uint)uVar9;
    if (uVar7 < uVar10) {
      uVar3 = uVar9;
      uVar8 = uVar9;
      if ((uVar10 - uVar7 & 3) != 0) {
        puVar4 = (undefined8 *)(uVar9 * 0x10 + 8 + (long)pvVar2);
        iVar6 = -(uVar10 - uVar7 & 3);
        do {
          *(int *)(puVar4 + -1) = (int)uVar3 + 1;
          *puVar4 = 0;
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 2;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0);
        uVar8 = uVar3 & 0xffffffff;
      }
      if (2 < (uVar10 - 1) - uVar7) {
        puVar4 = (undefined8 *)(uVar3 * 0x10 + 0x38 + (long)pvVar2);
        do {
          iVar6 = (int)uVar8;
          *(int *)(puVar4 + -7) = iVar6 + 1;
          puVar4[-6] = 0;
          *(int *)(puVar4 + -5) = iVar6 + 2;
          puVar4[-4] = 0;
          *(int *)(puVar4 + -3) = iVar6 + 3;
          puVar4[-2] = 0;
          uVar7 = iVar6 + 4;
          uVar8 = (ulong)uVar7;
          *(uint *)(puVar4 + -1) = uVar7;
          *puVar4 = 0;
          puVar4 = puVar4 + 8;
        } while (uVar7 < uVar10);
      }
    }
  }
  lVar5 = uVar9 * 0x10;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((long)pvVar2 + lVar5);
  *(undefined4 *)((long)pvVar2 + lVar5) = 0xffffffff;
  *(undefined8 *)((long)pvVar2 + lVar5 + 8) = param_2;
  QMutex::unlock();
  return (int)uVar9 + 0x10000;
}

