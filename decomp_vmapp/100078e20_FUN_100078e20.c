
char FUN_100078e20(long param_1)

{
  char cVar1;
  long local_60;
  long local_58;
  long local_50;
  QArrayData *local_48;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x120) == 0) {
    return '\x01';
  }
  CBaseNode::toString(SUB81((QTypedArrayData<unsigned_short> *)&local_30,0),
                      (bool)((char)*(long *)(param_1 + 0x120) + '\x10'));
  CBaseNode::fromString
            ((CBaseNode *)(param_1 + 0x38),(QTypedArrayData<unsigned_short> *)&local_30,false,
             (QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100078ea0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100078ea0:
  if (*(long **)(param_1 + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x120) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_58 = param_1 + 0x128;
  local_50 = param_1 + 0x288;
  local_60 = param_1 + 0x28;
  cVar1 = FUN_1000b0980(*(undefined8 *)(param_1 + 0x20),&local_60);
  if (cVar1 == '\0') {
    FUN_1008e3970("","vm",0,
                  "ApplyPendingResetConfiguration(): Failed to apply remembered configuration.");
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return cVar1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return cVar1;
}

