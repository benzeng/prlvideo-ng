
void FUN_1007a1910(long *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  QArrayData *pQVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  long *plVar9;
  
  puVar1 = (uint *)*param_1;
  uVar10 = puVar1[1] + 1;
  uVar8 = puVar1[2] & 0x7fffffff;
  plVar9 = (long *)(ulong)uVar8;
  if ((*puVar1 < 2) && (uVar10 <= uVar8)) {
    plVar9 = (long *)((long)puVar1 + (long)(int)puVar1[1] * 8 + *(long *)(puVar1 + 4));
    piVar5 = (int *)*param_2;
    iVar6 = *piVar5;
    if (iVar6 == 0) {
      if (piVar5[2] < 0) {
        lVar3 = QArrayData::allocate(8,8,piVar5[2] & 0x7fffffff,0);
        *plVar9 = lVar3;
        if (lVar3 == 0) {
          qBadAlloc();
          lVar3 = *plVar9;
        }
        *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
      }
      else {
        lVar3 = QArrayData::allocate(8,8,(long)piVar5[1],0);
        *plVar9 = lVar3;
        if (lVar3 == 0) {
          qBadAlloc();
        }
      }
      lVar3 = *plVar9;
      if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
        lVar2 = *param_2;
        _memcpy((void *)(lVar3 + *(long *)(lVar3 + 0x10)),(void *)(*(long *)(lVar2 + 0x10) + lVar2),
                (long)*(int *)(lVar2 + 4) << 3);
        *(undefined4 *)(*plVar9 + 4) = *(undefined4 *)(*param_2 + 4);
      }
      goto LAB_1007a1bfd;
    }
LAB_1007a19d4:
    if (iVar6 == -1) {
      *plVar9 = (long)piVar5;
    }
    else {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      *plVar9 = *param_2;
    }
    goto LAB_1007a1bfd;
  }
  pQVar4 = (QArrayData *)*param_2;
  if (*(int *)pQVar4 == 0) {
    if ((int)*(uint *)(pQVar4 + 8) < 0) {
      pQVar4 = (QArrayData *)QArrayData::allocate(8,8,*(uint *)(pQVar4 + 8) & 0x7fffffff,0);
      if (pQVar4 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      pQVar4[0xb] = (QArrayData)((byte)pQVar4[0xb] | 0x80);
    }
    else {
      iVar6 = 0;
      pQVar4 = (QArrayData *)QArrayData::allocate(8,8,(long)*(int *)(pQVar4 + 4));
      if (pQVar4 == (QArrayData *)0x0) {
        piVar5 = (int *)qBadAlloc();
        goto LAB_1007a19d4;
      }
    }
    if ((*(uint *)(pQVar4 + 8) & 0x7fffffff) != 0) {
      lVar3 = *param_2;
      _memcpy(pQVar4 + *(long *)(pQVar4 + 0x10),(void *)(*(long *)(lVar3 + 0x10) + lVar3),
              (long)*(int *)(lVar3 + 4) << 3);
      *(undefined4 *)(pQVar4 + 4) = *(undefined4 *)(*param_2 + 4);
    }
  }
  else if (*(int *)pQVar4 != -1) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    UNLOCK();
    pQVar4 = (QArrayData *)*param_2;
  }
  iVar6 = *(int *)(*param_1 + 4);
  if (uVar8 < uVar10) {
    uVar7 = iVar6 + 1;
  }
  else {
    uVar7 = *(uint *)(*param_1 + 8) & 0x7fffffff;
  }
  FUN_1007a20d0(param_1,iVar6,uVar7,(ulong)(uVar8 < uVar10) << 3);
  lVar3 = *param_1;
  plVar9 = (long *)(*(long *)(lVar3 + 0x10) + lVar3 + (long)*(int *)(lVar3 + 4) * 8);
  if (*(int *)pQVar4 == -1) {
LAB_1007a1b6d:
    *plVar9 = (long)pQVar4;
  }
  else {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      UNLOCK();
      goto LAB_1007a1b6d;
    }
    if ((int)*(uint *)(pQVar4 + 8) < 0) {
      lVar3 = QArrayData::allocate(8,8,*(uint *)(pQVar4 + 8) & 0x7fffffff,0);
      *plVar9 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar9;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)*(int *)(pQVar4 + 4),0);
      *plVar9 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar9;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      _memcpy((void *)(lVar3 + *(long *)(lVar3 + 0x10)),pQVar4 + *(long *)(pQVar4 + 0x10),
              (long)*(int *)(pQVar4 + 4) << 3);
      *(undefined4 *)(*plVar9 + 4) = *(undefined4 *)(pQVar4 + 4);
    }
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1007a1bfd;
    }
    QArrayData::deallocate(pQVar4,8,8);
  }
LAB_1007a1bfd:
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
  return;
}

