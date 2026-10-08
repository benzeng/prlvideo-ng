
bool FUN_1005b7970(void)

{
  undefined8 uVar1;
  QArrayData *local_60;
  char local_58 [71];
  undefined1 local_11;
  
  local_60 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
  uVar1 = FUN_100748240();
  uVar1 = FUN_100748290(uVar1,&local_60);
  FUN_100746ae0(local_58,uVar1);
  FUN_10012ac30(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) goto LAB_1005b79e7;
      local_11 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005b79e7:
  return local_58[0] == '\0';
}

