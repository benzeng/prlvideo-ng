
int FUN_100d04270(long param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  QArrayData *pQVar6;
  int iVar7;
  QArrayData *local_38;
  
  local_38 = *(QArrayData **)(param_1 + 0x2d8);
  iVar7 = *(int *)local_38;
  if (iVar7 == 0) {
    if ((int)*(uint *)(local_38 + 8) < 0) {
      local_38 = (QArrayData *)QArrayData::allocate(0x28,8,*(uint *)(local_38 + 8) & 0x7fffffff,0);
      if (local_38 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      local_38[0xb] = (QArrayData)((byte)local_38[0xb] | 0x80);
    }
    else {
      iVar7 = 0;
      local_38 = (QArrayData *)QArrayData::allocate(0x28,8,(long)*(int *)(local_38 + 4));
      if (local_38 == (QArrayData *)0x0) {
        local_38 = (QArrayData *)qBadAlloc();
        goto LAB_100d042b9;
      }
    }
    if ((*(uint *)(local_38 + 8) & 0x7fffffff) != 0) {
      lVar4 = *(long *)(param_1 + 0x2d8);
      if ((long)*(int *)(lVar4 + 4) * 0x28 != 0) {
        puVar3 = (undefined8 *)(lVar4 + *(long *)(lVar4 + 0x10));
        puVar5 = puVar3 + (long)*(int *)(lVar4 + 4) * 5;
        pQVar2 = local_38 + *(long *)(local_38 + 0x10);
        do {
          *(undefined8 *)pQVar2 = *puVar3;
          piVar1 = (int *)puVar3[1];
          *(int **)(pQVar2 + 8) = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          piVar1 = (int *)puVar3[2];
          *(int **)(pQVar2 + 0x10) = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          *(undefined4 *)(pQVar2 + 0x20) = *(undefined4 *)(puVar3 + 4);
          *(undefined8 *)(pQVar2 + 0x18) = puVar3[3];
          puVar3 = puVar3 + 5;
          pQVar2 = pQVar2 + 0x28;
        } while (puVar3 != puVar5);
        lVar4 = *(long *)(param_1 + 0x2d8);
      }
      *(undefined4 *)(local_38 + 4) = *(undefined4 *)(lVar4 + 4);
    }
  }
  else {
LAB_100d042b9:
    if (iVar7 != -1) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      UNLOCK();
      local_38 = *(QArrayData **)(param_1 + 0x2d8);
    }
  }
  lVar4 = (long)*(int *)(local_38 + 4) * 0x28;
  iVar7 = 0;
  if (lVar4 != 0) {
    pQVar2 = local_38 + *(long *)(local_38 + 0x10) + 1;
    iVar7 = 0;
    do {
      if (pQVar2[-1] != (QArrayData)0x0) {
        iVar7 = iVar7 + (uint)(byte)*pQVar2;
      }
      pQVar2 = pQVar2 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return iVar7;
      }
    }
    lVar4 = (long)*(int *)(local_38 + 4) * 0x28;
    if (lVar4 != 0) {
      pQVar2 = local_38 + *(long *)(local_38 + 0x10);
      do {
        pQVar6 = *(QArrayData **)(pQVar2 + 0x10);
        if (*(int *)pQVar6 != -1) {
          if (*(int *)pQVar6 != 0) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            UNLOCK();
            if (*(int *)pQVar6 != 0) goto LAB_100d04460;
            pQVar6 = *(QArrayData **)(pQVar2 + 0x10);
          }
          QArrayData::deallocate(pQVar6,2,8);
        }
LAB_100d04460:
        pQVar6 = *(QArrayData **)(pQVar2 + 8);
        if (*(int *)pQVar6 != -1) {
          if (*(int *)pQVar6 != 0) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            UNLOCK();
            if (*(int *)pQVar6 != 0) goto LAB_100d04490;
            pQVar6 = *(QArrayData **)(pQVar2 + 8);
          }
          QArrayData::deallocate(pQVar6,2,8);
        }
LAB_100d04490:
        pQVar2 = pQVar2 + 0x28;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
    }
    QArrayData::deallocate(local_38,0x28,8);
  }
  return iVar7;
}

