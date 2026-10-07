
int FUN_100586240(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  QArrayData *local_48;
  int local_3c;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = *(QArrayData **)(param_2 + 2);
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  local_3c = FUN_100585a10(param_1,param_2,param_3);
  if (local_3c < 0) {
    FUN_1008e3970("","vdisk",0,"Error renaming base image");
    iVar1 = local_3c;
    goto LAB_10058634c;
  }
  FUN_100585d90(&local_48,param_1,param_3);
  lVar2 = FUN_100684400(&local_48,1,*param_2,&local_3c,param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005862e2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005862e2:
  if (lVar2 == 0) {
    FUN_1008e3970("","vdisk",0,"Can\'t open renamed image. Error 0x%x",local_3c);
    FUN_100585a10(param_1,param_2,&local_38);
    iVar1 = local_3c;
  }
  else {
    iVar1 = FUN_100586100(param_1,lVar2,0);
  }
LAB_10058634c:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return iVar1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return iVar1;
}

