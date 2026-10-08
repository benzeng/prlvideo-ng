
bool FUN_1006aea10(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_60;
  char local_58 [71];
  undefined1 local_11;
  
  uVar2 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
  iVar1 = FUN_100321a90(uVar2,0);
  if (iVar1 != 1) {
    uVar2 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
    iVar1 = FUN_100321a90(uVar2,0);
    if (iVar1 != 2) {
      return false;
    }
  }
  uVar2 = FUN_100748240();
  local_60 = (QArrayData *)QString::fromAscii_helper("win7look",8);
  uVar2 = FUN_100748290(uVar2,&local_60);
  FUN_100746ae0(local_58,uVar2);
  FUN_10012ac30(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return local_58[0] == '\0';
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return local_58[0] == '\0';
}

