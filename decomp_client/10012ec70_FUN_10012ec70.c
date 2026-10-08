
bool FUN_10012ec70(undefined8 param_1,long param_2)

{
  long *plVar1;
  Data *pDVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Data *pDVar8;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  plVar1 = *(long **)(param_2 + 0x198);
  local_58 = (Data *)*plVar1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      lVar7 = *plVar1;
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar6 * 8);
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
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      plVar1 = *(long **)local_50;
      FUN_10012f0a0(&local_78,param_1);
      local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
      local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
      if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
        do {
          local_60 = 1;
          if ((plVar1 != (long *)0x0) &&
             (iVar4 = **(int **)local_70, iVar3 = CHwGenericPciDevice::getType(), iVar3 == iVar4)) {
            iVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1);
            iVar3 = 1;
            if (iVar4 == 1) goto LAB_10012ed9f;
          }
          local_70 = local_70 + 8;
        } while (local_70 != local_68);
      }
      local_60 = 1;
      iVar3 = 8;
LAB_10012ed9f:
      pDVar2 = local_78;
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10012ee0f;
        }
        iVar4 = *(int *)(local_78 + 0xc);
        if (iVar4 != *(int *)(local_78 + 8)) {
          lVar7 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar4 * -8;
          pDVar8 = local_78 + (long)iVar4 * 8 + 8;
          do {
            if (*(void **)pDVar8 != (void *)0x0) {
              operator_delete(*(void **)pDVar8);
            }
            pDVar8 = pDVar8 + -8;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        QListData::dispose(pDVar2);
      }
LAB_10012ee0f:
      if (iVar3 != 8) goto LAB_10012ee38;
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  iVar3 = 2;
LAB_10012ee38:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_10012ee5e;
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
LAB_10012ee5e:
  return iVar3 != 2;
}

