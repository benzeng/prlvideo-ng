
undefined8 FUN_100524d70(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar3 = 0xf0000003;
  if ((*(short *)(param_2 + 0x16) != 0) && (lVar2 = FUN_1002a6120(param_2,0,0), lVar2 != 0)) {
    local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
    QByteArray::resize((int)&local_30);
    if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f)
      ;
    }
    lVar1 = *(long *)(local_30 + 0x10);
    *(undefined4 *)(local_30 + lVar1) = 0x13;
    FUN_1002a5990(lVar2,0,local_30 + lVar1 + 4,*(undefined4 *)(lVar2 + 8));
    FUN_1005253a0(param_1,local_30 + *(long *)(local_30 + 0x10),*(uint *)(local_30 + 4));
    uVar3 = 0;
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return 0;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
  return uVar3;
}

