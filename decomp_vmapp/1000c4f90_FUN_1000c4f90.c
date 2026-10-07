
bool FUN_1000c4f90(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(*param_2 >> 2);
  uVar1 = FUN_1000c4920();
  if (uVar1 != uVar2) {
    FUN_1008e3970("","vm",0,
                  "CVcpuProfiler::ProcessEvents() Couldn\'t create new stat elements%i (%d)",uVar1,
                  uVar2);
  }
  else {
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
  }
  return uVar1 == uVar2;
}

