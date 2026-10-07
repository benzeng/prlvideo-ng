
undefined4 FUN_1005f4840(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_24;
  
  local_24 = (undefined4)((ulong)in_RAX >> 0x20);
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x328))();
  lVar3 = FUN_10057e020(uVar2,0x80,param_2,&local_24);
  if (lVar3 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1007dade0(*puVar1);
      operator_delete(puVar1);
    }
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    local_24 = 0;
  }
  return local_24;
}

