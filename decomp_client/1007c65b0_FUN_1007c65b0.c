
undefined8 FUN_1007c65b0(long *param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  local_48 = (Data *)*param_1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar3 = (long)*(int *)(local_48 + 8);
      lVar1 = *param_1;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_48 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_48 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar3 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  local_30 = 1;
  uVar5 = 0;
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    do {
      local_30 = 1;
      uVar5 = *(undefined8 *)local_40;
      iVar2 = FUN_1007bd980(uVar5);
      if ((iVar2 == param_2) && (iVar2 = FUN_1007bd990(uVar5), iVar2 == param_3)) break;
      local_40 = local_40 + 8;
      local_30 = 1;
      uVar5 = 0;
    } while (local_40 != local_38);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return uVar5;
      }
      local_21 = 0;
    }
    QListData::dispose(local_48);
  }
  return uVar5;
}

