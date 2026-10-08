
undefined8 FUN_10033c9c0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = FUN_100319c50(uVar2);
  cVar1 = FUN_100330a50(uVar2);
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar2 = FUN_100319c50(uVar2);
    uVar2 = FUN_100330b70(uVar2);
  }
  return uVar2;
}

