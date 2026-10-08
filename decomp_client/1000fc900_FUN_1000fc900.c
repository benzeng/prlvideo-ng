
void FUN_1000fc900(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  QKeySequence local_58 [8];
  QArrayData *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_31;
  
  local_48 = 0x10;
  local_3c = 0;
  local_44 = 2;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = param_3;
  QKeySequence::QKeySequence(local_58);
  FUN_1000f9b40(param_4,&local_50,&local_48,1,0,0,0,local_58);
  QKeySequence::~QKeySequence(local_58);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fc9ae;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000fc9ae:
  FUN_1000faad0(param_1,param_2,param_3,param_4);
  return;
}

