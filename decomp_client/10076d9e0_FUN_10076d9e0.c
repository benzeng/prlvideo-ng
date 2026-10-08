
bool FUN_10076d9e0(void)

{
  undefined8 uVar1;
  QArrayData *local_60;
  char local_58 [71];
  undefined1 local_11;
  
  uVar1 = FUN_100748240();
  local_60 = (QArrayData *)QString::fromAscii_helper("acronis.online.store",0x14);
  uVar1 = FUN_100748290(uVar1,&local_60);
  FUN_100746ae0(local_58,uVar1);
  FUN_10012ac30(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) goto LAB_10076da5a;
      local_11 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10076da5a:
  return local_58[0] == '\0';
}

