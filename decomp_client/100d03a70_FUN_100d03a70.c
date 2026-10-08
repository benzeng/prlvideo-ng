
undefined8 * FUN_100d03a70(undefined8 *param_1,long *param_2,int param_3)

{
  long lVar1;
  int *piVar2;
  QArrayData *pQVar3;
  undefined8 *puVar4;
  QArrayData *pQVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  long lVar9;
  QArrayData *local_40;
  
  local_40 = (QArrayData *)*param_2;
  iVar6 = *(int *)local_40;
  if (iVar6 == 0) {
    if ((int)*(uint *)(local_40 + 8) < 0) {
      local_40 = (QArrayData *)QArrayData::allocate(0x28,8,*(uint *)(local_40 + 8) & 0x7fffffff,0);
      if (local_40 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      local_40[0xb] = (QArrayData)((byte)local_40[0xb] | 0x80);
    }
    else {
      iVar6 = 0;
      local_40 = (QArrayData *)QArrayData::allocate(0x28,8,(long)*(int *)(local_40 + 4));
      if (local_40 == (QArrayData *)0x0) {
        local_40 = (QArrayData *)qBadAlloc();
        goto LAB_100d03abc;
      }
    }
    if ((*(uint *)(local_40 + 8) & 0x7fffffff) != 0) {
      lVar9 = *param_2;
      if ((long)*(int *)(lVar9 + 4) * 0x28 != 0) {
        puVar4 = (undefined8 *)(lVar9 + *(long *)(lVar9 + 0x10));
        puVar7 = puVar4 + (long)*(int *)(lVar9 + 4) * 5;
        pQVar3 = local_40 + *(long *)(local_40 + 0x10);
        do {
          *(undefined8 *)pQVar3 = *puVar4;
          piVar2 = (int *)puVar4[1];
          *(int **)(pQVar3 + 8) = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          piVar2 = (int *)puVar4[2];
          *(int **)(pQVar3 + 0x10) = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          *(undefined4 *)(pQVar3 + 0x20) = *(undefined4 *)(puVar4 + 4);
          *(undefined8 *)(pQVar3 + 0x18) = puVar4[3];
          puVar4 = puVar4 + 5;
          pQVar3 = pQVar3 + 0x28;
        } while (puVar4 != puVar7);
        lVar9 = *param_2;
      }
      *(undefined4 *)(local_40 + 4) = *(undefined4 *)(lVar9 + 4);
    }
  }
  else {
LAB_100d03abc:
    if (iVar6 != -1) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      UNLOCK();
      local_40 = (QArrayData *)*param_2;
    }
  }
  if ((long)*(int *)(local_40 + 4) * 0x28 != 0) {
    pQVar3 = local_40 + *(long *)(local_40 + 0x10);
    pQVar5 = pQVar3 + (long)*(int *)(local_40 + 4) * 0x28;
    iVar6 = 0;
    do {
      bVar8 = false;
      while (!bVar8) {
        if (*pQVar3 != (QArrayData)0x0) {
          iVar6 = iVar6 + (uint)(byte)pQVar3[1];
        }
        bVar8 = true;
        if (iVar6 == param_3 + 1) {
          *param_1 = *(undefined8 *)pQVar3;
          piVar2 = *(int **)(pQVar3 + 8);
          param_1[1] = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          piVar2 = *(int **)(pQVar3 + 0x10);
          param_1[2] = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(pQVar3 + 0x20);
          param_1[3] = *(undefined8 *)(pQVar3 + 0x18);
          if (*(int *)local_40 == -1) {
            return param_1;
          }
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            UNLOCK();
            if (*(int *)local_40 != 0) {
              return param_1;
            }
          }
          lVar9 = (long)*(int *)(local_40 + 4) * 0x28;
          if (lVar9 == 0) goto LAB_100d03dfa;
          pQVar3 = local_40 + *(long *)(local_40 + 0x10);
          goto LAB_100d03d90;
        }
      }
      pQVar3 = pQVar3 + 0x28;
    } while (pQVar3 != pQVar5);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100d03cac;
    }
    lVar9 = (long)*(int *)(local_40 + 4) * 0x28;
    if (lVar9 != 0) {
      pQVar3 = local_40 + *(long *)(local_40 + 0x10);
      do {
        pQVar5 = *(QArrayData **)(pQVar3 + 0x10);
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            UNLOCK();
            if (*(int *)pQVar5 != 0) goto LAB_100d03c60;
            pQVar5 = *(QArrayData **)(pQVar3 + 0x10);
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
LAB_100d03c60:
        pQVar5 = *(QArrayData **)(pQVar3 + 8);
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            UNLOCK();
            if (*(int *)pQVar5 != 0) goto LAB_100d03c90;
            pQVar5 = *(QArrayData **)(pQVar3 + 8);
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
LAB_100d03c90:
        pQVar3 = pQVar3 + 0x28;
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
    QArrayData::deallocate(local_40,0x28,8);
  }
LAB_100d03cac:
  lVar9 = *param_2;
  lVar1 = *(long *)(lVar9 + 0x10);
  *param_1 = *(undefined8 *)(lVar9 + lVar1);
  piVar2 = *(int **)(lVar9 + 8 + lVar1);
  param_1[1] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = *(int **)(lVar1 + 0x10 + lVar9);
  param_1[2] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar1 + 0x20 + lVar9);
  param_1[3] = *(undefined8 *)(lVar1 + 0x18 + lVar9);
  return param_1;
LAB_100d03d90:
  pQVar5 = *(QArrayData **)(pQVar3 + 0x10);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_100d03dc0;
      pQVar5 = *(QArrayData **)(pQVar3 + 0x10);
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100d03dc0:
  pQVar5 = *(QArrayData **)(pQVar3 + 8);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_100d03df0;
      pQVar5 = *(QArrayData **)(pQVar3 + 8);
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100d03df0:
  pQVar3 = pQVar3 + 0x28;
  lVar9 = lVar9 + -0x28;
  if (lVar9 == 0) {
LAB_100d03dfa:
    QArrayData::deallocate(local_40,0x28,8);
    return param_1;
  }
  goto LAB_100d03d90;
}

