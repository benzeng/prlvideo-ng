
bool FUN_100b461b0(long param_1)

{
  int iVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  local_20 = (QArrayData *)QString::fromAscii_helper("FF:FF:FF:FF:FF:FF",0x11);
  iVar1 = QString::compare(param_1 + 200,&local_20,0);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) goto LAB_100b46218;
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_100b46218:
  return iVar1 == 0;
}

