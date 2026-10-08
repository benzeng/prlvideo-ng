
void FUN_100794eb0(long param_1,ulong param_2)

{
  QString *pQVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  char cVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  QString *pQVar12;
  QString *pQVar13;
  QArrayData *local_a0;
  QString local_98;
  int *local_90;
  long *local_88;
  long *local_80;
  undefined4 local_78;
  int *local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  undefined *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    return;
  }
  FUN_10015a320(param_2);
  lVar7 = CDispUser::getApplianceConfigs();
  if (lVar7 == 0) {
    return;
  }
  local_40 = PTR_shared_null_1021e15e8;
  local_60 = *(Data **)(lVar7 + 0x98);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar9 = (long)*(int *)(local_60 + 8);
      lVar4 = *(long *)(lVar7 + 0x98);
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_60 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_60 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_60 + 0xc))) {
        _memcpy(local_60 + lVar9 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      lVar4 = *(long *)local_58;
      if (lVar4 != 0) {
        CAppliance::getApplianceId();
        lVar9 = FUN_100795470(param_1,param_2,&local_68);
        if (lVar9 == 0) {
          FUN_100795720(param_1,param_2,lVar4);
        }
        FUN_1000341d0(&local_40,&local_68);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10079500f;
          }
          QArrayData::deallocate(local_68,2,8);
        }
      }
LAB_10079500f:
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100795059;
    }
    QListData::dispose(local_60);
  }
LAB_100795059:
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if ((*(int *)((long)puVar5 + 0x14) != 0) && (*(uint *)(puVar5 + 4) != 0)) {
    uVar8 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)puVar5 + 0x24);
    for (puVar11 = *(undefined8 **)(puVar5[1] + ((ulong)uVar8 % (ulong)*(uint *)(puVar5 + 4)) * 8);
        puVar11 != puVar5; puVar11 = (undefined8 *)*puVar11) {
      if ((*(uint *)(puVar11 + 1) == uVar8) && (puVar11[2] == param_2)) {
        if (puVar11 != puVar5) {
          FUN_100797cb0(&local_70,puVar11 + 3);
          goto LAB_1007950c6;
        }
        break;
      }
    }
  }
  local_70 = (int *)PTR_shared_null_1021e15e8;
LAB_1007950c6:
  if ((local_70[3] != local_70[2]) &&
     (local_70[3] - local_70[2] !=
      *(int *)(*(long *)(lVar7 + 0x98) + 0xc) - *(int *)(*(long *)(lVar7 + 0x98) + 8))) {
    FUN_100797cb0(&local_90,&local_70);
    local_88 = (long *)(local_90 + (long)local_90[2] * 2 + 4);
    local_80 = (long *)(local_90 + (long)local_90[3] * 2 + 4);
    if (local_90[2] != local_90[3]) {
      do {
        local_78 = 1;
        lVar7 = *(long *)*local_88;
        if (((lVar7 != 0) && (*(int *)(lVar7 + 4) != 0)) && (((long *)*local_88)[1] != 0)) {
          CAppliance::getApplianceId();
          iVar2 = *(int *)(local_40 + 8);
          pQVar12 = (QString *)(local_40 + (long)iVar2 * 8 + 0x10);
          iVar3 = *(int *)(local_40 + 0xc);
          pQVar1 = (QString *)(local_40 + (long)iVar3 * 8 + 0x10);
          pQVar13 = pQVar12;
          if (iVar2 != iVar3) {
            lVar7 = (long)iVar3 * 8 + (long)iVar2 * -8;
            do {
              cVar6 = operator==(pQVar12,&local_98);
              pQVar13 = pQVar12;
              if (cVar6 != '\0') break;
              pQVar12 = pQVar12 + 1;
              lVar7 = lVar7 + -8;
              pQVar13 = pQVar1;
            } while (lVar7 != 0);
          }
          if (*(int *)local_98.field0_0x0 != -1) {
            if (*(int *)local_98.field0_0x0 != 0) {
              LOCK();
              *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
              local_31 = *(int *)local_98.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10079520b;
            }
            QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
          }
LAB_10079520b:
          if (pQVar13 == pQVar1) {
            CAppliance::getApplianceId();
            FUN_1007958e0(param_1,param_2,&local_a0);
            if (*(int *)local_a0 != -1) {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_31 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100795270;
              }
              QArrayData::deallocate(local_a0,2,8);
            }
          }
        }
LAB_100795270:
        local_88 = local_88 + 1;
      } while (local_88 != local_80);
    }
    local_78 = 1;
    if (*local_90 != -1) {
      if (*local_90 != 0) {
        LOCK();
        *local_90 = *local_90 + -1;
        local_31 = *local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007952c0;
      }
      FUN_100797e40(&local_90,local_90);
    }
  }
LAB_1007952c0:
  if (*local_70 != -1) {
    if (*local_70 != 0) {
      LOCK();
      *local_70 = *local_70 + -1;
      local_31 = *local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007952ea;
    }
    FUN_100797e40(&local_70,local_70);
  }
LAB_1007952ea:
  FUN_100036370(&local_40);
  return;
}

