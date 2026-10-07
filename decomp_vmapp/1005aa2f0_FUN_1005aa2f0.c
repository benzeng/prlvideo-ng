
undefined8 FUN_1005aa2f0(long param_1,ulong param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  
  uVar1 = 0x80000011;
  if (((*(long *)(param_1 + 0x10) == 0) && (uVar1 = 0x80000003, param_2 != 0)) && (param_3 != 0)) {
    iVar3 = (int)(param_2 / param_3);
    *(int *)(param_1 + 0x1c) = iVar3;
    uVar4 = (ulong)(iVar3 + 0x3fU >> 3) & 0x1ffffff8;
    pvVar2 = _valloc(uVar4);
    *(void **)(param_1 + 8) = pvVar2;
    uVar1 = 0x80000002;
    if (pvVar2 != (void *)0x0) {
      _memset(pvVar2,0xff,uVar4);
      *(uint *)(param_1 + 0x18) = param_3;
      *(ulong *)(param_1 + 0x10) = param_2;
      *(undefined4 *)(param_1 + 0x20) = param_4;
      uVar1 = 0;
    }
  }
  return uVar1;
}

