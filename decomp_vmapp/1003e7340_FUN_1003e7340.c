
undefined4 FUN_1003e7340(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = param_1[0x10];
  (**(code **)(*param_1 + 0xc0))();
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = 1;
  if ((uVar1 == *(uint *)((long)param_1 + 0x7c)) && (uVar3 = (int)lVar2, uVar1 < 3)) {
    uVar3 = *(undefined4 *)(&DAT_100b405cc + (long)(int)uVar1 * 4);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)((long)param_1 + 0x7c);
  return uVar3;
}

