
void FUN_100058130(undefined8 *param_1,char param_2)

{
  QArrayData *local_868;
  QArrayData *local_860;
  undefined1 local_858 [2111];
  undefined1 local_19;
  
  FUN_10005ac70(local_858,(param_2 == '\0') * '\x02',0,0);
  FUN_10005adf0(&local_860,local_858);
  local_868 = (QArrayData *)*param_1;
  if (1 < *(int *)local_868 + 1U) {
    LOCK();
    *(int *)local_868 = *(int *)local_868 + 1;
    local_19 = *(int *)local_868 != 0;
    UNLOCK();
  }
  FUN_1000582a0(&local_860,&local_868);
  if (*(int *)local_868 != -1) {
    if (*(int *)local_868 != 0) {
      LOCK();
      *(int *)local_868 = *(int *)local_868 + -1;
      local_19 = *(int *)local_868 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000581d2;
    }
    QArrayData::deallocate(local_868,2,8);
  }
LAB_1000581d2:
  if (*(int *)local_860 != -1) {
    if (*(int *)local_860 != 0) {
      LOCK();
      *(int *)local_860 = *(int *)local_860 + -1;
      UNLOCK();
      if (*(int *)local_860 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_860,1,8);
  }
  return;
}

