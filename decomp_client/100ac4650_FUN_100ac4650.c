
void FUN_100ac4650(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined1 local_24 [4];
  
  lVar4 = *(long *)(*(long *)(param_1 + 0xaf8) + 0x10);
  lVar2 = 0;
  if (lVar4 != 0) {
    do {
      while (uVar5 = *(uint *)(lVar4 + 0x18), uVar5 < param_3) {
        plVar1 = (long *)(lVar4 + 0x10);
        lVar4 = *plVar1;
        if (*plVar1 == 0) {
          if (lVar2 == 0) goto LAB_100ac46ac;
          uVar5 = *(uint *)(lVar2 + 0x18);
          goto LAB_100ac46a8;
        }
      }
      plVar1 = (long *)(lVar4 + 8);
      lVar2 = lVar4;
      lVar4 = *plVar1;
    } while (*plVar1 != 0);
LAB_100ac46a8:
    if (uVar5 <= param_3) {
      return;
    }
  }
LAB_100ac46ac:
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("CHRCLIENT","ChrToolClient",3,"Add entering to FS window");
  }
  puVar3 = (undefined8 *)FUN_100ac7fa0(param_1 + 0xaf8,local_24);
  *puVar3 = param_2;
  return;
}

