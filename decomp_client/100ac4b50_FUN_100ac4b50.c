
void FUN_100ac4b50(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uStack_38;
  
  switch(*(undefined4 *)(param_3 + 0x28)) {
  case 0:
    FUN_100ac4700(param_1,*(undefined4 *)(param_3 + 0x20));
    lVar3 = FUN_1000a9690(param_1 + 0x988);
    uVar2 = FUN_100ad6030(param_1);
    if ((lVar3 != 0) && (0x80b < uVar2)) {
      FUN_1000b7b00(lVar3,param_2);
    }
    FUN_100ac3630(param_1,*(undefined4 *)(param_3 + 0x20));
    return;
  case 1:
    break;
  case 2:
  case 3:
    FUN_100ac4700(param_1,*(undefined4 *)(param_3 + 0x20));
    lVar3 = FUN_1000a9690(param_1 + 0x988);
    uVar2 = FUN_100ad6030(param_1);
    if ((lVar3 != 0) && (0x80b < uVar2)) {
      FUN_1000b7b00(lVar3,param_2);
    }
    QTimer::start();
    *(undefined1 *)(param_1 + 0xb88) = 1;
  default:
    return;
  }
  uVar2 = *(uint *)(param_3 + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 0xaf8) + 0x10);
  lVar4 = 0;
  uStack_38 = in_RAX;
  if (lVar3 != 0) {
    do {
      while (uVar6 = *(uint *)(lVar3 + 0x18), uVar2 <= uVar6) {
        plVar1 = (long *)(lVar3 + 8);
        lVar4 = lVar3;
        lVar3 = *plVar1;
        if (*plVar1 == 0) goto LAB_100ac4c78;
      }
      plVar1 = (long *)(lVar3 + 0x10);
      lVar3 = *plVar1;
    } while (*plVar1 != 0);
    if (lVar4 != 0) {
      uVar6 = *(uint *)(lVar4 + 0x18);
LAB_100ac4c78:
      if (uVar6 <= uVar2) goto LAB_100ac4cc7;
    }
  }
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("CHRCLIENT","ChrToolClient",3,"Add entering to FS window");
  }
  uStack_38 = CONCAT44(uVar2,(undefined4)uStack_38);
  puVar5 = (undefined8 *)FUN_100ac7fa0(param_1 + 0xaf8,(long)&uStack_38 + 4);
  *puVar5 = param_2;
  uVar2 = *(uint *)(param_3 + 0x20);
LAB_100ac4cc7:
  FUN_100ac4830(param_1,param_2,uVar2);
  return;
}

