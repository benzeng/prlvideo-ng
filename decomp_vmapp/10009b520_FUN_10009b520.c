
void FUN_10009b520(long param_1,undefined4 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  long *local_40;
  undefined1 local_31;
  
  lVar3 = FUN_1000915f0(DAT_1011c3698);
  if (lVar3 == 0) {
    return;
  }
  FUN_100090a50(&local_40,DAT_1011c3698);
  plVar1 = *(long **)(local_40[2] + 0x188);
  local_60 = (Data *)*plVar1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar4 = (long)*(int *)(local_60 + 8);
      lVar3 = *plVar1;
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_60 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_60 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar5 * 8);
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
      plVar1 = *(long **)local_58;
      (**(code **)(*plVar1 + 0xb8))(&local_68,plVar1);
      iVar2 = QString::compare_helper
                        (local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)(local_68 + 4),
                         "Default printer",0xffffffff,1);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10009b679;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10009b679:
      if (iVar2 != 0) {
        FUN_10009aa90(param_1,param_2,plVar1);
      }
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
      if ((bool)local_31) goto LAB_10009b6cf;
    }
    QListData::dispose(local_60);
  }
LAB_10009b6cf:
  if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(*(long *)(param_1 + 0x38) + 0x10) != 0)) {
    FUN_10009aa90(param_1,param_2);
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return;
}

