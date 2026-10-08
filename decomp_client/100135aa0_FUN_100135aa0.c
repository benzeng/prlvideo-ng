
undefined8 * FUN_100135aa0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int local_4c;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_48 = (Data *)*param_3;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar2 = (long)*(int *)(local_48 + 8);
      lVar1 = *param_3;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_48 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_48 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar2 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar3 * 8);
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
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    do {
      local_30 = 1;
      local_4c = *(int *)local_40;
      if (local_4c < 0x90a) {
        if (local_4c < 0x807) {
          if (local_4c == 0x703) {
LAB_100135bd0:
            FUN_1000bf010(param_1,&local_4c);
          }
        }
        else if ((local_4c - 0x807U < 9) && ((0x1b5U >> (local_4c - 0x807U & 0x1f) & 1) != 0))
        goto LAB_100135bd0;
      }
      else if (local_4c < 0xf01) {
        if ((local_4c == 0x90a) || (local_4c == 0x910)) goto LAB_100135bd0;
      }
      else if ((local_4c == 0xf01) || (local_4c == 0x1002)) goto LAB_100135bd0;
      local_40 = local_40 + 8;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QListData::dispose(local_48);
  }
  return param_1;
}

