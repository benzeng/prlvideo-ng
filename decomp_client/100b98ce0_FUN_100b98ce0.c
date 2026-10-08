
undefined8 FUN_100b98ce0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    uVar1 = *(uint *)(param_1 + 0xcc);
    if (((uVar1 <= DAT_1022cf534) &&
        ((uVar1 < DAT_1022cf534 || (*(uint *)(param_1 + 200) < DAT_1022cf530)))) ||
       ((DAT_1022cf53c <= uVar1 &&
        ((DAT_1022cf53c < uVar1 || (DAT_1022cf538 < *(uint *)(param_1 + 200))))))) {
      uVar2 = FUN_100b9d470(0xfffffff4,0);
      return uVar2;
    }
  }
  return 0;
}

