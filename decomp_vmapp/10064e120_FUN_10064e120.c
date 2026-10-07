
void FUN_10064e120(CBaseNode *param_1,bool param_2)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  CBaseNode::toString(SUB81((QTypedArrayData<unsigned_short> *)&local_28,0),param_2);
  CBaseNode::fromString
            (param_1,(QTypedArrayData<unsigned_short> *)&local_28,false,(QString *)0x0,(int *)0x0,
             (int *)0x0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

