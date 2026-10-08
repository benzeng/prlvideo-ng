
long * FUN_100249910(long *param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  if (DAT_1023121b8 == '\0') {
    iVar3 = ___cxa_guard_acquire(&DAT_1023121b8);
    if (iVar3 != 0) {
      DAT_1023121b0 = (int *)PTR_shared_null_1021e15e8;
      ___cxa_atexit(FUN_10024b990,&DAT_1023121b0,0x100000000);
      ___cxa_guard_release(&DAT_1023121b8);
    }
  }
  if (DAT_1023121b0[3] == DAT_1023121b0[2]) {
    local_20[0] = 0x3e9;
    FUN_100129840(&DAT_1023121b0,local_20);
    local_24 = 0x40c;
    FUN_100129840(&DAT_1023121b0,&local_24);
    local_28 = 0x3ef;
    FUN_100129840(&DAT_1023121b0,&local_28);
    local_2c = 0x3ee;
    FUN_100129840(&DAT_1023121b0,&local_2c);
    local_30 = 0x3ea;
    FUN_100129840(&DAT_1023121b0,&local_30);
    local_34 = 0x3f0;
    FUN_100129840(&DAT_1023121b0,&local_34);
    local_38 = 0x3f3;
    FUN_100129840(&DAT_1023121b0,&local_38);
    local_3c = 0x3f4;
    FUN_100129840(&DAT_1023121b0,&local_3c);
    local_40 = 0x40f;
    FUN_100129840(&DAT_1023121b0,&local_40);
  }
  piVar2 = DAT_1023121b0;
  *param_1 = (long)DAT_1023121b0;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)param_1);
      lVar1 = *param_1;
      lVar4 = (long)*(int *)(lVar1 + 8);
      if ((DAT_1023121b0 + (long)DAT_1023121b0[2] * 2 != (int *)(lVar1 + lVar4 * 8)) &&
         (lVar5 = *(int *)(lVar1 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(lVar1 + 0xc))) {
        _memcpy((void *)(lVar1 + 0x10 + lVar4 * 8),DAT_1023121b0 + (long)DAT_1023121b0[2] * 2 + 4,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

