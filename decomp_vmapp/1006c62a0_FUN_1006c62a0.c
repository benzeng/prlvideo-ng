
undefined1 FUN_1006c62a0(char *param_1)

{
  undefined1 uVar1;
  size_t sVar2;
  int iVar3;
  QArrayData *local_20;
  undefined1 local_12;
  
  iVar3 = -1;
  if (param_1 != (char *)0x0) {
    sVar2 = _strlen(param_1);
    iVar3 = (int)sVar2;
  }
  local_20 = (QArrayData *)QString::fromAscii_helper(param_1,iVar3);
  uVar1 = FUN_1006cce80(&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar1;
}

