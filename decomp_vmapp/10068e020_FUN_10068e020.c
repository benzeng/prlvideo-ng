
undefined8 FUN_10068e020(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL != si","DiskImageComp.cpp",
                  0x526,"UpdateBATSync");
  }
  if (param_2 < *(ulong *)(lVar1 + 0x70)) {
    uVar2 = FUN_100699600(param_1,param_2,param_3);
    return uVar2;
  }
  FUN_1008e3970("","dimg",0,"Error: UpdateBATSync failed, wrong image offset %llu, image size %llu",
                param_2);
  return 0x80021056;
}

