
char FUN_100078fd0(long param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  long local_60;
  long local_58;
  long local_50;
  QArrayData *local_48;
  undefined1 local_29;
  
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (param_2 != 0) {
    CBaseNode::toString(SUB81(&local_68,0),(bool)((char)param_2 + '\x10'));
    CBaseNode::fromString
              ((CBaseNode *)(param_1 + 0x38),(QTypedArrayData<unsigned_short> *)&local_68,false,
               (QString *)0x0,(int *)0x0,(int *)0x0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100079051;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_100079051:
  if (param_3 != 0) {
    CBaseNode::toString(SUB81(&local_70,0),SUB81(param_3,0));
    CBaseNode::fromString
              ((CBaseNode *)(param_1 + 0x128),(QTypedArrayData<unsigned_short> *)&local_70,false,
               (QString *)0x0,(int *)0x0,(int *)0x0);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000790b1;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_1000790b1:
  if (param_4 != 0) {
    CBaseNode::toString(SUB81(&local_78,0),SUB81(param_4,0));
    CBaseNode::fromString
              ((CBaseNode *)(param_1 + 0x288),(QTypedArrayData<unsigned_short> *)&local_78,false,
               (QString *)0x0,(int *)0x0,(int *)0x0);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_29 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10007911e;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_10007911e:
  local_50 = param_1 + 0x288;
  local_60 = param_1 + 0x28;
  local_58 = param_1 + 0x128;
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
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return cVar1;
}

