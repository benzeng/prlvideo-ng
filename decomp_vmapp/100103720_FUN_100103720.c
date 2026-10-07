
undefined8 FUN_100103720(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar1 = DAT_1011c3698;
  uVar2 = 0x80000009;
  if (DAT_1011c3698 != 0) {
    uVar3 = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    }
    uVar2 = 0;
    local_30 = (QArrayData *)QString::fromAscii_helper("",0);
    FUN_1000ab5a0(lVar1,uVar3,&local_30);
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
      QArrayData::deallocate(local_30,2,8);
    }
  }
  return uVar2;
}

