
long FUN_1008617b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = FUN_10086a220();
  if ((uVar2 != 0) && (lVar3 = FUN_10081ddd0(uVar2 & 0xffffffff,"ec_print.c",0x8a), lVar3 != 0)) {
    lVar4 = FUN_10086a220(param_1,param_2,param_3,lVar3,uVar2,param_4);
    if ((lVar4 != 0) && (lVar4 = FUN_10081ddd0((int)uVar2 * 2 + 2,"ec_print.c",0x92), lVar4 != 0)) {
      uVar5 = 0;
      do {
        bVar1 = *(byte *)(lVar3 + uVar5);
        *(char *)(lVar4 + uVar5 * 2) = "0123456789ABCDEF"[bVar1 >> 4];
        *(char *)(lVar4 + 1 + uVar5 * 2) = "0123456789ABCDEF"[bVar1 & 0xf];
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
      *(undefined1 *)(lVar4 + uVar2 * 2) = 0;
      FUN_10081e1a0(lVar3);
      return lVar4;
    }
    FUN_10081e1a0(lVar3);
  }
  return 0;
}

