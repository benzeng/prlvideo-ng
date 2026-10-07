
undefined8 FUN_100537a80(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint *puVar4;
  
  uVar2 = 0xf0000003;
  if (7 < *(ushort *)(param_2 + 0x14)) {
    lVar3 = FUN_1002a6010(param_2);
    iVar1 = *(int *)(lVar3 + 4);
    puVar4 = (uint *)FUN_1002a6010(param_2);
    *puVar4 = (uint)(iVar1 != 2);
    uVar2 = 0;
  }
  return uVar2;
}

