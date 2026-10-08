
void * FUN_100a701d0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined2 uVar7;
  void *pvVar8;
  uint *puVar9;
  bad_alloc *this;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long *local_40 [2];
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  QReadWriteLock::QReadWriteLock((QReadWriteLock *)(param_1 + 2),0);
  plVar1 = param_1 + 3;
  param_1[3] = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  pvVar8 = operator_new(0x78);
  FUN_100a700d0(pvVar8);
  param_1[7] = pvVar8;
  puVar9 = (uint *)param_1[3];
  if ((puVar9[2] & 0x7ffffffe) < 0x32) {
    FUN_100a71c90(plVar1,puVar9[1],0x32,0);
    puVar9 = (uint *)*plVar1;
  }
  uVar12 = 0;
  if (*puVar9 < 2) {
    *(byte *)((long)puVar9 + 0xb) = *(byte *)((long)puVar9 + 0xb) | 0x80;
    uVar12 = 0;
  }
  do {
    pvVar8 = operator_new(0x78);
    FUN_100a700d0(pvVar8);
    puVar9 = (uint *)*plVar1;
    uVar2 = puVar9[1];
    uVar10 = uVar2 + 1;
    uVar11 = puVar9[2] & 0x7fffffff;
    if ((*puVar9 < 2) && (uVar10 <= uVar11)) {
      *(void **)((long)puVar9 + (long)(int)uVar2 * 8 + *(long *)(puVar9 + 4)) = pvVar8;
    }
    else {
      uVar6 = uVar11;
      if (uVar11 < uVar10) {
        uVar6 = uVar10;
      }
      FUN_100a71c90(plVar1,(long)(int)uVar2,uVar6,(ulong)(uVar11 < uVar10) << 3);
      lVar4 = *plVar1;
      *(void **)(*(long *)(lVar4 + 0x10) + lVar4 + (long)*(int *)(lVar4 + 4) * 8) = pvVar8;
    }
    *(int *)(*plVar1 + 4) = *(int *)(*plVar1 + 4) + 1;
    uVar12 = uVar12 + 1;
  } while (uVar12 < 0x32);
  FUN_100a68d20(local_40,10,0,&DAT_1023117c8,1);
  if ((local_40[0] != (long *)0x0) && (local_40[0][2] != 0)) {
    uVar7 = FUN_100a6b290();
    plVar1 = local_40[0];
    pvVar8 = (void *)local_40[0][2];
    *(undefined2 *)((long)pvVar8 + 0x50) = uVar7;
    if (local_40[0] == (long *)0x0) {
      pvVar8 = (void *)0x0;
    }
    pvVar8 = _memcpy((void *)(param_1[7] + 8),pvVar8,0x52);
    lVar4 = param_1[7];
    if (plVar1 != (long *)0x0) {
      LOCK();
      puVar9 = (uint *)(plVar1 + 1);
      pvVar8 = (void *)(ulong)*puVar9;
      *puVar9 = *puVar9 + 1;
      UNLOCK();
    }
    plVar5 = *(long **)(lVar4 + 0x60);
    *(long **)(lVar4 + 0x60) = plVar1;
    if (plVar5 != (long *)0x0) {
      LOCK();
      puVar9 = (uint *)(plVar5 + 1);
      uVar12 = *puVar9;
      pvVar8 = (void *)(ulong)uVar12;
      *puVar9 = *puVar9 - 1;
      UNLOCK();
      if (uVar12 == 1) {
        pvVar8 = (void *)(**(code **)(*plVar5 + 0x10))();
      }
    }
    if (local_40[0] != (long *)0x0) {
      LOCK();
      puVar9 = (uint *)(local_40[0] + 1);
      uVar12 = *puVar9;
      pvVar8 = (void *)(ulong)uVar12;
      *puVar9 = *puVar9 - 1;
      UNLOCK();
      if (uVar12 == 1) {
        pvVar8 = (void *)(**(code **)(*local_40[0] + 0x10))();
      }
    }
    return pvVar8;
  }
  this = (bad_alloc *)___cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_1021e1780,PTR__bad_alloc_1021e1610);
}

