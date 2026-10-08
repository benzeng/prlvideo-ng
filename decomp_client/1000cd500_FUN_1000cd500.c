
void FUN_1000cd500(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar1 = FUN_1000c87e0(param_1,param_2,&local_28,0);
  if (iVar1 != -1) goto LAB_1000cd5aa;
  FUN_1000ca990(&local_30,param_1,param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000cd56b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000cd56b:
  uVar2 = (**(code **)(*param_1 + 0x68))(param_1);
  local_38 = PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_38,param_2 + 8);
  FUN_1000e9920(uVar2,&local_38);
  FUN_100039a80(&local_38);
LAB_1000cd5aa:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

