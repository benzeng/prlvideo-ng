
undefined1 FUN_1007628d0(long param_1,undefined8 *param_2,uint *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  void *local_38;
  uint local_30;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    uVar3 = 0;
    FUN_1008e3970("","etrace",0,"Etrace is not initialized yet...");
  }
  else if ((param_2 == (undefined8 *)0x0) || (param_3 == (uint *)0x0)) {
    uVar3 = 0;
    FUN_1008e3970("","etrace",0,"Either mem or size is NULL (%p, %p)",param_2,param_3);
  }
  else {
    uVar2 = (ulong)*(uint *)(lVar1 + 8) % (ulong)*(uint *)(param_1 + 0x1c);
    if ((*(ulong *)(lVar1 + 0x30 + uVar2 * 0x10) & 0xffffffffffff) == 0) {
      iVar5 = (int)uVar2 << 4;
    }
    else {
      iVar5 = *(uint *)(param_1 + 0x1c) * 0x10 + 0x10;
    }
    uVar4 = iVar5 + 0x30;
    local_38 = _malloc((ulong)uVar4);
    *param_2 = local_38;
    *param_3 = uVar4;
    local_30 = uVar4;
    uVar3 = FUN_100767790(param_1,&local_38);
  }
  return uVar3;
}

