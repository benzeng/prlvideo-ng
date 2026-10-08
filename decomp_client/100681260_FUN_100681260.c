
void FUN_100681260(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  QArrayData *local_c8;
  CDownloadedKeyList local_c0 [167];
  undefined1 local_19;
  
  CContentModel::setBusy(SUB81(param_1,0));
  CDownloadedKeyList::CDownloadedKeyList(local_c0);
  local_c8 = *(QArrayData **)(param_1 + 0x140);
  if (1 < *(int *)local_c8 + 1U) {
    LOCK();
    *(int *)local_c8 = *(int *)local_c8 + 1;
    local_19 = *(int *)local_c8 != 0;
    UNLOCK();
  }
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)local_c0,SUB81(&local_c8,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_19 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006812fc;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1006812fc:
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
  }
  FUN_10068c7b0(*(undefined8 *)(param_1 + 0x20),uVar1,local_c0,param_2);
  CDownloadedKeyList::~CDownloadedKeyList(local_c0);
  return;
}

