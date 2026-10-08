
void FUN_100334400(long param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  QArrayData *local_858;
  int local_850 [527];
  undefined1 local_11;
  
  if (param_3 != 1) {
    return;
  }
  local_858 = (QArrayData *)*param_5;
  if (1 < *(int *)local_858 + 1U) {
    LOCK();
    *(int *)local_858 = *(int *)local_858 + 1;
    local_11 = *(int *)local_858 != 0;
    UNLOCK();
  }
  FUN_100099a60(&local_858,local_850);
  if (*(int *)local_858 != -1) {
    if (*(int *)local_858 != 0) {
      LOCK();
      *(int *)local_858 = *(int *)local_858 + -1;
      local_11 = *(int *)local_858 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10033447c;
    }
    QArrayData::deallocate(local_858,1,8);
  }
LAB_10033447c:
  if (local_850[0] == 2) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    uVar1 = 0;
  }
  else {
    if (local_850[0] != 0) {
      FUN_100091500(*(undefined8 *)(param_1 + 0x18),local_850);
      goto LAB_1003344b6;
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
    uVar1 = 1;
  }
  FUN_100333e50(param_1,uVar1);
LAB_1003344b6:
  FUN_100099dc0(local_850);
  return;
}

