
undefined1 FUN_100d98600(undefined8 *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)*param_1;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  uVar3 = 0;
  if ((param_2 != 0) && (uVar3 = 0, *(int *)(local_30 + 4) != 0)) {
    uVar2 = FUN_100d970c0(param_2,&local_30);
    if ((uVar2 & 8) == 0) {
      uVar3 = 0;
    }
    else {
      local_38 = (QArrayData *)*param_1;
      if (1 < *(int *)local_38 + 1U) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + 1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
      }
      if (*(int *)(local_38 + 4) == 0) {
        uVar3 = 0;
      }
      else {
        uVar1 = FUN_100d970c0(param_2,&local_38);
        uVar3 = (undefined1)((uVar1 & 2) >> 1);
      }
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_21 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100d986c8;
        }
        QArrayData::deallocate(local_38,2,8);
      }
    }
  }
LAB_100d986c8:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar3;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar3;
}

