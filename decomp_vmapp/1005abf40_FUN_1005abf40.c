
void FUN_1005abf40(long param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3,int param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","BlockGroup.cpp",0x20a,
                  "GetElementAsync");
    return;
  }
  uVar1 = param_5 / *(uint *)(param_1 + 0x1c) >> 0xc;
  if ((uint)uVar1 < *(uint *)(param_1 + 0x18)) {
    if ((param_4 == -1) || (*(int *)(param_1 + 0x34) == param_4)) {
      FUN_1005ac050(param_1,(uVar1 & 0xffffffff) * 0x40 + *(long *)(param_1 + 0x10),
                    UNRECOVERED_JUMPTABLE,param_3,param_4,param_5);
      return;
    }
    FUN_1008e3970("","vdisk",0,"Error: unknown layer %u");
    uVar2 = 0x80021011;
  }
  else {
    FUN_1008e3970("","vdisk",0,"Error: group for LBA %llu out of storage",param_5);
    uVar2 = 0x80021028;
  }
                    /* WARNING: Could not recover jumptable at 0x0001005ac04e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3,uVar2,0);
  return;
}

