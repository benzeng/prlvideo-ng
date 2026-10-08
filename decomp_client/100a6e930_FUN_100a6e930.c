
void * FUN_100a6e930(uint param_1)

{
  int iVar1;
  Data *pDVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  Data *pDVar6;
  long lVar7;
  undefined4 local_44;
  Data *local_40;
  uint local_38;
  undefined1 local_31;
  
  local_38 = param_1;
  QMutex::lock();
  if (*(uint *)(DAT_102311818 + 4) != 0) {
    uVar5 = *(uint *)((long)DAT_102311818 + 0x24) ^ param_1;
    for (puVar3 = *(undefined8 **)
                   (DAT_102311818[1] + ((ulong)uVar5 % (ulong)*(uint *)(DAT_102311818 + 4)) * 8);
        puVar3 != DAT_102311818; puVar3 = (undefined8 *)*puVar3) {
      if ((*(uint *)(puVar3 + 1) == uVar5) && (*(uint *)((long)puVar3 + 0xc) == param_1)) {
        if (puVar3 != DAT_102311818) {
          puVar3 = (undefined8 *)FUN_100a6ef60(&DAT_102311818,&local_38);
          pvVar4 = (void *)*puVar3;
          goto LAB_100a6ebe2;
        }
        break;
      }
    }
  }
  pvVar4 = (void *)0x0;
  if (param_1 == 2) {
    pvVar4 = operator_new(0x28);
    FUN_100a6c3c0(pvVar4,2,1);
  }
  else if (param_1 == 1) {
    pvVar4 = operator_new(0x28);
    FUN_100a6c3c0(pvVar4,1,0);
    FUN_100a6d690(pvVar4,0x30daa,2,1);
    FUN_100a6d690(pvVar4,0x30db3,2,1);
    FUN_100a6d690(pvVar4,0x30da4,2,1);
    FUN_100a6d690(pvVar4,0x30da5,2,1);
    FUN_100a6d6b0(pvVar4,1000,1999,2,1);
    FUN_100a6d6b0(pvVar4,2000,2999,2,1);
    FUN_100a6d6b0(pvVar4,3000,3999,2,1);
    FUN_100a6d6b0(pvVar4,4000,4999,2,1);
    FUN_100a6d6b0(pvVar4,5000,5999,2,1);
    FUN_100a6d6b0(pvVar4,6000,7000,2,1);
  }
  else if (param_1 == 0) {
    pvVar4 = operator_new(0x28);
    local_40 = (Data *)PTR_shared_null_1021e15e8;
    local_44 = 2;
    FUN_100a6f120(&local_40,&local_44);
    FUN_100a6c620(pvVar4,1,0,&local_40);
    pDVar2 = local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a6ebcf;
      }
      iVar1 = *(int *)(local_40 + 0xc);
      if (iVar1 != *(int *)(local_40 + 8)) {
        lVar7 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
        pDVar6 = local_40 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar6 != (void *)0x0) {
            operator_delete(*(void **)pDVar6);
          }
          pDVar6 = pDVar6 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose(pDVar2);
    }
  }
LAB_100a6ebcf:
  puVar3 = (undefined8 *)FUN_100a6ef60(&DAT_102311818,&local_38);
  *puVar3 = pvVar4;
LAB_100a6ebe2:
  QMutex::unlock();
  return pvVar4;
}

