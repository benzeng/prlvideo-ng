
undefined8 FUN_10042c6a0(int *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ssize_t sVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 == 0) {
    sVar4 = _pread(*param_1,&local_40,0x20,param_2);
    if (sVar4 == 0x20) {
LAB_10042c724:
      iVar3 = (int)local_40;
      if ((int)local_40 == -0x30051202) {
        FUN_10042c0b0(&local_40);
      }
      *(undefined8 **)(param_1 + 10) = &local_40;
      param_1[0xc] = 0x20;
      param_1[0xd] = 0;
      *(ulong *)(param_1 + 0xe) = param_2;
      uVar5 = FUN_10042c960(param_1,param_2 + 0x20,local_30 & 0xffffffff,iVar3 == -0x30051202);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      return uVar5;
    }
  }
  else if (-1 < (long)param_2) {
    uVar2 = *(ulong *)(param_1 + 4);
    if (param_2 + 0x20 <= uVar2) {
      local_28 = *(undefined8 *)(lVar1 + 0x18 + param_2);
      local_30 = *(ulong *)(lVar1 + 0x10 + param_2);
      local_40 = *(undefined8 *)(lVar1 + param_2);
      local_38 = *(undefined8 *)(lVar1 + 8 + param_2);
      goto LAB_10042c724;
    }
    if (param_2 <= uVar2 && uVar2 - param_2 != 0) {
      _memcpy(&local_40,(void *)(lVar1 + param_2),uVar2 - param_2);
    }
  }
  return 0;
}

