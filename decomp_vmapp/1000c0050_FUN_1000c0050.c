
ulong FUN_1000c0050(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uVar2 = 1;
  if ((*(byte *)(*(long *)(param_1 + 0x109c8) + 499) & 10) == 0) {
    iVar1 = FUN_10008cd70(*(undefined8 *)(param_1 + 0x1940),0,0xa0000);
    if (iVar1 < 0) {
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      FUN_100408ff0(param_1 + 0x10b0,0x80000392,&local_28);
      FUN_10002d9d0(&local_28);
      uVar2 = 0;
    }
    else {
      FUN_1000dce90();
      if (*(int *)(param_1 + 0xb60) == 0) {
        FUN_1000bf950(param_1,0x3b);
      }
      else {
        FUN_1000bf950(param_1,0x4b);
      }
      uVar2 = FUN_100409070(param_1 + 0x10b0);
      uVar2 = uVar2 ^ 1;
    }
  }
  return uVar2;
}

