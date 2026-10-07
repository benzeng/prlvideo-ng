
undefined8
FUN_1004db6f0(long param_1,uint param_2,undefined8 param_3,void *param_4,code *param_5,
             undefined8 param_6,uint *param_7)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint local_4c;
  void *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x49) == '\0') {
    QByteArray::mid((int)&local_40,(int)param_1 + 0x40);
    uVar2 = *(uint *)(local_40 + 4);
    uVar4 = (ulong)uVar2;
    if (uVar2 < param_2) {
      *(undefined1 *)(param_1 + 0x49) = 1;
    }
    *param_7 = uVar2;
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    _memcpy(param_4,local_40 + *(long *)(local_40 + 0x10),uVar4);
    local_48 = (void *)0x0;
    local_4c = 0;
    while( true ) {
      bVar1 = (*param_5)(param_6,&local_48,&local_4c);
      uVar2 = (uint)uVar4;
      if ((uVar2 != 0 & bVar1) != 1) break;
      if (uVar2 <= local_4c) {
        local_4c = uVar2;
      }
      _memcpy(local_48,param_4,(ulong)local_4c);
      param_4 = (void *)((long)param_4 + (ulong)local_4c);
      uVar4 = (ulong)(uVar2 - local_4c);
    }
    uVar3 = 0;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return 0;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  else {
    *param_7 = 0;
    uVar3 = 0xf000000e;
  }
  return uVar3;
}

