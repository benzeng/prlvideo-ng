
void FUN_1005340f0(long param_1,undefined8 param_2,long *param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (param_4 < 4) {
    return;
  }
  puVar2 = *(uint **)(*param_3 + 0x10);
  uVar1 = *puVar2;
  if ((uVar1 < 5) && ((0x16U >> (uVar1 & 0x1f) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    cVar3 = FUN_1000a7e70(*(undefined8 *)(param_1 + 0x48));
    if (cVar3 == '\0') {
      uVar4 = 1;
    }
    else {
      if (*(int *)(*(long *)(param_1 + 0x48) + 0xa4) != 4) {
        FUN_1000a7e40(*(long *)(param_1 + 0x48),*puVar2);
        return;
      }
      uVar4 = 3;
    }
    FUN_1005341a0(param_1,uVar4);
    return;
  }
  FUN_1008e3970("","OnConsoleClosingHost",0,"Unknown console event: %d");
  return;
}

