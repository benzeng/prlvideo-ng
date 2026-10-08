
void FUN_1001766c0(long param_1)

{
  Data DVar1;
  QMapNodeBase *pQVar2;
  QMapNodeBase *pQVar3;
  undefined2 uVar4;
  QMapNodeBase *pQVar5;
  ulong *puVar6;
  QMapNodeBase *pQVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  Data *local_88;
  Data *local_80;
  undefined2 local_78;
  Data local_69;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  Data *local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  local_40 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  FUN_100176be0(&local_48,param_1);
  local_68 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_68);
      lVar8 = (long)*(int *)(local_68 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_68 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_68 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar8 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      DVar1 = *local_60;
      local_69 = DVar1;
      lVar8 = FUN_100178d40(&local_40,&local_69);
      FUN_100176fc0(&local_88,param_1,DVar1);
      uVar4 = FUN_1001773b0(param_1,DVar1);
      local_80 = local_88;
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 == 0) {
          QListData::detach((int)&local_80);
          lVar9 = (long)*(int *)(local_80 + 8);
          if ((local_88 + (long)*(int *)(local_88 + 8) * 8 != local_80 + lVar9 * 8) &&
             (lVar10 = *(int *)(local_80 + 0xc) - lVar9,
             lVar10 != 0 && lVar9 <= *(int *)(local_80 + 0xc))) {
            _memcpy(local_80 + lVar9 * 8 + 0x10,local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10,
                    lVar10 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + 1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
        }
      }
      local_78 = uVar4;
      FUN_1001792b0(lVar8,&local_80);
      *(undefined2 *)(lVar8 + 8) = local_78;
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100176857;
        }
        QListData::dispose(local_80);
      }
LAB_100176857:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10017687d;
        }
        QListData::dispose(local_88);
      }
LAB_10017687d:
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001768c0;
    }
    QListData::dispose(local_68);
  }
LAB_1001768c0:
  pQVar3 = local_40;
  pQVar5 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      pQVar5 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(pQVar3 + 0x10) != 0) {
        puVar6 = (ulong *)FUN_100137920(*(long *)(pQVar3 + 0x10),pQVar5);
        *(ulong **)(pQVar5 + 0x10) = puVar6;
        *puVar6 = *puVar6 & 3 | (ulong)(pQVar5 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  if (*(QMapNodeBase **)(param_1 + 0x128) != pQVar5) {
    pQVar7 = pQVar5;
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 == 0) {
        pQVar7 = (QMapNodeBase *)QMapDataBase::createData();
        if (*(long *)(pQVar5 + 0x10) != 0) {
          puVar6 = (ulong *)FUN_100137920(*(long *)(pQVar5 + 0x10),pQVar7);
          *(ulong **)(pQVar7 + 0x10) = puVar6;
          *puVar6 = *puVar6 & 3 | (ulong)(pQVar7 + 8);
          QMapDataBase::recalcMostLeftNode();
        }
      }
      else {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + 1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
      }
    }
    pQVar2 = *(QMapNodeBase **)(param_1 + 0x128);
    *(QMapNodeBase **)(param_1 + 0x128) = pQVar7;
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001769ce;
      }
      if (*(long *)(pQVar2 + 0x10) != 0) {
        FUN_100137f10();
        QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar2);
    }
  }
LAB_1001769ce:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100176a10;
    }
    if (*(long *)(pQVar5 + 0x10) != 0) {
      FUN_100137f10();
      QMapDataBase::freeTree(pQVar5,(int)*(undefined8 *)(pQVar5 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar5);
  }
LAB_100176a10:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100176a36;
    }
    QListData::dispose(local_48);
  }
LAB_100176a36:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_100137f10();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
  return;
}

