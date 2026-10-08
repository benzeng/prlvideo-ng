
void FUN_100142830(long param_1)

{
  undefined4 uVar1;
  QArrayData *local_48;
  QColor local_40 [16];
  int local_30 [5];
  undefined1 local_19;
  
  QColor::QColor(local_40,*(uint *)(param_1 + 0xf0) | 0xff000000);
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  QColorDialog::getColor(local_30,local_40,param_1,&local_48,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001428a7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001428a7:
  if (local_30[0] != 0) {
    uVar1 = QColor::rgb();
    FUN_100142100(param_1,uVar1);
  }
  return;
}

