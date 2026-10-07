
undefined8 FUN_1006bb670(undefined8 param_1,long *param_2,undefined8 *param_3,uint *param_4)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  ushort uVar14;
  bool bVar15;
  QArrayData *local_88;
  QArrayData *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  uint local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_4 = 0;
  *param_3 = 0;
  piVar13 = (int *)*param_2;
  if (piVar13[3] - piVar13[2] != 0) {
    pvVar8 = _malloc((long)(piVar13[3] - piVar13[2]) * 2);
    if (pvVar8 == (void *)0x0) {
      return 0x80000002;
    }
    local_78 = piVar13;
    if (*piVar13 != -1) {
      if (*piVar13 == 0) {
        QListData::detach((int)&local_78);
        iVar5 = local_78[2];
        if (iVar5 != local_78[3]) {
          puVar10 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
          piVar13 = local_78 + (long)iVar5 * 2 + 4;
          lVar7 = (long)local_78[3] * 8 + (long)iVar5 * -8;
          do {
            piVar1 = (int *)*puVar10;
            *(int **)piVar13 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            piVar13 = piVar13 + 2;
            puVar10 = puVar10 + 1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *piVar13 = *piVar13 + 1;
        local_31 = *piVar13 != 0;
        UNLOCK();
      }
    }
    local_70 = local_78 + (long)local_78[2] * 2 + 4;
    local_68 = local_78 + (long)local_78[3] * 2 + 4;
    local_60 = 1;
    if (local_78[2] == local_78[3]) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        local_80 = *(QArrayData **)local_70;
        if (1 < *(int *)local_80 + 1U) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + 1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
        }
        if (local_60 != 0) {
          if (*(int *)(local_80 + 4) != 0) {
            sVar3 = FUN_1006bb250(param_1,&local_80);
            if (sVar3 == 0) {
              QString::toUtf8();
              FUN_1008e3970("","prl_net",0,"Offmgmt: Port for service %s is not configured!",
                            local_88 + *(long *)(local_88 + 0x10));
              if (*(int *)local_88 != -1) {
                if (*(int *)local_88 != 0) {
                  LOCK();
                  *(int *)local_88 = *(int *)local_88 + -1;
                  local_31 = *(int *)local_88 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006bb990;
                }
                QArrayData::deallocate(local_88,1,8);
              }
            }
            else {
              uVar11 = (ulong)uVar14;
              uVar14 = uVar14 + 1;
              *(short *)((long)pvVar8 + uVar11 * 2) = sVar3;
            }
          }
LAB_1006bb990:
          local_60 = 0;
        }
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006bb9c7;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1006bb9c7:
        local_70 = local_70 + 2;
        uVar6 = local_60 ^ 1;
        bVar15 = local_60 != 1;
        local_60 = uVar6;
      } while ((bVar15) && (local_70 != local_68));
    }
    FUN_100013180(&local_78);
    uVar6 = (uint)uVar14;
    if (uVar14 == 0) {
      _free(pvVar8);
      pvVar8 = (void *)0x0;
    }
    *param_3 = pvVar8;
    goto LAB_1006bbacf;
  }
  lVar7 = CParallelsNetworkConfig::getOffmgmtServices();
  if (lVar7 == 0) {
    FUN_1008e3970("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]","services","netconfig.cpp",
                  0x617,"CreateDefaultOffmgmtPortsBuffer");
    return 0;
  }
  iVar5 = *(int *)(*(long *)(lVar7 + 0x98) + 0xc) - *(int *)(*(long *)(lVar7 + 0x98) + 8);
  if (iVar5 == 0) {
    return 0;
  }
  pvVar8 = _malloc((long)iVar5 * 2);
  if (pvVar8 == (void *)0x0) {
    return 0x80000002;
  }
  local_58 = *(Data **)(lVar7 + 0x98);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar9 = (long)*(int *)(local_58 + 8);
      lVar7 = *(long *)(lVar7 + 0x98);
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_58 + lVar9 * 8) &&
         (lVar12 = *(int *)(local_58 + 0xc) - lVar9,
         lVar12 != 0 && lVar9 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar9 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar12 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  uVar11 = 0;
  uVar6 = 0;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      cVar2 = COffmgmtService::isUsedByDefault();
      if (cVar2 != '\0') {
        uVar4 = COffmgmtService::getPort();
        *(undefined2 *)((long)pvVar8 + uVar11 * 2) = uVar4;
        uVar11 = (ulong)(ushort)((short)uVar11 + 1);
      }
      uVar6 = (uint)uVar11;
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006bbab7;
    }
    QListData::dispose(local_58);
  }
LAB_1006bbab7:
  if ((short)uVar6 == 0) {
    _free(pvVar8);
    pvVar8 = (void *)0x0;
  }
  *param_3 = pvVar8;
LAB_1006bbacf:
  *param_4 = uVar6;
  return 0;
}

