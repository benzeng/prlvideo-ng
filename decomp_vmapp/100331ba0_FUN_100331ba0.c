
undefined8 FUN_100331ba0(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = **(int **)(param_3 + 0x10);
  lVar2 = FUN_10032ebe0(*(undefined8 *)(param_1 + 0x38));
  if (lVar2 != 0) {
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x868) != 0) {
      plVar1 = *(long **)(lVar2 + 0x40);
      if ((int)((ulong)((long)*(long **)(lVar2 + 0x48) - (long)plVar1) >> 3) == 1) {
        lVar4 = 0;
        if (*(long **)(lVar2 + 0x48) != plVar1) {
          lVar4 = *plVar1;
        }
        FUN_1002adb30();
        if (iVar3 != *(int *)(lVar4 + 0x14)) {
          FUN_100380a30(lVar4,iVar3);
          iVar3 = *(int *)(lVar4 + 0x14);
        }
        (*DAT_1011c5768)(iVar3,*(undefined4 *)(lVar4 + 0xc));
        FUN_1002fabf0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_3 + 0x10),0x404);
        (*DAT_1011c5768)(*(undefined4 *)(lVar4 + 0x14),0);
        (*DAT_1011c5d48)();
        **(uint **)(lVar4 + 0x88) = **(uint **)(lVar4 + 0x88) | 1;
        *(byte *)(lVar4 + 0xac) = *(byte *)(lVar4 + 0xac) | 4;
        *(byte *)(lVar2 + 0xa8) = *(byte *)(lVar2 + 0xa8) | 1;
      }
    }
  }
  return 0;
}

