
undefined8 * FUN_1007942d0(undefined8 *param_1,ulong param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  Node *pNVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  Node *pNVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  
  uVar11 = param_2;
  if ((param_2 != 0) && ((param_2 & 1) == 0)) {
    QReadWriteLock::lockForRead();
    uVar11 = param_2 | 1;
  }
  pNVar3 = *(Node **)(param_2 + 0x18);
  uVar2 = *(uint *)(pNVar3 + 0x14);
  if (uVar2 < 0x15) {
    uVar13 = uVar2 << 4 | 9;
    *param_3 = uVar13;
    puVar6 = operator_new__((ulong)uVar13,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar7 = operator_new(0x18);
    *(undefined4 *)(plVar7 + 1) = 1;
    plVar7[2] = (long)puVar6;
    *plVar7 = (long)&PTR_FUN_100bef320;
    if (puVar6 == (undefined4 *)0x0) {
      *param_1 = 0;
    }
    else {
      *puVar6 = *(undefined4 *)(param_2 + 8);
      puVar6[1] = *(undefined4 *)(param_2 + 0xc);
      *(char *)(puVar6 + 2) = (char)uVar2;
      iVar9 = *(int *)(pNVar3 + 0x20);
      if (iVar9 != 0) {
        plVar10 = *(long **)(pNVar3 + 8);
        do {
          pNVar8 = (Node *)*plVar10;
          if (pNVar8 != pNVar3) {
            if (pNVar8 != pNVar3) {
              uVar12 = 0;
              do {
                uVar4 = *(undefined8 *)(pNVar8 + 0x14);
                puVar1 = (undefined8 *)((long)puVar6 + uVar12 * 0x10 + 9);
                *puVar1 = *(undefined8 *)(pNVar8 + 0xc);
                puVar1[1] = uVar4;
                pNVar8 = (Node *)QHashData::nextNode(pNVar8);
                uVar12 = (ulong)((int)uVar12 + 1);
              } while (pNVar8 != *(Node **)(param_2 + 0x18));
            }
            break;
          }
          iVar9 = iVar9 + -1;
          plVar10 = plVar10 + 1;
        } while (iVar9 != 0);
      }
      *param_1 = plVar7;
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    LOCK();
    plVar10 = plVar7 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  else {
    *param_1 = 0;
  }
  if ((uVar11 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return param_1;
}

