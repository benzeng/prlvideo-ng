
undefined8 * FUN_100358be0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_68;
  int *local_60;
  int *local_58;
  long *local_50;
  long *local_48;
  int local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_2);
  if (lVar3 == 0) {
    return param_1;
  }
  uVar2 = FUN_10018c280(lVar3);
  uVar2 = FUN_100319950(uVar2);
  FUN_1003591b0(&local_60,uVar2);
  FUN_100359780(&local_58,&local_60);
  local_50 = (long *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (long *)(local_58 + (long)local_58[3] * 2 + 4);
  local_40 = 1;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
LAB_100358c89:
      FUN_100359550(&local_60,local_60);
    }
    else {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100358c89;
    }
    if (local_40 == 0) goto LAB_100358d1b;
  }
  if (local_50 != local_48) {
    do {
      lVar3 = *(long *)*local_50;
      lVar4 = 0;
      if ((lVar3 != 0) && (lVar4 = 0, *(int *)(lVar3 + 4) != 0)) {
        lVar4 = ((long *)*local_50)[1];
      }
      uVar2 = FUN_100370280();
      uVar1 = FUN_100323e20(lVar4);
      local_68 = FUN_1003704b0(uVar2,param_2,uVar1);
      if (local_68 != 0) {
        FUN_100359270(param_1,&local_68);
      }
      local_50 = local_50 + 1;
      local_40 = 1;
    } while (local_50 != local_48);
  }
LAB_100358d1b:
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    FUN_100359550(&local_58,local_58);
  }
  return param_1;
}

