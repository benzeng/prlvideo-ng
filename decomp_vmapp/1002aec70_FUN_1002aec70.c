
void FUN_1002aec70(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 1000 % (ulong)*(uint *)(param_1 + 0x8c4);
  iVar1 = *(int *)(param_1 + 0x1186c);
  if (param_2 < (uint)(1000 / (ulong)*(uint *)(param_1 + 0x8c4))) {
    if (iVar1 < 0) {
      FUN_100257850(3,param_2,uVar2);
    }
    *(undefined4 *)(param_1 + 0x1186c) = 0;
  }
  else if ((-1 < iVar1) && (*(int *)(param_1 + 0x1186c) = iVar1 + 1, 1 < iVar1)) {
    FUN_100257850(2,param_2,uVar2);
    *(undefined4 *)(param_1 + 0x1186c) = 0xffffffff;
  }
  return;
}

