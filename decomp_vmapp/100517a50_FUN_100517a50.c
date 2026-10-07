
undefined8 FUN_100517a50(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0x8030) {
    uVar2 = FUN_100517880();
    return uVar2;
  }
  if (iVar1 == 0x8032) {
    uVar2 = FUN_100517740();
    return uVar2;
  }
  if (iVar1 == 0x8031) {
    uVar2 = FUN_1005175f0();
    return uVar2;
  }
  return 0xf0000016;
}

