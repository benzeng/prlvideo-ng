
void FUN_100273980(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  
  iVar1 = *param_2;
  if (3 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",4,"CNetDevice::ProcessNetRequest: %d; enable_param 0x%llx",iVar1
                  ,*(undefined8 *)(param_2 + 2));
  }
  if (iVar1 != 5) {
    if (iVar1 == 7) {
      if (*(long **)(param_1 + 0x188) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002739ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x188) + 0x38))();
        return;
      }
    }
    else if (iVar1 == 6) {
      plVar2 = *(long **)(param_1 + 0x188);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,*(undefined8 *)(param_2 + 2));
        uVar3 = FUN_1002734e0();
        if ((uVar3 < 0x14) && ((*(ulong *)(param_2 + 2) & 2) != 0)) {
          FUN_1008e3970("","LocalDevices",0,
                        "Reset after %u seconds of resume; scheduling DHCP renew",uVar3);
          FUN_10010dd40(3000,FUN_100273590,0);
          return;
        }
      }
    }
    else {
      plVar2 = *(long **)(param_1 + 0x188);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100273aa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
        return;
      }
    }
    return;
  }
  FUN_1002790d0(param_1,*(uint *)(*(long *)(param_1 + 0x160) + 0x10) & 8);
  return;
}

