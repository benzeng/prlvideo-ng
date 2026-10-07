
undefined8 FUN_1005696d0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1[600] != 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_DirtyTracker",
                  "DiskStatesImp.cpp",0x128b,"CreateDirtyTracker");
  }
  puVar1 = operator_new(0x38,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = puVar1 + 1;
    puVar1[2] = puVar1 + 1;
    *puVar1 = &PTR_FUN_100bc72a0;
    puVar1[3] = param_2;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[6] = param_1;
    param_1[600] = (long)puVar1;
                    /* WARNING: Could not recover jumptable at 0x000100569797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x1f0))(param_1,puVar1);
    return uVar2;
  }
  param_1[600] = 0;
  return 0x80000002;
}

