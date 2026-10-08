
undefined8 FUN_1009e68e0(undefined4 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1009e63d0(&local_38,param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009e6943;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009e6943:
  plVar1 = operator_new(0x278);
  FUN_1009e6dd0(plVar1,&local_38,param_3);
  if ((char)plVar1[0x4b] == '\0') {
    uVar2 = 0x80000009;
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  else {
    *param_2 = plVar1;
    *(undefined4 *)(plVar1 + 0x4e) = param_1;
    uVar2 = 0;
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar2;
}

