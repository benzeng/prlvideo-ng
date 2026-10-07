
void FUN_1002dba60(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  
  puVar1 = (ulong *)(param_1 + 0xb8);
  uVar2 = DAT_101116bca + 1;
  if (0x3f < uVar2) {
    do {
      if (*puVar1 != 0) goto LAB_1002dbaac;
      puVar1 = puVar1 + 1;
      uVar2 = uVar2 - 0x40;
    } while (0x3f < uVar2);
    if (uVar2 == 0) goto LAB_1002dbab2;
  }
  if ((*puVar1 & 0xffffffffffffffffU >> (0x40U - (char)uVar2 & 0x3f)) != 0) {
LAB_1002dbaac:
    FUN_1002db960();
    return;
  }
LAB_1002dbab2:
  FUN_1002de350();
  return;
}

