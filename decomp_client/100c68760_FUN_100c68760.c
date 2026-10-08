
undefined8 FUN_100c68760(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_4 >> 0x3e != 0) {
    uVar2 = param_4 + 0xc000000000000000;
    uVar4 = uVar2 & 0xc000000000000000;
    lVar1 = param_3 + uVar4 + 0x4000000000000000;
    lVar5 = param_2;
    do {
      lVar3 = *(long *)(param_1 + 0x78);
      FUN_100c0a5a0(param_3,lVar5,0x4000000000000000,lVar3,lVar3 + 0x80,lVar3 + 0x100,param_1 + 0x28
                    ,*(undefined4 *)(param_1 + 0x10));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      lVar5 = lVar5 + 0x4000000000000000;
    } while (0x3fffffffffffffff < param_4);
    param_2 = param_2 + uVar4 + 0x4000000000000000;
    param_4 = uVar2 - uVar4;
    param_3 = lVar1;
  }
  if (param_4 != 0) {
    lVar1 = *(long *)(param_1 + 0x78);
    FUN_100c0a5a0(param_3,param_2,param_4,lVar1,lVar1 + 0x80,lVar1 + 0x100,param_1 + 0x28,
                  *(undefined4 *)(param_1 + 0x10));
  }
  return 1;
}

