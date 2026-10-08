
bool FUN_100676210(long param_1)

{
  int iVar1;
  int iVar2;
  QArrayData *local_c0;
  CDownloadedKeyList local_b8 [152];
  long local_20;
  undefined1 local_11;
  
  if (*(int *)(*(long *)(param_1 + 0x140) + 4) == 0) {
    return false;
  }
  CDownloadedKeyList::CDownloadedKeyList(local_b8);
  local_c0 = *(QArrayData **)(param_1 + 0x140);
  if (1 < *(int *)local_c0 + 1U) {
    LOCK();
    *(int *)local_c0 = *(int *)local_c0 + 1;
    local_11 = *(int *)local_c0 != 0;
    UNLOCK();
  }
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)local_b8,SUB81(&local_c0,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_11 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006762ae;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1006762ae:
  iVar2 = *(int *)(local_20 + 0xc);
  iVar1 = *(int *)(local_20 + 8);
  CDownloadedKeyList::~CDownloadedKeyList(local_b8);
  return iVar2 != iVar1;
}

