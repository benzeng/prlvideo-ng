
undefined4 FUN_10093a530(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 local_3c;
  long local_10;
  
  iVar1 = *(int *)(param_2 + 0x24);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x78) != 0) {
    local_10 = *(long *)(param_1 + 0x78);
    if ((*(long *)(param_2 + 0xb8) == 0) && (iVar3 = FUN_100936ada(param_2), iVar3 == -1)) {
      return 0xffffffff;
    }
    *(undefined8 *)(*(long *)(param_2 + 0xb8) + 0x28) = *(undefined8 *)(param_2 + 0x40);
    for (; local_10 != 0; local_10 = *(long *)(local_10 + 8)) {
      iVar3 = _xmlSchemaCheckFacet(local_10,param_1,param_2,uVar2);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
    }
    *(undefined8 *)(*(long *)(param_2 + 0xb8) + 0x28) = 0;
  }
  if (*(int *)(param_2 + 0x24) == iVar1) {
    local_3c = 0;
  }
  else {
    local_3c = *(undefined4 *)(param_2 + 0x20);
  }
  return local_3c;
}

