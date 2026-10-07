
undefined8 FUN_1002d81f0(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_3;
  if (1 < DAT_1011c568c) {
    puVar1 = (&PTR_s_SETUP_100bb3ab0)[uVar4];
    uVar2 = FUN_1002da490(*(undefined1 *)(param_1 + 0xf7),*(undefined1 *)(param_1 + 0xf8),
                          *(undefined2 *)(param_1 + 0xf9),*(undefined2 *)(param_1 + 0xfb),
                          *(undefined2 *)(param_1 + 0xfd));
    FUN_1008e3970("","USB",0,"[%s] Control Request %s[%s]",param_1 + 0xcf,puVar1,uVar2);
  }
  bVar3 = *(byte *)(param_1 + 0xf7) >> 5 & 3;
  if (bVar3 - 1 < 2) {
    uVar2 = FUN_1002d8ee0(param_1,param_2,uVar4);
    return uVar2;
  }
  if (bVar3 != 0) {
    *(undefined4 *)(param_2 + 0x468) = 4;
    return 1;
  }
  if ((char)*(byte *)(param_1 + 0xf7) < '\0') {
    uVar2 = FUN_1002d8320(param_1,param_2,uVar4);
    return uVar2;
  }
  uVar2 = FUN_1002d87d0();
  return uVar2;
}

