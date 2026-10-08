
undefined8 FUN_100bd6db0(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  uVar3 = 0;
  if ((((lVar1 != 0x20) && (lVar1 != 0x40)) && (lVar1 != 0x80)) &&
     (((uVar3 = 0, *(long *)(param_1 + 0x20) != 0x10 && (*(long *)(param_1 + 0x20) != 0x40)) &&
      (uVar3 = 3, param_2 != (undefined1 *)0x0)))) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = (char)((ulong)uVar2 >> 0x10);
    param_2[1] = (char)((ulong)uVar2 >> 8);
    param_2[2] = (char)uVar2;
  }
  return uVar3;
}

