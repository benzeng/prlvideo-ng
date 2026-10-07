
void FUN_1002aa8f0(long param_1,ulong param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  long lVar1;
  
  lVar1 = (param_2 & 0xffffffff) * 0x8f0;
  if (param_3 < *(uint *)(param_1 + 0x950 + lVar1)) {
    *(uint *)(param_1 + 0x950 + lVar1) = param_3;
  }
  if (param_4 < *(uint *)(param_1 + 0x954 + lVar1)) {
    *(uint *)(param_1 + 0x954 + lVar1) = param_4;
  }
  if (*(uint *)(param_1 + 0x958 + lVar1) < param_5) {
    *(uint *)(param_1 + 0x958 + lVar1) = param_5;
  }
  if (*(uint *)(param_1 + 0x95c + lVar1) < param_6) {
    *(uint *)(param_1 + 0x95c + lVar1) = param_6;
  }
  return;
}

