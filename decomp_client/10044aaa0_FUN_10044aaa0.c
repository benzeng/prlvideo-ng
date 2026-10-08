
void FUN_10044aaa0(long param_1,long *param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  Data *local_50;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  QObject::property((char *)&local_48);
  QVariant::toString();
  QVariant::~QVariant(&local_48);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x1c0))(&local_50,*(long **)(param_1 + 0x10),&local_38)
  ;
  iVar1 = *(int *)(local_50 + 0xc);
  (**(code **)(*param_2 + 0x68))
            (param_2,iVar1 != *(int *)(local_50 + 8),iVar1,iVar1 != *(int *)(local_50 + 8));
  local_70 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_70);
      lVar2 = (long)*(int *)(local_70 + 8);
      if ((local_50 + (long)*(int *)(local_50 + 8) * 8 != local_70 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_70 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar2 * 8 + 0x10,local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      local_58 = 1;
      (**(code **)(**(long **)(param_1 + 0x10) + 0x1c8))
                (*(long **)(param_1 + 0x10),*(undefined8 *)local_68,param_3);
      local_68 = local_68 + 8;
    } while (local_68 != local_60);
  }
  local_58 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10044ac05;
    }
    QListData::dispose(local_70);
  }
LAB_10044ac05:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10044ac2b;
    }
    QListData::dispose(local_50);
  }
LAB_10044ac2b:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

