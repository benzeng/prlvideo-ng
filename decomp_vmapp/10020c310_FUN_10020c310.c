
undefined4 * FUN_10020c310(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *local_28;
  
  if (*(long *)(param_1 + 0x110) == 0) {
    uVar3 = (*(code *)_xmlMalloc)(8);
    *(undefined8 *)(param_1 + 0x110) = uVar3;
    *(undefined4 *)(param_1 + 0x11c) = 1;
    if (*(long *)(param_1 + 0x110) == 0) {
      FUN_1001e835c(param_1,"allocating attribute info list",0);
      return (undefined4 *)0x0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x118) < *(int *)(param_1 + 0x11c)) {
      puVar2 = *(undefined4 **)(*(long *)(param_1 + 0x110) + (long)*(int *)(param_1 + 0x118) * 8);
      *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
      if (*(long *)(puVar2 + 6) != 0) {
        FUN_1001e8d2a(param_1,"xmlSchemaGetFreshAttrInfo","attr info not cleared");
        return (undefined4 *)0x0;
      }
      *puVar2 = 2;
      return puVar2;
    }
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
    uVar3 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x110),(long)*(int *)(param_1 + 0x11c) * 8);
    *(undefined8 *)(param_1 + 0x110) = uVar3;
    if (*(long *)(param_1 + 0x110) == 0) {
      FUN_1001e835c(param_1,"re-allocating attribute info list",0);
      return (undefined4 *)0x0;
    }
  }
  local_28 = (undefined4 *)(*(code *)_xmlMalloc)(0x70);
  if (local_28 == (undefined4 *)0x0) {
    FUN_1001e835c(param_1,"creating new attribute info",0);
    local_28 = (undefined4 *)0x0;
  }
  else {
    _memset(local_28,0,0x70);
    *local_28 = 2;
    iVar1 = *(int *)(param_1 + 0x118);
    *(undefined4 **)(*(long *)(param_1 + 0x110) + (long)iVar1 * 8) = local_28;
    *(int *)(param_1 + 0x118) = iVar1 + 1;
  }
  return local_28;
}

