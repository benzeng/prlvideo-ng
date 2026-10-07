
void FUN_1004e7030(undefined4 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  uint local_24;
  
  local_28 = param_1;
  if (param_2 != (long *)0x0) {
    lVar1 = param_2[3];
    FUN_100040e10(param_3,1,*(long *)(lVar1 + 0x10) + lVar1,*(int *)(lVar1 + 4) * 2 + 2);
    local_34 = 0;
    FUN_100040e10(param_3,3,&local_34,4);
    local_24 = (uint)*(byte *)(param_2 + 5);
    FUN_100040e10(param_3,4,&local_24,4);
    local_24 = (uint)*(byte *)((long)param_2 + 0x29);
    FUN_100040e10(param_3,4,&local_24,4);
    FUN_100040e10(param_3,3,(long)param_2 + 0x2c,4);
    FUN_100040e10(param_3,3,param_2 + 6,4);
    FUN_100040e10(param_3,3,(long)param_2 + 0x34,4);
    iVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    local_24 = (uint)(iVar3 == 2);
    FUN_100040e10(param_3,4,&local_24,4);
    FUN_100040e10(param_3,3,&local_28,4);
    if (iVar3 == 2) {
      bVar2 = FUN_1004daa00(param_2);
    }
    else {
      bVar2 = 0;
    }
    local_24 = (uint)bVar2;
    FUN_100040e10(param_3,4,&local_24,4);
    FUN_1004e6710(param_2[4],param_3);
    return;
  }
  uVar4 = ___cxa_allocate_exception(0x10);
  local_30 = QString::fromAscii_helper("fsNode param is 0",0x11);
  FUN_1004eb830(uVar4,&local_30);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar4,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
}

