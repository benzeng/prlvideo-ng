
void FUN_100644e30(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_b8;
  undefined1 local_b0 [88];
  undefined1 local_58 [40];
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e1288;
  if (param_2 != -0x7ffb8fa9) {
    return;
  }
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_10061e130(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),1,1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100644ea8;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100644ea8:
  uVar2 = FUN_10063f730(param_1);
  local_b8 = puVar1;
  FUN_1002f6080(local_b0,&local_b8);
  FUN_100675fb0(uVar2,local_b0);
  FUN_100252c80(local_58);
  FUN_100252e70(local_b0);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100644f22;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100644f22:
  uVar2 = FUN_10063f730(param_1);
  FUN_100676130(uVar2,0xffffffff);
  return;
}

