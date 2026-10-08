
undefined8 FUN_1006aeb30(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
  uVar2 = FUN_100319c60(uVar2);
  cVar1 = FUN_10033c480(uVar2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
    uVar2 = FUN_100319c50(uVar2);
    uVar2 = FUN_100330a50(uVar2);
  }
  return uVar2;
}

