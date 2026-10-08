
ulong FUN_100182f90(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  local_48 = *(Data **)(param_1 + 0x10);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar7 = (long)*(int *)(local_48 + 8);
      lVar2 = *(long *)(param_1 + 0x10);
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_48 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_48 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar7 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar8 * 8);
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
  uVar5 = 0;
  uVar3 = 0;
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    do {
      uVar5 = uVar3;
      local_30 = 1;
      if (*(long *)local_40 != param_2) {
        cVar4 = FUN_100184230();
        uVar5 = 1;
        if (cVar4 == '\0') {
          uVar5 = FUN_100184830();
        }
      }
      local_40 = local_40 + 8;
      uVar3 = uVar5;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  uVar1 = *(uint *)local_48;
  uVar6 = (ulong)uVar1;
  if (uVar1 != 0xffffffff) {
    if (uVar1 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_1001830a7;
      local_21 = 0;
    }
    uVar6 = QListData::dispose(local_48);
  }
LAB_1001830a7:
  return CONCAT71((int7)(uVar6 >> 8),uVar5) & 0xffffffffffffff01;
}

