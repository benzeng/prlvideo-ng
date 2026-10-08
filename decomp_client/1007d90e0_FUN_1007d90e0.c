
long * FUN_1007d90e0(long *param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  int *local_30;
  int local_24;
  int local_20;
  undefined1 local_19;
  
  local_24 = param_4;
  local_20 = param_3;
  uVar4 = QtPrivate::QContainerImplHelper::mid
                    (*(int *)(*param_2 + 0xc) - *(int *)(*param_2 + 8),&local_20,&local_24);
  puVar3 = PTR_shared_null_1021e15e8;
  iVar9 = (int)param_1;
  if (uVar4 == 2) {
    piVar7 = (int *)*param_2;
    *param_1 = (long)piVar7;
    if (*piVar7 != -1) {
      if (*piVar7 == 0) {
        QListData::detach(iVar9);
        lVar5 = *param_1;
        iVar9 = *(int *)(lVar5 + 8);
        if (iVar9 != *(int *)(lVar5 + 0xc)) {
          puVar6 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
          puVar8 = (undefined8 *)(lVar5 + 0x10 + (long)iVar9 * 8);
          lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar9 * -8;
          do {
            piVar7 = (int *)*puVar6;
            *puVar8 = piVar7;
            if (1 < *piVar7 + 1U) {
              LOCK();
              *piVar7 = *piVar7 + 1;
              UNLOCK();
            }
            puVar8 = puVar8 + 1;
            puVar6 = puVar6 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
    }
  }
  else if (uVar4 < 2) {
    *param_1 = (long)PTR_shared_null_1021e15e8;
  }
  else {
    local_30 = (int *)PTR_shared_null_1021e15e8;
    if (local_24 < 1) {
      *param_1 = (long)PTR_shared_null_1021e15e8;
      if ((int)*(undefined8 *)puVar3 != -1) {
        if ((int)*(undefined8 *)puVar3 == 0) {
          QListData::detach(iVar9);
          lVar5 = *param_1;
          iVar9 = *(int *)(lVar5 + 8);
          if (iVar9 != *(int *)(lVar5 + 0xc)) {
            piVar7 = local_30 + (long)local_30[2] * 2 + 4;
            puVar6 = (undefined8 *)(lVar5 + 0x10 + (long)iVar9 * 8);
            lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar9 * -8;
            do {
              piVar2 = *(int **)piVar7;
              *puVar6 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_19 = *piVar2 != 0;
                UNLOCK();
              }
              puVar6 = puVar6 + 1;
              piVar7 = piVar7 + 2;
              lVar5 = lVar5 + -8;
            } while (lVar5 != 0);
          }
        }
        else {
          LOCK();
          *(int *)puVar3 = *(int *)puVar3 + 1;
          local_19 = *(int *)puVar3 != 0;
          UNLOCK();
        }
      }
    }
    else {
      if (*(int *)(PTR_shared_null_1021e15e8 + 4) < local_24) {
        if (*(uint *)PTR_shared_null_1021e15e8 < 2) {
          QListData::realloc((int)&local_30);
        }
        else {
          FUN_100036c40(&local_30);
        }
      }
      local_30[3] = local_24;
      iVar1 = local_30[2];
      if (iVar1 != local_24) {
        puVar6 = (undefined8 *)
                 (*param_2 + 0x10 + ((long)*(int *)(*param_2 + 8) + (long)local_20) * 8);
        piVar7 = local_30 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_24 * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar6;
          *(int **)piVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_19 = *piVar2 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      *param_1 = (long)local_30;
      if (*local_30 != -1) {
        if (*local_30 == 0) {
          QListData::detach(iVar9);
          lVar5 = *param_1;
          iVar9 = *(int *)(lVar5 + 8);
          if (iVar9 != *(int *)(lVar5 + 0xc)) {
            piVar7 = local_30 + (long)local_30[2] * 2 + 4;
            puVar6 = (undefined8 *)(lVar5 + 0x10 + (long)iVar9 * 8);
            lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar9 * -8;
            do {
              piVar2 = *(int **)piVar7;
              *puVar6 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_19 = *piVar2 != 0;
                UNLOCK();
              }
              puVar6 = puVar6 + 1;
              piVar7 = piVar7 + 2;
              lVar5 = lVar5 + -8;
            } while (lVar5 != 0);
          }
        }
        else {
          LOCK();
          *local_30 = *local_30 + 1;
          local_19 = *local_30 != 0;
          UNLOCK();
        }
      }
    }
    FUN_100039a80(&local_30);
  }
  return param_1;
}

