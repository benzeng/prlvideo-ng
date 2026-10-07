
undefined8 FUN_10010f7a0(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  if (*(uint *)(param_2 + 0x14) < *(uint *)(param_2 + 0x10)) {
    uVar2 = *(uint *)(param_2 + 0x10);
  }
  lVar1 = FUN_100544e90(uVar2 + 0xfff & 0xfffff000);
  *(long *)(param_2 + 0x30) = lVar1;
  uVar3 = 0;
  if ((lVar1 != 0) && (uVar3 = 1, (*(byte *)(param_2 + 0xc) & 4) == 0)) {
    ___bzero(lVar1,*(int *)(param_2 + 0x10) + 0xfffU & 0xfffff000);
  }
  return uVar3;
}

