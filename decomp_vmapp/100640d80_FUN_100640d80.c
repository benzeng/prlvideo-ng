
QListData * FUN_100640d80(QListData *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint *local_28;
  undefined1 local_1a;
  undefined1 local_19;
  
  local_28 = (uint *)*param_2;
  if (local_28[3] != local_28[2]) {
    puVar7 = *(uint **)param_1;
    if (puVar7[3] == puVar7[2]) {
      if (puVar7 != local_28) {
        if (*local_28 != 0xffffffff) {
          if (*local_28 == 0) {
            QListData::detach((int)&local_28);
            uVar1 = local_28[2];
            if (uVar1 != local_28[3]) {
              puVar6 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
              puVar7 = local_28 + (long)(int)uVar1 * 2 + 4;
              lVar5 = (long)(int)local_28[3] * 8 + (long)(int)uVar1 * -8;
              do {
                piVar3 = (int *)*puVar6;
                *(int **)puVar7 = piVar3;
                if (1 < *piVar3 + 1U) {
                  LOCK();
                  *piVar3 = *piVar3 + 1;
                  local_19 = *piVar3 != 0;
                  UNLOCK();
                }
                puVar7 = puVar7 + 2;
                puVar6 = puVar6 + 1;
                lVar5 = lVar5 + -8;
              } while (lVar5 != 0);
            }
          }
          else {
            LOCK();
            *local_28 = *local_28 + 1;
            local_1a = *local_28 != 0;
            UNLOCK();
          }
        }
        puVar7 = *(uint **)param_1;
        *(uint **)param_1 = local_28;
        local_28 = puVar7;
        FUN_100013180(&local_28);
      }
    }
    else {
      if (*puVar7 < 2) {
        lVar5 = QListData::append(param_1);
      }
      else {
        lVar5 = FUN_10000c800(param_1,0x7fffffff);
      }
      lVar4 = *(long *)param_1;
      iVar2 = *(int *)(lVar4 + 0xc);
      if (lVar5 != lVar4 + 0x10 + (long)iVar2 * 8) {
        puVar6 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        lVar5 = lVar5 + -0x10;
        do {
          piVar3 = (int *)*puVar6;
          *(int **)(lVar5 + 0x10) = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            UNLOCK();
          }
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + 8;
        } while (lVar4 + (long)iVar2 * 8 != lVar5);
      }
    }
  }
  return param_1;
}

