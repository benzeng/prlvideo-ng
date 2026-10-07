
undefined1 FUN_10006b660(long param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  CBaseNode::toString(SUB81(&local_30,0),(bool)(param_3 + '\b'));
  uVar1 = FUN_100063e20(*(undefined8 *)(param_1 + 0x10),&local_30,0x1389,param_2,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar1;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar1;
}

