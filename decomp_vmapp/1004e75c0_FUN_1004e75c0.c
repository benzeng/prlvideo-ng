
void FUN_1004e75c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  uint local_1c;
  
  if (param_1 == 0) {
    uVar2 = ___cxa_allocate_exception(0x10);
    local_28 = QString::fromAscii_helper("sharedFolder param is 0",0x17);
    FUN_1004eb830(uVar2,&local_28);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_100040e10(param_2,1,*(long *)(lVar1 + 0x10) + lVar1,*(int *)(lVar1 + 4) * 2 + 2);
  lVar1 = *(long *)(param_1 + 0x18);
  FUN_100040e10(param_2,1,*(long *)(lVar1 + 0x10) + lVar1,*(int *)(lVar1 + 4) * 2 + 2);
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_100040e10(param_2,1,*(long *)(lVar1 + 0x10) + lVar1,*(int *)(lVar1 + 4) * 2 + 2);
  local_2c = 0;
  FUN_100040e10(param_2,3,&local_2c,4);
  local_1c = (uint)*(byte *)(param_1 + 0x30);
  FUN_100040e10(param_2,4,&local_1c,4);
  local_1c = 0;
  FUN_100040e10(param_2,4,&local_1c,4);
  local_1c = 1;
  FUN_100040e10(param_2,4,&local_1c,4);
  FUN_100040e10(param_2,3,param_1 + 0x58,4);
  (**(code **)**(undefined8 **)(param_1 + 0x60))(&local_38);
  FUN_100040e10(param_2,0x46,local_38 + *(long *)(local_38 + 0x10),*(undefined4 *)(local_38 + 4));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      local_1c = CONCAT31(local_1c._1_3_,*(int *)local_38 != 0);
      if (*(int *)local_38 != 0) goto LAB_1004e771a;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1004e771a:
  FUN_1004e7230(param_1,param_2);
  FUN_1004e7470(param_1,param_2);
  return;
}

