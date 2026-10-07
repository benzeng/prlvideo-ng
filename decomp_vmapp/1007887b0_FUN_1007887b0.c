
undefined1 FUN_1007887b0(long *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  uint *puVar5;
  long local_20;
  
  if (*(int *)((long)param_1 + 0x14) != 0) {
    return 1;
  }
  local_20 = 0;
  iVar2 = (int)param_1[2];
  if (iVar2 == 0) {
    local_20 = _IOServiceMatching(param_1[1] + *(long *)(param_1[1] + 0x10));
    if (local_20 == 0) {
      if (DAT_1011b55f8 < 2) {
        return 0;
      }
      param_1 = param_1 + 1;
      puVar5 = (uint *)*param_1;
      if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
        QByteArray::reallocData(param_1,puVar5[1] + 1,puVar5[2] >> 0x1f);
        puVar5 = (uint *)*param_1;
      }
      lVar4 = (long)puVar5 + *(long *)(puVar5 + 4);
      pcVar3 = "Can\'t create general dictionary for [%s]";
      goto LAB_1007889d2;
    }
    cVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_20);
    if (cVar1 == '\0') {
      _CFRelease(local_20);
      return 0;
    }
  }
  else if (iVar2 == 2) {
    local_20 = _IOServiceNameMatching(param_1[1] + *(long *)(param_1[1] + 0x10));
    if (local_20 == 0) {
      if (DAT_1011b55f8 < 2) {
        return 0;
      }
      param_1 = param_1 + 1;
      puVar5 = (uint *)*param_1;
      if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
        QByteArray::reallocData(param_1,puVar5[1] + 1,puVar5[2] >> 0x1f);
        puVar5 = (uint *)*param_1;
      }
      lVar4 = (long)puVar5 + *(long *)(puVar5 + 4);
      pcVar3 = "Can\'t create class dictionary for [%s]";
      goto LAB_1007889d2;
    }
  }
  else if ((iVar2 == 1) &&
          (local_20 = _IOBSDNameMatching(*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,0,
                                         param_1[1] + *(long *)(param_1[1] + 0x10)), local_20 == 0))
  {
    if (DAT_1011b55f8 < 2) {
      return 0;
    }
    param_1 = param_1 + 1;
    puVar5 = (uint *)*param_1;
    if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
      QByteArray::reallocData(param_1,puVar5[1] + 1,puVar5[2] >> 0x1f);
      puVar5 = (uint *)*param_1;
    }
    lVar4 = (long)puVar5 + *(long *)(puVar5 + 4);
    pcVar3 = "Can\'t create bsd name dictionary for [%s]";
    goto LAB_1007889d2;
  }
  iVar2 = _IOServiceGetMatchingService(*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,local_20);
  *(int *)((long)param_1 + 0x14) = iVar2;
  if (iVar2 != 0) {
    return 1;
  }
  if (DAT_1011b55f8 < 2) {
    return 0;
  }
  lVar4 = param_1[1] + *(long *)(param_1[1] + 0x10);
  pcVar3 = "Can\'t create iterator for [%s]";
LAB_1007889d2:
  FUN_1008e3970("","HostUtils",2,pcVar3,lVar4);
  return 0;
}

