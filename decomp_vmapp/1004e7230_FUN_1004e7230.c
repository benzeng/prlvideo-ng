
void FUN_1004e7230(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int *local_58;
  int *local_50;
  int *local_48;
  undefined4 local_40;
  int local_34;
  int *local_30;
  undefined8 local_28;
  undefined1 local_19;
  
  if (param_1 == 0) {
    uVar1 = ___cxa_allocate_exception(0x10);
    local_28 = QString::fromAscii_helper("sharedFolder param is 0",0x17);
    FUN_1004eb830(uVar1,&local_28);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar1,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  FUN_1004d2a70(&local_30,*(long *)(param_1 + 0x50) + 0x48,param_1);
  local_34 = local_30[3] - local_30[2];
  FUN_100040e10(param_2,3,&local_34,4);
  FUN_1004ebc70(&local_58,&local_30);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      FUN_1004e7030(**(undefined4 **)local_50,*(undefined8 *)(*(undefined4 **)local_50 + 2),param_2)
      ;
      local_50 = local_50 + 2;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_19 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004e7314;
    }
    FUN_1004d70c0(&local_58,local_58);
  }
LAB_1004e7314:
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
    FUN_1004d70c0(&local_30,local_30);
  }
  return;
}

