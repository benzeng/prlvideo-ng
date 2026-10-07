
undefined4 FUN_1008c9ba0(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  int local_58 [12];
  
  if ((*(byte *)(param_1 + 0x49) & 1) == 0) {
    FUN_10081d010(9,3,"v3_purp.c",0x84);
    FUN_1008c9c90(param_1);
    FUN_10081d010(10,3,"v3_purp.c",0x86);
  }
  if (param_2 == -1) {
    return 1;
  }
  uVar3 = param_2 - 1;
  if (8 < uVar3) {
    if ((DAT_1011c2a10 == 0) ||
       (local_58[0] = param_2, iVar1 = FUN_100885160(DAT_1011c2a10,local_58), iVar1 == -1)) {
      return 0xffffffff;
    }
    uVar3 = iVar1 + 9;
    if (uVar3 == 0xffffffff) {
      return 0xffffffff;
    }
    puVar4 = (undefined *)0x0;
    if ((int)uVar3 < 0) goto LAB_1008c9c57;
    if (8 < (int)uVar3) {
      puVar4 = (undefined *)FUN_100885620(DAT_1011c2a10,iVar1);
      goto LAB_1008c9c57;
    }
  }
  puVar4 = &DAT_1011b2040 + (long)(int)uVar3 * 0x30;
LAB_1008c9c57:
  uVar2 = (**(code **)(puVar4 + 0x10))(puVar4,param_1,param_3);
  return uVar2;
}

