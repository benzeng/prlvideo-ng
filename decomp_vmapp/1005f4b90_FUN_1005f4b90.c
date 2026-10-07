
void FUN_1005f4b90(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","disk != NULL",
                  "IMergeThrottler.cpp",0x18,"AddDisk");
  }
  FUN_1005f4e20(param_2,param_3,param_4,param_1);
  return;
}

