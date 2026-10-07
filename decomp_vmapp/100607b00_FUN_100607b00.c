
void FUN_100607b00(long param_1,uint param_2,ulong param_3,undefined2 param_4,uint param_5)

{
  int iVar1;
  
  ___bzero(param_1,0xf9);
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined2 *)(param_1 + 10) = 3;
  *(undefined2 *)(param_1 + 0x22) = param_4;
  *(uint *)(param_1 + 0x34) = param_5 | 2;
  *(short *)(param_1 + 0x20) = (short)(param_3 & 0xffffffff);
  iVar1 = (int)((ulong)param_2 / (param_3 & 0xffffffff));
  *(int *)(param_1 + 0x24) = iVar1;
  *(int *)(param_1 + 0x28) = iVar1 + -1;
  *(uint *)(param_1 + 0x2e) = param_2;
  return;
}

