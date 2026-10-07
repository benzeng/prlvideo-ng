
undefined8 * FUN_1004dc5b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  QFileInfo local_70 [8];
  undefined1 local_68 [16];
  undefined **local_58;
  QArrayData *local_50;
  undefined1 local_48 [31];
  undefined1 local_29;
  
  *param_1 = PTR_shared_null_100ba2188;
  FUN_1004dd6c0(&local_58,param_2,param_3,param_4 & 1);
  local_68._8_4_ = (int)PTR_shared_null_100ba20d0;
  local_68._0_8_ = PTR_shared_null_100ba20d0;
  local_68._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  while (cVar1 = (*(code *)local_58[3])(&local_58,(QString *)local_68), cVar1 != '\0') {
    QFileInfo::QFileInfo(local_70,(QString *)local_68);
    FUN_1004df720(param_1,local_70);
    QFileInfo::~QFileInfo(local_70);
    (*(code *)local_58[2])(&local_58);
  }
  if (*(int *)local_68._8_8_ != -1) {
    if (*(int *)local_68._8_8_ != 0) {
      LOCK();
      *(int *)local_68._8_8_ = *(int *)local_68._8_8_ + -1;
      local_29 = *(int *)local_68._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004dc679;
    }
    QArrayData::deallocate((QArrayData *)local_68._8_8_,2,8);
  }
LAB_1004dc679:
  if (*(int *)local_68._0_8_ != -1) {
    if (*(int *)local_68._0_8_ != 0) {
      LOCK();
      *(int *)local_68._0_8_ = *(int *)local_68._0_8_ + -1;
      local_29 = *(int *)local_68._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004dc6a9;
    }
    QArrayData::deallocate((QArrayData *)local_68._0_8_,2,8);
  }
LAB_1004dc6a9:
  local_58 = &PTR_FUN_100bc3648;
  FUN_100013180(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return param_1;
}

