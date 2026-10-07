
undefined1 FUN_100547460(ulong *param_1,long param_2,long param_3,uint param_4,long param_5)

{
  ulong uVar1;
  char *pcVar2;
  
  if (param_5 == 0) {
    FUN_1008e3970("","TransMem",0,"CBuffCompressionCtx::check_buff() invalid buffer");
  }
  else if (*(uint *)(param_2 + 8) < param_4) {
    FUN_1008e3970("","TransMem",0,"CBuffCompressionCtx::check_buff() invalid size %u",param_4);
  }
  else {
    uVar1 = *param_1;
    if (uVar1 < (ulong)param_4 + param_3) {
      pcVar2 = "CBuffCompressionCtx::check_buff() buffer %#llx[%u] is out of the data size %#llx";
    }
    else {
      if (*(uint *)(param_2 + 8) <= param_4) {
        return 1;
      }
      if ((ulong)param_4 + param_3 == uVar1) {
        return 1;
      }
      pcVar2 = "CBuffCompressionCtx::check_buff() invalid buffer %#llx[%u], data size %#llx";
    }
    FUN_1008e3970("","TransMem",0,pcVar2,param_3,param_4,uVar1);
  }
  return 0;
}

