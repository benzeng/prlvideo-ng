
undefined8 FUN_100719f00(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    uVar1 = *(uint *)(param_1 + 0xcc);
    if (((uVar1 <= DAT_10116db64) &&
        ((uVar1 < DAT_10116db64 || (*(uint *)(param_1 + 200) < DAT_10116db60)))) ||
       ((DAT_10116db6c <= uVar1 &&
        ((DAT_10116db6c < uVar1 || (DAT_10116db68 < *(uint *)(param_1 + 200))))))) {
      uVar2 = FUN_10071e690(0xfffffff4,0);
      return uVar2;
    }
  }
  return 0;
}

