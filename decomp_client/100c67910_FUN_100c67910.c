
undefined8 FUN_100c67910(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar3 = uVar1 & 0xc000000000000000;
    lVar2 = param_3 + uVar3 + 0x4000000000000000;
    lVar4 = param_2;
    do {
      FUN_100c06230(param_3,lVar4,0x4000000000000000,*(undefined8 *)(param_1 + 0x78),param_1 + 0x28,
                    param_1 + 0x58,*(undefined4 *)(param_1 + 0x10));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      lVar4 = lVar4 + 0x4000000000000000;
    } while (0x3fffffffffffffff < param_4);
    param_2 = param_2 + uVar3 + 0x4000000000000000;
    param_4 = uVar1 - uVar3;
    param_3 = lVar2;
  }
  if (param_4 != 0) {
    FUN_100c06230(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0x78),param_1 + 0x28,
                  param_1 + 0x58,*(undefined4 *)(param_1 + 0x10));
  }
  return 1;
}

