
ulong FUN_100575610(long *param_1)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  
  if (param_1[599] != 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_UsedSpaceTracker",
                  "DiskStatesImp.cpp",0x1271,"CreateUsedSpaceTracker");
  }
  pvVar2 = operator_new(0x30,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar2 == (void *)0x0) {
    param_1[599] = 0;
    uVar3 = 0x80000002;
  }
  else {
    FUN_1005f4320(pvVar2);
    param_1[599] = (long)pvVar2;
    uVar1 = FUN_1005f43d0(pvVar2,param_1);
    uVar3 = (ulong)uVar1;
    if (-1 < (int)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001005756c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x1f0))(param_1,param_1[599]);
      return uVar3;
    }
    if ((long *)param_1[599] != (long *)0x0) {
      (**(code **)(*(long *)param_1[599] + 0x28))();
    }
    param_1[599] = 0;
  }
  return uVar3;
}

