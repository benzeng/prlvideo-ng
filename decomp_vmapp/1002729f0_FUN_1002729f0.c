
undefined8 FUN_1002729f0(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (3 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",4,"CNetDevice::ResumeState(%d) adapter_type = 0x%x",
                  *(undefined4 *)(param_1 + 0x150),*param_2);
  }
  if (*(long *)(param_1 + 0x170) == 0) {
    uVar2 = 0;
    FUN_1008e3970("","LocalDevices",0,
                  "CNetDevice::ResumeState(%d) adapter_type = 0x%x. NULL == m_pvsnet.",
                  *(undefined4 *)(param_1 + 0x150),*param_2);
  }
  else {
    FUN_100276490(param_1,*param_2);
    uVar2 = 0xffffffff;
    if (*(long *)(param_1 + 0x188) != 0) {
      iVar1 = _memcmp(param_2 + 10,(void *)(param_1 + 0x1bc),6);
      if ((iVar1 != 0) &&
         ((*(ushort *)(param_2 + 0xb) &
          *(ushort *)((long)param_2 + 0x2a) & *(ushort *)(param_2 + 10)) != 0)) {
        FUN_10027a1c0(param_1,param_2 + 10);
      }
      FUN_1002790d0(param_1,*(uint *)(*(long *)(param_1 + 0x160) + 0x10) & 8);
                    /* WARNING: Could not recover jumptable at 0x000100272acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(long **)(param_1 + 0x188) + 0x28))
                        (*(long **)(param_1 + 0x188),param_2);
      return uVar2;
    }
  }
  return uVar2;
}

