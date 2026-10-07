
undefined4 FUN_10020a275(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 local_38;
  undefined8 *local_10;
  
  if (*(long *)(param_1 + 0xd0) == 0) {
    local_10 = (undefined8 *)(*(code *)_xmlMalloc)(0x40);
    if (local_10 == (undefined8 *)0x0) {
      FUN_1001e835c(0,"allocating an IDC state object",0);
      return 0xffffffff;
    }
    puVar3 = local_10;
    for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_10 = *(undefined8 **)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = local_10[1];
    local_10[1] = 0;
  }
  if (*(long *)(param_1 + 200) != 0) {
    local_10[1] = *(undefined8 *)(param_1 + 200);
  }
  *(undefined8 **)(param_1 + 200) = local_10;
  if (local_10[7] != 0) {
    _xmlFreeStreamCtxt(local_10[7]);
  }
  uVar1 = _xmlPatternGetStreamCtxt(*(undefined8 *)(param_3 + 0x20));
  local_10[7] = uVar1;
  if (local_10[7] == 0) {
    FUN_1001e8d2a(param_1,"xmlSchemaIDCAddStateObject",
                  "failed to create an XPath validation context");
    local_38 = 0xffffffff;
  }
  else {
    *(undefined4 *)local_10 = param_4;
    *(undefined4 *)(local_10 + 2) = *(undefined4 *)(param_1 + 0xa4);
    local_10[5] = param_2;
    local_10[6] = param_3;
    *(undefined4 *)(local_10 + 4) = 0;
    local_38 = 0;
  }
  return local_38;
}

