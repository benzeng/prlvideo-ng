
ulong FUN_1000c5720(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar6 = (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x28);
  uVar2 = (ulong)((*(int *)(lVar1 + 0x14) - *(int *)(lVar1 + 0x10) & *(uint *)(lVar1 + 0x24)) * 1000
                 );
  uVar5 = uVar2 / uVar6;
  if (*(int *)(param_1 + 0x40) <= (int)uVar5) {
    iVar3 = FUN_1000c54b0(param_1,param_2,uVar2 % uVar6);
    uVar4 = *(int *)(param_1 + 0x28) + 1;
    *(uint *)(param_1 + 0x28) = uVar4;
    uVar5 = (ulong)uVar4 / (ulong)*(uint *)(param_1 + 0x2c);
    if ((iVar3 != 0) && (uVar4 % *(uint *)(param_1 + 0x2c) == 0)) {
      FUN_1008e3970("","vm",0," ");
      uVar5 = FUN_1008e3970("","vm",0,
                            "     VMM/VM time profiling statistics >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"
                           );
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar6 = 0;
        do {
          FUN_1000c4ed0(*(undefined8 *)(param_1 + 0x48 + uVar6 * 8));
          uVar6 = uVar6 + 1;
          uVar5 = (ulong)*(uint *)(param_1 + 0x10);
        } while (uVar6 < uVar5);
      }
    }
  }
  return uVar5;
}

