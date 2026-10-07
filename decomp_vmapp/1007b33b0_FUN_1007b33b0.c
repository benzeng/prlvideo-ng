
undefined8 FUN_1007b33b0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1007cdc00(param_1 + 400);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x330) != 0) {
      FUN_10087d4e0();
      *(undefined8 *)(param_1 + 0x330) = 0;
    }
    if (*(long *)(param_1 + 0x338) != 0) {
      FUN_10087d4e0();
      *(undefined8 *)(param_1 + 0x338) = 0;
    }
    if (*(long *)(param_1 + 0x340) != 0) {
      FUN_10087d4e0();
      *(undefined8 *)(param_1 + 0x340) = 0;
    }
    if (*(long *)(param_1 + 0x328) != 0) {
      FUN_10080dae0();
      *(undefined8 *)(param_1 + 0x328) = 0;
    }
    if (*(long *)(param_1 + 0x348) != 0) {
      FUN_1007d0390();
      if (*(void **)(param_1 + 0x348) != (void *)0x0) {
        operator_delete(*(void **)(param_1 + 0x348));
      }
      *(undefined8 *)(param_1 + 0x348) = 0;
    }
    do {
      lVar2 = FUN_100888110();
    } while (lVar2 != 0);
    FUN_1007cf420();
    uVar3 = 1;
  }
  return uVar3;
}

