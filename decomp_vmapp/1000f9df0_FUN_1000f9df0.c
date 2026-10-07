
undefined8 FUN_1000f9df0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0x8702) {
    uVar2 = FUN_1000f9c40();
    return uVar2;
  }
  if (iVar1 == 0x8701) {
    uVar2 = FUN_1000f9d30();
    return uVar2;
  }
  if (iVar1 == 0x8700) {
    uVar2 = FUN_1000f9790();
    return uVar2;
  }
  FUN_1008e3970("","vm",0,"hdd: SF ERROR: unknown storage filter Toolgate request: %d\n");
  return 0xf0000002;
}

