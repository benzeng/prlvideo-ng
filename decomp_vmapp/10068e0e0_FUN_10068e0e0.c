
undefined8 FUN_10068e0e0(long *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*param_1 + -0xd0);
  lVar2 = *(long *)((long)param_1 + lVar1 + 0x20);
  if (lVar2 == 0) {
    FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL != si","DiskImageComp.cpp",
                  0x526,"UpdateBATSync");
  }
  if (param_2 < *(ulong *)(lVar2 + 0x70)) {
    uVar3 = FUN_100699600((long)param_1 + lVar1,param_2,param_3);
    return uVar3;
  }
  FUN_1008e3970("","dimg",0,"Error: UpdateBATSync failed, wrong image offset %llu, image size %llu",
                param_2);
  return 0x80021056;
}

