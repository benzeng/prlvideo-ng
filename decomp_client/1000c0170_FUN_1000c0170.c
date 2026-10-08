
undefined8 * FUN_1000c0170(undefined8 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 *puVar12;
  int *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (DAT_10226cd88 == 0) {
    DAT_10226cd88 = FUN_1000bf7f0("CSharedApps::LaunchAppData",0xffffffffffffffff,1);
  }
  uVar5 = DAT_10226cd88;
  uVar7 = QVariant::userType();
  puVar4 = PTR_shared_null_1021e15e8;
  puVar3 = PTR_shared_null_1021e1288;
  if (uVar5 == uVar7) {
    puVar8 = (undefined8 *)QVariant::constData();
    piVar11 = (int *)*puVar8;
    *param_1 = piVar11;
    if (1 < *piVar11 + 1U) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      local_31 = *piVar11 != 0;
      UNLOCK();
    }
    piVar11 = (int *)puVar8[1];
    param_1[1] = piVar11;
    if (*piVar11 != -1) {
      if (*piVar11 == 0) {
        QListData::detach((int)(param_1 + 1));
        lVar9 = param_1[1];
        iVar1 = *(int *)(lVar9 + 8);
        if (iVar1 != *(int *)(lVar9 + 0xc)) {
          puVar10 = (undefined8 *)(puVar8[1] + 0x10 + (long)*(int *)(puVar8[1] + 8) * 8);
          puVar12 = (undefined8 *)(lVar9 + 0x10 + (long)iVar1 * 8);
          lVar9 = (long)*(int *)(lVar9 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar11 = (int *)*puVar10;
            *puVar12 = piVar11;
            if (1 < *piVar11 + 1U) {
              LOCK();
              *piVar11 = *piVar11 + 1;
              UNLOCK();
            }
            puVar12 = puVar12 + 1;
            puVar10 = puVar10 + 1;
            lVar9 = lVar9 + -8;
          } while (lVar9 != 0);
        }
      }
      else {
        LOCK();
        *piVar11 = *piVar11 + 1;
        UNLOCK();
      }
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar8 + 2);
  }
  else {
    local_48 = (int *)PTR_shared_null_1021e15e8;
    cVar6 = QVariant::convert(param_2,(void *)(ulong)uVar5);
    if (cVar6 == '\0') {
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      *param_1 = puVar3;
      param_1[1] = puVar4;
    }
    else {
      *param_1 = puVar3;
      if (1 < *(int *)puVar3 + 1U) {
        LOCK();
        *(int *)puVar3 = *(int *)puVar3 + 1;
        local_31 = *(int *)puVar3 != 0;
        UNLOCK();
      }
      param_1[1] = local_48;
      if (*local_48 != -1) {
        if (*local_48 == 0) {
          QListData::detach((int)(param_1 + 1));
          lVar9 = param_1[1];
          iVar1 = *(int *)(lVar9 + 8);
          if (iVar1 != *(int *)(lVar9 + 0xc)) {
            piVar11 = local_48 + (long)local_48[2] * 2 + 4;
            puVar8 = (undefined8 *)(lVar9 + 0x10 + (long)iVar1 * 8);
            lVar9 = (long)*(int *)(lVar9 + 0xc) * 8 + (long)iVar1 * -8;
            do {
              piVar2 = *(int **)piVar11;
              *puVar8 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_31 = *piVar2 != 0;
                UNLOCK();
              }
              puVar8 = puVar8 + 1;
              piVar11 = piVar11 + 2;
              lVar9 = lVar9 + -8;
            } while (lVar9 != 0);
          }
        }
        else {
          LOCK();
          *local_48 = *local_48 + 1;
          local_31 = *local_48 != 0;
          UNLOCK();
        }
      }
      *(undefined4 *)(param_1 + 2) = local_40;
    }
    FUN_100039a80(&local_48);
    if (*(int *)puVar3 != -1) {
      if (*(int *)puVar3 != 0) {
        LOCK();
        *(int *)puVar3 = *(int *)puVar3 + -1;
        UNLOCK();
        if (*(int *)puVar3 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)puVar3,2,8);
    }
  }
  return param_1;
}

