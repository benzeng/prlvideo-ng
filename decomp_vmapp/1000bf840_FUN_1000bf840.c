
undefined4 FUN_1000bf840(long param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  size_t sVar3;
  undefined4 uVar4;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_1000e9fd0(&local_38,6);
  sVar3 = (size_t)*(int *)(local_38 + 4);
  uVar4 = 0xffffffff;
  if ((sVar3 != 0) && (*(int *)(local_38 + 4) < 0x10001)) {
    uVar1 = FUN_10008c9b0(*(undefined8 *)(param_1 + 0x1940),0xc0000,
                          local_38 + *(long *)(local_38 + 0x10),sVar3);
    pvVar2 = (void *)FUN_1000e99d0(*(undefined8 *)(param_1 + 0x1158),0x212,0);
    if (pvVar2 != (void *)0x0) {
      _memcpy(pvVar2,local_38 + *(long *)(local_38 + 0x10),sVar3);
      uVar4 = uVar1;
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar4;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return uVar4;
}

