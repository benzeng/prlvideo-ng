
void FUN_1000c8260(long param_1,long param_2)

{
  char cVar1;
  QKeySequence local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_21;
  
  if ((*(int *)(param_2 + 0x30) == 0) && (*(int *)(param_2 + 0x34) == 0)) {
    return;
  }
  FUN_1000ddf70(param_1,param_2 + 0x30);
  if ((*(byte *)(param_2 + 0x20) & 8) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x103) == '\0') {
    return;
  }
  cVar1 = FUN_1000bd150(param_1);
  if (cVar1 == '\0') {
    return;
  }
  local_38 = 0x10;
  local_30 = 0;
  local_2c = 0x73;
  local_34 = 1;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Show_Jump_List_10226fcd8);
  QKeySequence::QKeySequence(local_50);
  FUN_1000f9b40(&local_40,&local_48,&local_38,1,0,0,0,local_50);
  QKeySequence::~QKeySequence(local_50);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000c8371;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000c8371:
  FUN_1000c4970(param_2 + 0x30,0x7c,local_40 + *(long *)(local_40 + 0x10),
                *(undefined4 *)(local_40 + 4));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return;
}

