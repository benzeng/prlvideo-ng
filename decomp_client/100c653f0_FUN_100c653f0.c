
void FUN_100c653f0(int *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    uVar1 = FUN_100c652b0(param_2,param_1 + 2);
    uVar2 = uVar1 + 1;
    *(undefined1 *)(param_2 + (ulong)uVar1) = 10;
    *(undefined1 *)(param_2 + (ulong)uVar2) = 0;
    *param_1 = 0;
  }
  *param_3 = uVar2;
  return;
}

