
void FUN_1005251e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (*(uint *)*param_1 < 2) {
    puVar3 = (undefined8 *)QListData::append();
    puVar4 = operator_new(0x18);
    piVar2 = (int *)*param_2;
    *puVar4 = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    piVar2 = (int *)param_2[1];
    puVar4[1] = piVar2;
    if (*piVar2 != -1) {
      if (*piVar2 == 0) {
        QListData::detach((int)(puVar4 + 1));
        lVar5 = puVar4[1];
        iVar1 = *(int *)(lVar5 + 8);
        if (iVar1 != *(int *)(lVar5 + 0xc)) {
          puVar6 = (undefined8 *)(param_2[1] + 0x10 + (long)*(int *)(param_2[1] + 8) * 8);
          puVar7 = (undefined8 *)(lVar5 + 0x10 + (long)iVar1 * 8);
          lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar2 = (int *)*puVar6;
            *puVar7 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              UNLOCK();
            }
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_100525480(param_1,0x7fffffff,1);
    puVar4 = operator_new(0x18);
    piVar2 = (int *)*param_2;
    *puVar4 = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    piVar2 = (int *)param_2[1];
    puVar4[1] = piVar2;
    if (*piVar2 != -1) {
      if (*piVar2 == 0) {
        QListData::detach((int)(puVar4 + 1));
        lVar5 = puVar4[1];
        iVar1 = *(int *)(lVar5 + 8);
        if (iVar1 != *(int *)(lVar5 + 0xc)) {
          puVar6 = (undefined8 *)(param_2[1] + 0x10 + (long)*(int *)(param_2[1] + 8) * 8);
          puVar7 = (undefined8 *)(lVar5 + 0x10 + (long)iVar1 * 8);
          lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar2 = (int *)*puVar6;
            *puVar7 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              UNLOCK();
            }
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
    }
  }
  puVar4[2] = param_2[2];
  *puVar3 = puVar4;
  return;
}

