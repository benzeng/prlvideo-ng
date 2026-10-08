
undefined1 FUN_1006269e0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  Data *local_28;
  int local_20;
  bool local_11;
  
  iVar1 = FUN_1006268d0();
  if (iVar1 == param_1) {
    return 0;
  }
  uVar2 = FUN_100152280();
  FUN_100154b10(&local_40,uVar2);
  local_38 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_38);
      lVar3 = (long)*(int *)(local_38 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_38 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_38 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_38 + 0xc))
         ) {
        _memcpy(local_38 + lVar3 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_30 = local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10;
  local_28 = local_38 + (long)*(int *)(local_38 + 0xc) * 8 + 0x10;
  local_20 = 1;
  if (*(int *)local_40 == -1) {
LAB_100626ae3:
    for (; local_30 != local_28; local_30 = local_30 + 8) {
      lVar3 = *(long *)local_30;
      if (((lVar3 != 0) && (iVar1 = FUN_10018a9d0(lVar3), iVar1 != 0x30000001)) &&
         (iVar1 = FUN_10018a9d0(lVar3), iVar1 != 0x30000009)) {
        if (*(int *)local_38 == -1) {
          return 1;
        }
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          UNLOCK();
          if (*(int *)local_38 != 0) {
            return 1;
          }
          local_11 = false;
        }
        QListData::dispose(local_38);
        return 1;
      }
      local_20 = 1;
    }
    if (*(int *)local_38 == -1) {
      return 0;
    }
    if (*(int *)local_38 == 0) goto LAB_100626b73;
    LOCK();
    *(int *)local_38 = *(int *)local_38 + -1;
    iVar1 = *(int *)local_38;
    UNLOCK();
  }
  else {
    if (*(int *)local_40 == 0) {
LAB_100626ab1:
      QListData::dispose(local_40);
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if (!local_11) goto LAB_100626ab1;
    }
    if (local_20 != 0) goto LAB_100626ae3;
    if (*(int *)local_38 == -1) {
      return 0;
    }
    if (*(int *)local_38 == 0) goto LAB_100626b73;
    LOCK();
    *(int *)local_38 = *(int *)local_38 + -1;
    iVar1 = *(int *)local_38;
    UNLOCK();
  }
  local_11 = iVar1 != 0;
  if (local_11) {
    return 0;
  }
LAB_100626b73:
  QListData::dispose(local_38);
  return 0;
}

