
undefined8 FUN_100267930(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0x3000000a;
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    cVar1 = FUN_10018f900();
    uVar2 = 0x3000000a;
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
  }
  return uVar2;
}

