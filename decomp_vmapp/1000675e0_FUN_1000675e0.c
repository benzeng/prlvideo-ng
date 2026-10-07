
void FUN_1000675e0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long *local_58;
  long *local_50;
  undefined1 local_41;
  undefined1 local_40 [8];
  uint *local_38;
  
  QMutex::lock();
  puVar1 = (undefined8 *)(param_1 + 0x70);
  uVar2 = param_1 + 0x50;
  do {
    puVar7 = (uint *)*puVar1;
    uVar8 = puVar7[2];
    if (puVar7[3] == uVar8) break;
    if (1 < *puVar7) {
      FUN_100069e30(puVar1,puVar7[1]);
      puVar7 = (uint *)*puVar1;
      uVar8 = puVar7[2];
    }
    local_50 = (long *)**(long **)(puVar7 + (long)(int)uVar8 * 2 + 4);
    if (local_50 != (long *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    (**(code **)(**(long **)(param_1 + 0x28) + 0xb8))
              (&local_58,*(long **)(param_1 + 0x28),&local_50);
    plVar4 = local_58;
    if ((local_58 != (long *)0x0) && (local_58[2] != 0)) {
      local_41 = 0;
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
      FUN_100796350(local_58[2],0xffffffff,&local_41);
      LOCK();
      plVar3 = plVar4 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    if ((local_58 == (long *)0x0) || (local_58[2] == 0)) {
LAB_1000676fb:
      uVar9 = uVar2;
      if ((uVar2 & 1) == 0) {
        QReadWriteLock::lockForRead();
        uVar9 = uVar2 | 1;
      }
      iVar6 = *(int *)(param_1 + 0x58);
      if ((uVar9 & 1) != 0) {
        QReadWriteLock::unlock();
      }
      iVar10 = 3;
      if (iVar6 == 0) goto LAB_10006772f;
    }
    else {
      iVar6 = FUN_1007965e0();
      if (iVar6 != 0) goto LAB_1000676fb;
LAB_10006772f:
      puVar7 = (uint *)*puVar1;
      if (1 < *puVar7) {
        FUN_100069e30(puVar1,puVar7[1]);
        puVar7 = (uint *)*puVar1;
      }
      local_38 = puVar7 + (long)(int)puVar7[2] * 2 + 4;
      FUN_100069ee0(local_40,puVar1,&local_38);
      iVar10 = 0;
    }
    if (local_58 != (long *)0x0) {
      LOCK();
      plVar4 = local_58 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
  } while (iVar10 == 0);
  QMutex::unlock();
  return;
}

