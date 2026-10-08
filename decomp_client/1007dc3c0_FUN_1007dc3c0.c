
undefined1 FUN_1007dc3c0(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  size_t sVar3;
  int iVar4;
  QArrayData *local_20;
  undefined1 local_12;
  
  puVar1 = PTR_s_com_parallels_toolbox_102271008;
  iVar4 = -1;
  if (PTR_s_com_parallels_toolbox_102271008 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_com_parallels_toolbox_102271008);
    iVar4 = (int)sVar3;
  }
  local_20 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
  uVar2 = FUN_100123a10(&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar2;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar2;
}

