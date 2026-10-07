
void FUN_1004e6710(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    FUN_100040e10(param_2,1,*(long *)(lVar1 + 0x10) + lVar1,*(int *)(lVar1 + 4) * 2 + 2);
    local_38 = (long)(int)param_1[2];
    FUN_100040e10(param_2,2,&local_38,8);
    local_3c = 0;
    FUN_100040e10(param_2,3,&local_3c,4);
    FUN_100040e10(param_2,3,&local_3c,4);
    FUN_100040e10(param_2,3,&local_3c,4);
    local_28._0_4_ = (uint)*(byte *)((long)param_1 + 0x14);
    FUN_100040e10(param_2,4,&local_28,4);
    local_28 = (ulong)local_28._4_4_ << 0x20;
    FUN_100040e10(param_2,4,&local_28,4);
    local_28 = 0;
    FUN_100040e10(param_2,5,&local_28,8);
    local_28 = 0;
    FUN_100040e10(param_2,5,&local_28,8);
    local_40 = 0;
    FUN_100040e10(param_2,3,&local_40,4);
    local_48 = 0;
    FUN_100040e10(param_2,6,&local_48,8);
    return;
  }
  uVar2 = ___cxa_allocate_exception(0x10);
  local_30 = QString::fromAscii_helper("osFile param is 0",0x11);
  FUN_1004eb830(uVar2,&local_30);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
}

