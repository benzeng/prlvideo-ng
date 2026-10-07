
undefined1 FUN_100558390(long param_1,undefined8 param_2,ulong param_3,uint param_4,void *param_5)

{
  uint *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined1 uVar14;
  void *pvVar15;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  lVar5 = *(long *)(param_1 + 0x10);
  lVar13 = lVar2;
  if (lVar5 == 0) {
    uVar14 = 0;
    FUN_1008e3970("","TransMem",0,"Failed to write an uncompressed block");
    goto LAB_1005587d5;
  }
  uVar6 = *(uint *)(lVar5 + 4);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3;
  auVar3 = auVar3 / ZEXT416(uVar6);
  uVar4 = auVar3._0_8_;
  uVar9 = uVar4 >> 5 & 0x7ffffff;
  if ((*(uint *)(*(long *)(param_1 + 0x78) + uVar9 * 4) >> (auVar3[0] & 0x1f) & 1) != 0) {
    uVar14 = 0;
    FUN_1008e3970("","TransMem",0,"Failed to write uncompressed block %u: already processed",
                  uVar4 & 0xffffffff);
    goto LAB_1005587d5;
  }
  uVar7 = *(uint *)(lVar5 + 0x24) >> 3;
  if (7 < *(uint *)(lVar5 + 0x24)) {
    uVar11 = 0;
    do {
      if (*(char *)(*(long *)(lVar5 + 0x48) + uVar11 + uVar7 * auVar3._0_4_) != -1) {
        lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x20);
        if ((lVar5 == 0) || (pvVar15 = (void *)(lVar5 + param_3), pvVar15 == (void *)0x0)) {
          uVar14 = 0;
          FUN_1008e3970("","TransMem",0,"Failed to get a write destination for block %u",
                        uVar4 & 0xffffffff);
          goto LAB_1005587d5;
        }
        uVar7 = 0;
        lVar5 = *(long *)(param_1 + 0x10);
        uVar6 = *(uint *)(lVar5 + 0x24);
        if (uVar6 == 0) goto LAB_100558681;
        lVar13 = *(long *)(lVar5 + 0x48);
        uVar12 = 0;
        uVar7 = 0;
        pvVar10 = param_5;
        goto LAB_100558610;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar7);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x20);
  if ((lVar5 != 0) && (lVar5 + param_3 != 0)) {
    uVar6 = *(uint *)(*(long *)(param_1 + 0x10) + 4);
  }
  if (uVar6 != param_4) {
    uVar14 = 0;
    FUN_1008e3970("","TransMem",0,"Failed to write uncompressed block %u: invalid data size %u",
                  uVar4 & 0xffffffff,param_4);
    goto LAB_1005587d5;
  }
  goto LAB_1005587b8;
LAB_100558610:
  do {
    if ((*(uint *)((ulong)((uVar6 >> 3) * auVar3._0_4_) + lVar13 + (ulong)(uVar12 >> 5) * 4) >>
         (uVar12 & 0x1f) & 1) != 0) {
      uVar7 = uVar7 + 0x1000;
      if (param_4 < uVar7) break;
      _memcpy(pvVar15,pvVar10,0x1000);
      pvVar10 = (void *)((long)pvVar10 + 0x1000);
      lVar5 = *(long *)(param_1 + 0x10);
    }
    pvVar15 = (void *)((long)pvVar15 + 0x1000);
    uVar12 = uVar12 + 1;
  } while (uVar12 < *(uint *)(lVar5 + 0x24));
LAB_100558681:
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (uVar7 != param_4) {
    uVar14 = 0;
    FUN_1008e3970("","TransMem",0,
                  "Failed to write uncompressed block %u: fragmented data size mismatch (%u != %u)",
                  uVar4 & 0xffffffff,uVar7,param_4);
    goto LAB_1005587d5;
  }
  lVar5 = *(long *)(param_1 + 0x98);
  uVar6 = 0;
  do {
    lVar8 = (ulong)uVar6 * 0x10;
    if ((*(char *)(lVar5 + 8 + lVar8) != '\0') && (*(void **)(lVar5 + lVar8) == param_5)) {
      *(undefined1 *)(lVar5 + 8 + lVar8) = 0;
      goto LAB_1005587b8;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 <= *(uint *)(param_1 + 0x84));
  FUN_1008e3970("","TransMem",0,"CSnapshotEngineCompressed::put_buffer() not found");
LAB_1005587b8:
  puVar1 = (uint *)(*(long *)(param_1 + 0x78) + uVar9 * 4);
  *puVar1 = *puVar1 | 1 << (auVar3[0] & 0x1f);
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  uVar14 = 1;
  QWaitCondition::wakeAll();
LAB_1005587d5:
  QMutex::unlock();
  if (lVar13 != lVar2) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar14;
}

