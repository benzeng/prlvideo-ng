
undefined8 FUN_100c68d60(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar4 = uVar1 & 0xc000000000000000;
    lVar2 = param_3 + uVar4 + 0x4000000000000000;
    lVar5 = param_2;
    do {
      lVar3 = *(long *)(param_1 + 0x78);
      FUN_100c06630(param_3,lVar5,8,0x4000000000000000,lVar3,lVar3 + 0x80,lVar3 + 0x100,
                    param_1 + 0x28,*(undefined4 *)(param_1 + 0x10));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      lVar5 = lVar5 + 0x4000000000000000;
    } while (0x3fffffffffffffff < param_4);
    param_2 = param_2 + uVar4 + 0x4000000000000000;
    param_4 = uVar1 - uVar4;
    param_3 = lVar2;
  }
  if (param_4 != 0) {
    lVar2 = *(long *)(param_1 + 0x78);
    FUN_100c06630(param_3,param_2,8,param_4,lVar2,lVar2 + 0x80,lVar2 + 0x100,param_1 + 0x28,
                  *(undefined4 *)(param_1 + 0x10));
  }
  return 1;
}

