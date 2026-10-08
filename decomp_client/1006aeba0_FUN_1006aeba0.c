
undefined8 FUN_1006aeba0(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_10018f860(*(undefined8 *)(param_1 + 0x20));
  if (iVar2 == 8) {
    uVar3 = FUN_10018f890(*(undefined8 *)(param_1 + 0x20));
    if (uVar3 < 0x802) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
      uVar4 = FUN_100319c60(uVar4);
      cVar1 = FUN_10033c480(uVar4);
      if (cVar1 == '\0') {
        uVar4 = 0;
      }
      else {
        iVar2 = FUN_10018a9d0(*(undefined8 *)(param_1 + 0x20));
        uVar4 = 1;
        if (iVar2 != 0x30000004) {
          iVar2 = FUN_10018a9d0(*(undefined8 *)(param_1 + 0x20));
          if (iVar2 == 0x30000005) {
            uVar4 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
            uVar4 = FUN_100319c50(uVar4);
            uVar4 = FUN_100330a50(uVar4);
          }
          else {
            uVar4 = 0;
          }
        }
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

