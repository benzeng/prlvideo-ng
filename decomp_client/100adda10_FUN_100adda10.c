
void FUN_100adda10(long param_1)

{
  void **ppvVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong local_a8;
  QArrayData *local_98;
  undefined1 local_89;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_98 = (QArrayData *)PTR_shared_null_1021e1288;
  ppvVar1 = (void **)(param_1 + 0x20);
  uVar8 = 0;
  local_a8 = 0;
  while( true ) {
    puVar6 = *ppvVar1;
    uVar7 = puVar6[2];
    if (puVar6[3] == uVar7) break;
    if (1 < *puVar6) {
      FUN_100ade320(ppvVar1,puVar6[1]);
      puVar6 = *ppvVar1;
      uVar7 = puVar6[2];
    }
    puVar6 = *(uint **)(puVar6 + (long)(int)uVar7 * 2 + 4);
    uVar7 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    plVar5 = (long *)FUN_100adb590(*(undefined8 *)(param_1 + 0x10),uVar7);
    lVar4 = *plVar5;
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x48) == 0)) {
      puVar6 = *ppvVar1;
      if (1 < *puVar6) {
        FUN_100ade320(ppvVar1,puVar6[1]);
        puVar6 = *ppvVar1;
        if (1 < *puVar6) {
          FUN_100ade320(ppvVar1,puVar6[1]);
          puVar6 = *ppvVar1;
        }
      }
      if (*(void **)(puVar6 + (long)(int)puVar6[2] * 2 + 4) != (void *)0x0) {
        operator_delete(*(void **)(puVar6 + (long)(int)puVar6[2] * 2 + 4));
      }
      QListData::erase(ppvVar1);
    }
    else {
      if ((int)uVar8 == 0 && (int)local_a8 == 0) {
        local_a8 = *(ulong *)(lVar4 + 0x38);
        uVar8 = local_a8 >> 0x20;
      }
      else if (((int)uVar8 != *(int *)(lVar4 + 0x3c)) || ((int)local_a8 != *(int *)(lVar4 + 0x38)))
      break;
      puVar6 = *ppvVar1;
      if (1 < *puVar6) {
        FUN_100ade320(ppvVar1,puVar6[1]);
        puVar6 = *ppvVar1;
        if (1 < *puVar6) {
          FUN_100ade320(ppvVar1,puVar6[1]);
          puVar6 = *ppvVar1;
        }
      }
      if (*(void **)(puVar6 + (long)(int)puVar6[2] * 2 + 4) != (void *)0x0) {
        operator_delete(*(void **)(puVar6 + (long)(int)puVar6[2] * 2 + 4));
      }
      QListData::erase(ppvVar1);
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_78 = 0;
      uStack_70 = 0;
      _local_88 = CONCAT44(*(undefined4 *)(param_1 + 0x48),3);
      uStack_80 = 0x50;
      local_68 = (ulong)uVar7;
      _uStack_60 = CONCAT44(uVar2,uVar3);
      QByteArray::append((char *)&local_98,(int)&local_88);
    }
  }
  if (*(int *)(local_98 + 4) == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    QTimer::stop();
    FUN_100ae40b0(param_1);
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    uVar8 = local_a8 & 0xffffffff | uVar8 << 0x20;
    *(ulong *)(param_1 + 0x50) = uVar8;
    QTimer::start();
    FUN_100ace5e0(*(undefined8 *)(param_1 + 0x18),uVar8,&local_98);
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_89 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100addca4;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_100addca4:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

