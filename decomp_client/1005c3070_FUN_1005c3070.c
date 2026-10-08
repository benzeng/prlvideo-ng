
long FUN_1005c3070(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_1005b87b0(*(undefined8 *)(param_1 + 0x18));
  lVar3 = 0x10;
  if (lVar2 != 0) {
    lVar3 = 0xf;
    if (*(char *)(*(long *)(param_1 + 0x18) + 0x6d) == '\0') {
      bVar1 = FUN_1005b99e0();
      lVar3 = (ulong)bVar1 * 3 + 0x10;
    }
  }
  return lVar3;
}

