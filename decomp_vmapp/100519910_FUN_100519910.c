
undefined4
FUN_100519910(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4,undefined4 param_5,
             long param_6,undefined8 param_7,long param_8,undefined8 param_9,undefined1 param_10)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long local_88;
  long lStack_80;
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  int *local_58;
  long *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_29;
  
  local_38 = 0;
  local_40 = 3;
  param_4 = (long *)*param_4;
  if (param_4 != (long *)0x0) {
    LOCK();
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    UNLOCK();
  }
  local_58 = (int *)PTR_shared_null_100ba2188;
  local_50 = param_4;
  local_48 = param_5;
  local_34 = param_3;
  FUN_10051b4a0(&local_58,&local_50);
  if (param_6 != 0 || param_8 != 0) {
    local_68 = param_7;
    local_88 = param_8;
    lStack_80 = param_8;
    local_78 = param_9;
    lStack_70 = param_6;
  }
  plVar3 = &local_88;
  if (param_6 == 0 && param_8 == 0) {
    plVar3 = (long *)0x0;
  }
  uVar2 = FUN_1004303b0(*(undefined8 *)(*param_1 + 0xf0),param_2,&local_40,0x10,&local_58,plVar3,
                        param_10);
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_29 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100519a14;
    }
    FUN_10051b850(&local_58,local_58);
  }
LAB_100519a14:
  if (param_4 != (long *)0x0) {
    LOCK();
    plVar3 = param_4 + 1;
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*param_4 + 0x10))(param_4);
    }
  }
  return uVar2;
}

