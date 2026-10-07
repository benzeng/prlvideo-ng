
int FUN_1001f8383(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int local_34;
  
  if (param_3 == 0) {
    local_34 = 0;
  }
  else if (*(int *)(param_3 + 0x34) == 0) {
    if (*(long *)(param_3 + 0x20) == 0) {
      FUN_1001e8d2a(param_1,"xmlSchemaParseNewDoc","parsing a schema doc, but there\'s no doc");
      local_34 = -1;
    }
    else if (*(long *)(param_1 + 0x30) == 0) {
      FUN_1001e8d2a(param_1,"xmlSchemaParseNewDoc","no constructor");
      local_34 = -1;
    }
    else {
      lVar1 = FUN_1001f7eb8(*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_1 + 0x98));
      if (lVar1 == 0) {
        local_34 = -1;
      }
      else {
        *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(lVar1 + 0x40) = param_2;
        _xmlSchemaSetParserErrors
                  (lVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 8));
        *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(param_1 + 0x48);
        local_34 = FUN_1001f820b(lVar1,param_2,param_3);
        if (local_34 != 0) {
          *(int *)(param_1 + 0x20) = local_34;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(lVar1 + 0x24);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar1 + 0x48);
        *(undefined8 *)(lVar1 + 0x30) = 0;
        _xmlSchemaFreeParserCtxt(lVar1);
      }
    }
  }
  else {
    FUN_1001e8d2a(param_1,"xmlSchemaParseNewDoc","reparsing a schema doc");
    local_34 = -1;
  }
  return local_34;
}

