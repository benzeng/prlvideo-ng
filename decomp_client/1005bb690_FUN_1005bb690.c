
void FUN_1005bb690(long param_1,undefined8 param_2)

{
  long lVar1;
  QObject *pQVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  int *local_70;
  QObject *local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x88))();
  }
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  FUN_1005bf810();
  lVar1 = *(long *)(param_1 + 0xa0);
  local_58 = *(Data **)(lVar1 + 0x98);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      lVar1 = *(long *)(lVar1 + 0x98);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
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
      pQVar2 = *(QObject **)local_50;
      if (pQVar2 != (QObject *)0x0) {
        CAppliance::getApplianceVersion();
        iVar3 = QString::compare_helper
                          (local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(local_60 + 4),"1.5"
                           ,0xffffffff,1);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005bb7ea;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_1005bb7ea:
        if (iVar3 == 0) {
          piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
          local_70 = piVar4;
          local_68 = pQVar2;
          FUN_1005c04e0(param_1 + 0xa8,&local_70);
          if (piVar4 != (int *)0x0) {
            LOCK();
            *piVar4 = *piVar4 + -1;
            local_31 = *piVar4 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              operator_delete(piVar4);
            }
          }
        }
      }
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
      if ((bool)local_31) goto LAB_1005bb877;
    }
    QListData::dispose(local_58);
  }
LAB_1005bb877:
  FUN_1005bb920(param_1);
  return;
}

