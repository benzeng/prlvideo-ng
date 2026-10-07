
void FUN_100577e90(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((long *)*param_1 != param_1) {
    FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","!IsInOnWaitQueue()",
                  "DiskStatesImp.cpp",0x13e4,"StartOnWait");
  }
  lVar2 = param_1[4];
  if (param_1[3] != 0) {
    if ((long *)*param_1 == param_1) {
      puVar1 = *(undefined8 **)(lVar2 + 0x1240);
      *(long **)(lVar2 + 0x1240) = param_1;
      *param_1 = lVar2 + 0x1238;
      param_1[1] = (long)puVar1;
      *puVar1 = param_1;
    }
    else {
      FUN_1008e3970("","vdisk",0,"Error: CallOnWait: double cd_list_add");
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",0x8c3,
                    "CallOnWait");
      lVar2 = param_1[4];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100577f92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 0x1210) + 0x10))();
  return;
}

