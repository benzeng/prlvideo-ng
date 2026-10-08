
undefined8 FUN_100c68a60(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_3;
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar3 = uVar1 & 0xc000000000000000;
    lVar5 = param_3 + uVar3 + 0x4000000000000000;
    lVar4 = param_2;
    do {
      lVar2 = *(long *)(param_1 + 0x78);
      FUN_100c07740(param_3,lVar4,0x4000000000000000,lVar2,lVar2 + 0x80,lVar2 + 0x100,param_1 + 0x28
                    ,param_1 + 0x58);
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      lVar4 = lVar4 + 0x4000000000000000;
    } while (0x3fffffffffffffff < param_4);
    param_2 = param_2 + uVar3 + 0x4000000000000000;
    param_4 = uVar1 - uVar3;
  }
  if (param_4 != 0) {
    lVar4 = *(long *)(param_1 + 0x78);
    FUN_100c07740(lVar5,param_2,param_4,lVar4,lVar4 + 0x80,lVar4 + 0x100,param_1 + 0x28,
                  param_1 + 0x58);
  }
  return 1;
}

