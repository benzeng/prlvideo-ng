
undefined8 FUN_10060ab70(long *param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  char *pcVar5;
  uint uVar6;
  
  if ((param_1[1] != 0) || ((int)param_1[2] != 0)) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "(NULL == m_Head) && (0 == m_HeadSize)","FileSystems/HFSPlus/HfspVolume.cpp",0x1c3
                  ,"Init");
  }
  if ((param_1[3] != 0) || ((int)param_1[4] != 0)) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "(NULL == m_Tail) && (0 == m_TailSize)","FileSystems/HFSPlus/HfspVolume.cpp",0x1c4
                  ,"Init");
  }
  lVar2 = *param_1;
  uVar6 = (*(uint *)(lVar2 + 0x48) - 1) +
          (*(int *)(lVar2 + 0x140) + 7 + *(int *)(lVar2 + 0x144) & 0xfffffff8U);
  uVar6 = uVar6 - uVar6 % *(uint *)(lVar2 + 0x48);
  *(uint *)(param_1 + 2) = uVar6;
  pvVar3 = _malloc((ulong)uVar6);
  param_1[1] = (long)pvVar3;
  if (pvVar3 == (void *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    pcVar5 = "No memory for head";
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x48);
    *(uint *)(param_1 + 4) = uVar1;
    pvVar4 = _malloc((ulong)uVar1);
    param_1[3] = (long)pvVar4;
    if (pvVar4 != (void *)0x0) {
      ___bzero(pvVar3,(ulong)uVar6);
      ___bzero(pvVar4,(ulong)uVar1);
      *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(lVar2 + 0xa0);
      *(int *)((long)param_1 + 0x24) = *(int *)(lVar2 + 0xa4) + -1;
      return 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    pcVar5 = "No memory for tail";
  }
  FUN_1008e3970("","vdisk",0,pcVar5);
  if ((void *)param_1[1] != (void *)0x0) {
    _free((void *)param_1[1]);
    param_1[1] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    _free((void *)param_1[3]);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = -0x100000000;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  return 0x80010013;
}

