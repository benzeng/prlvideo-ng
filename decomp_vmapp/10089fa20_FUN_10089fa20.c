
void FUN_10089fa20(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  uVar4 = *(ulong *)(param_2 + 0x10) & 8;
  uVar5 = 0xffffffff;
  if (uVar4 == 0) {
    uVar5 = 5;
  }
  uVar1 = FUN_1008946b0(param_2);
  lVar2 = FUN_100821870(uVar1);
  if (param_1 != (long *)0x0) {
    if ((uVar4 == 0) && (param_1[1] == 0)) {
      lVar3 = FUN_1008a8980();
      param_1[1] = lVar3;
      if (lVar3 == 0) {
        return;
      }
    }
    if (*param_1 != 0) {
      FUN_100899890();
    }
    *param_1 = lVar2;
    if (uVar4 == 0) {
      FUN_10089b8d0(param_1[1],uVar5,0);
      return;
    }
    if (param_1[1] != 0) {
      FUN_1008a89a0();
      param_1[1] = 0;
    }
  }
  return;
}

