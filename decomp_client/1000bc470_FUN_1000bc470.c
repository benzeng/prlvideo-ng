
void FUN_1000bc470(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_38 [23];
  undefined1 local_21;
  
  FUN_1000c0170(&local_40,param_4);
  if (param_3 != 1) goto LAB_1000bc525;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar1 = FUN_1000bb2a0(param_1,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000bc4e1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000bc4e1:
  if (iVar1 == 2) {
    iVar1 = FUN_1000bb4d0(param_1);
    if (iVar1 == -2) {
      FUN_1000bddb0(param_1 + 0x60);
    }
    else if (iVar1 == 3) {
      FUN_1000be080(param_1 + 0x60,&local_40);
    }
  }
  else {
    FUN_1000bad80(param_1,&local_40);
  }
LAB_1000bc525:
  FUN_100039a80(local_38);
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
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

