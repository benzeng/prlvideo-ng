
undefined8 FUN_1002dd300(long *param_1,uint param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  Data *pDVar15;
  ulong *puVar16;
  uint uVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_70;
  
  if (*(byte *)(*(long *)(param_1[5] + 0x10) + 4) < param_2) {
    return 0;
  }
  plVar18 = param_1 + 4;
  if (((ulong)plVar18 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    plVar18 = (long *)((ulong)plVar18 | 1);
  }
  lVar11 = param_1[3];
  lVar9 = (ulong)param_2 * 0x10;
  plVar1 = (long *)(lVar11 + lVar9);
  plVar2 = (long *)(lVar11 + 8 + lVar9);
  lVar11 = *(long *)(lVar11 + 8 + lVar9);
  if (lVar11 == 0) goto LAB_1002dd488;
  lVar9 = *plVar1;
  if (*(char *)(lVar9 + 4) == '\0') {
LAB_1002dd3d6:
    if (*(long *)(lVar11 + -8) != 0) {
      lVar9 = *(long *)(lVar11 + -8) * 0x28;
      do {
        QMutex::~QMutex((QMutex *)(lVar11 + -8 + lVar9));
        pDVar15 = *(Data **)(lVar11 + -0x10 + lVar9);
        if (*(int *)pDVar15 != -1) {
          if (*(int *)pDVar15 != 0) {
            LOCK();
            *(int *)pDVar15 = *(int *)pDVar15 + -1;
            UNLOCK();
            if (*(int *)pDVar15 != 0) goto LAB_1002dd43b;
            pDVar15 = *(Data **)(lVar11 + -0x10 + lVar9);
          }
          QListData::dispose(pDVar15);
        }
LAB_1002dd43b:
        pDVar15 = *(Data **)(lVar11 + -0x18 + lVar9);
        if (*(int *)pDVar15 != -1) {
          if (*(int *)pDVar15 != 0) {
            LOCK();
            *(int *)pDVar15 = *(int *)pDVar15 + -1;
            UNLOCK();
            if (*(int *)pDVar15 != 0) goto LAB_1002dd463;
            pDVar15 = *(Data **)(lVar11 + -0x18 + lVar9);
          }
          QListData::dispose(pDVar15);
        }
LAB_1002dd463:
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
    operator_delete__((void *)(lVar11 + -8));
  }
  else {
    lVar13 = 0;
    uVar17 = 0;
    do {
      if (*(int *)(lVar11 + lVar13) != 0) {
        (**(code **)(*param_1 + 0xa8))(param_1,lVar11 + lVar13);
        lVar9 = *plVar1;
      }
      uVar17 = uVar17 + 1;
      lVar11 = *plVar2;
      lVar13 = lVar13 + 0x28;
    } while (uVar17 < *(byte *)(lVar9 + 4));
    if (lVar11 != 0) goto LAB_1002dd3d6;
  }
  *plVar2 = 0;
LAB_1002dd488:
  *plVar1 = 0;
  lVar11 = *(long *)(param_1[5] + 0x10);
  uVar6 = *(ushort *)(lVar11 + 2);
  if (uVar6 == 0) {
LAB_1002dd5f8:
    uVar19 = 0;
    if (-1 < DAT_1011c568c) {
      uVar19 = 0;
      FUN_1008e3970("","USB",0,"[%s] Can\'t find interface descriptor (%d,%d) ",param_1[1] + 0x838,
                    param_2,param_3);
    }
LAB_1002dd638:
    if (((ulong)plVar18 & 1) != 0) {
      QReadWriteLock::unlock();
    }
    return uVar19;
  }
  uVar17 = 0;
  while( true ) {
    uVar12 = (ulong)uVar17;
    uVar17 = *(byte *)(lVar11 + uVar12) + uVar17;
    if (((*(char *)(lVar11 + 1 + uVar12) == '\x04') && (*(byte *)(uVar12 + 2 + lVar11) == param_2))
       && (*(byte *)(uVar12 + 3 + lVar11) == param_3)) break;
    if (uVar6 <= uVar17) goto LAB_1002dd5f8;
  }
  *plVar1 = lVar11 + uVar12;
  if (lVar11 + uVar12 == 0) goto LAB_1002dd5f8;
  bVar4 = *(byte *)(uVar12 + 4 + lVar11);
  uVar12 = (ulong)bVar4;
  puVar10 = operator_new__(uVar12 * 0x28 + 8,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar10 == (ulong *)0x0) {
    *plVar2 = 0;
    uVar19 = 0;
    if (-1 < DAT_1011c568c) {
      uVar19 = 0;
      FUN_1008e3970("","USB",0,"[%s] Can\'t alloc memory for ep_info array (%d,%d) ",
                    param_1[1] + 0x838,param_2,param_3);
    }
    goto LAB_1002dd638;
  }
  *puVar10 = uVar12;
  puVar7 = PTR_shared_null_100ba2188;
  puVar16 = puVar10 + 1;
  if (bVar4 != 0) {
    lVar11 = 0;
    auVar20._8_4_ = (int)PTR_shared_null_100ba2188;
    auVar20._0_8_ = PTR_shared_null_100ba2188;
    auVar20._12_4_ = (int)((ulong)PTR_shared_null_100ba2188 >> 0x20);
    do {
      uStack_70 = auVar20._8_8_;
      puVar3 = (undefined8 *)((long)puVar10 + lVar11 + 0x18);
      *puVar3 = puVar7;
      puVar3[1] = uStack_70;
      QMutex::QMutex((QMutex *)((long)puVar10 + lVar11 + 0x28),0);
      lVar11 = lVar11 + 0x28;
    } while (uVar12 * 0x28 != lVar11);
  }
  *plVar2 = (long)puVar16;
  uVar12 = 0;
  while( true ) {
    uVar8 = (uint)uVar12;
    if ((uVar6 <= uVar17) || (*(byte *)(*plVar1 + 4) <= uVar8)) break;
    lVar11 = *(long *)(param_1[5] + 0x10);
    uVar14 = (ulong)uVar17;
    cVar5 = *(char *)(lVar11 + 1 + uVar14);
    if (cVar5 == '\x04') break;
    uVar17 = uVar17 + *(byte *)(lVar11 + uVar14);
    if (cVar5 == '\x05') {
      *(undefined4 *)(puVar16 + uVar12 * 5) = 0;
      puVar10[uVar12 * 5 + 2] = lVar11 + uVar14;
      uVar12 = (ulong)(uVar8 + 1);
    }
  }
  uVar19 = 1;
  if (uVar8 == *(byte *)(*plVar1 + 4)) goto LAB_1002dd638;
  if (-1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] Incorrect configuration descriptor (%d,%d) ",param_1[1] + 0x838,
                  param_2,param_3);
    puVar16 = (ulong *)*plVar2;
  }
  if (puVar16 != (ulong *)0x0) {
    if (puVar16[-1] != 0) {
      lVar11 = puVar16[-1] * 0x28;
      do {
        QMutex::~QMutex((QMutex *)((long)puVar16 + lVar11 + -8));
        pDVar15 = *(Data **)((long)puVar16 + lVar11 + -0x10);
        if (*(int *)pDVar15 != -1) {
          if (*(int *)pDVar15 != 0) {
            LOCK();
            *(int *)pDVar15 = *(int *)pDVar15 + -1;
            UNLOCK();
            if (*(int *)pDVar15 != 0) goto LAB_1002dda5b;
            pDVar15 = *(Data **)((long)puVar16 + lVar11 + -0x10);
          }
          QListData::dispose(pDVar15);
        }
LAB_1002dda5b:
        pDVar15 = *(Data **)((long)puVar16 + lVar11 + -0x18);
        if (*(int *)pDVar15 != -1) {
          if (*(int *)pDVar15 != 0) {
            LOCK();
            *(int *)pDVar15 = *(int *)pDVar15 + -1;
            UNLOCK();
            if (*(int *)pDVar15 != 0) goto LAB_1002dda83;
            pDVar15 = *(Data **)((long)puVar16 + lVar11 + -0x18);
          }
          QListData::dispose(pDVar15);
        }
LAB_1002dda83:
        lVar11 = lVar11 + -0x28;
      } while (lVar11 != 0);
    }
    operator_delete__(puVar16 + -1);
  }
  *plVar2 = 0;
  uVar19 = 0;
  goto LAB_1002dd638;
}

