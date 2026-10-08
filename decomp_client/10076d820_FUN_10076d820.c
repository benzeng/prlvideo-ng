
bool FUN_10076d820(void)

{
  undefined8 uVar1;
  bool bVar2;
  QArrayData *local_a8;
  char local_a0 [64];
  QArrayData *local_60;
  char local_58 [71];
  undefined1 local_11;
  
  uVar1 = FUN_100748240();
  local_60 = (QArrayData *)QString::fromAscii_helper("atifm",5);
  uVar1 = FUN_100748290(uVar1,&local_60);
  FUN_100746ae0(local_58,uVar1);
  if (local_58[0] == '\0') {
    uVar1 = FUN_100748240();
    local_a8 = (QArrayData *)QString::fromAscii_helper("acronis.online.store",0x14);
    uVar1 = FUN_100748290(uVar1,&local_a8);
    FUN_100746ae0(local_a0,uVar1);
    bVar2 = local_a0[0] != '\0';
    FUN_10012ac30(local_a0);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_11 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10076d8f8;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
  }
  else {
    bVar2 = false;
  }
LAB_10076d8f8:
  FUN_10012ac30(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return bVar2;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return bVar2;
}

