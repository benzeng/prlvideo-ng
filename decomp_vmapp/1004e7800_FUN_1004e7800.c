
void FUN_1004e7800(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 local_4c;
  int *local_48;
  int *local_40;
  int *local_38;
  undefined4 local_30;
  int local_28;
  undefined1 local_21;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x50);
  local_28 = *(int *)(lVar2 + 0xc) - *(int *)(lVar2 + 8);
  FUN_100040e10(param_2,3,&local_28,4);
  FUN_1004d6ff0(&local_48,lVar1 + 0x50);
  local_40 = local_48 + (long)local_48[2] * 2 + 4;
  local_38 = local_48 + (long)local_48[3] * 2 + 4;
  if (local_48[2] != local_48[3]) {
    do {
      local_30 = 1;
      FUN_1004e75c0(**(undefined8 **)local_40,param_2);
      local_40 = local_40 + 2;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_21 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e78d1;
    }
    FUN_1004d6ab0(&local_48,local_48);
  }
LAB_1004e78d1:
  local_4c = *(undefined4 *)(*param_1 + 0x40);
  FUN_100040e10(param_2,3,&local_4c,4);
  return;
}

