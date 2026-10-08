
undefined4 FUN_10092b854(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      uVar1 = _xmlSchemaNewParserCtxt("*");
      *(undefined8 *)(param_1 + 0x98) = uVar1;
    }
    else {
      uVar1 = FUN_10092b7e0("*",*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x78));
      *(undefined8 *)(param_1 + 0x98) = uVar1;
    }
    if (*(long *)(param_1 + 0x98) == 0) {
      FUN_10091c652(param_1,"xmlSchemaCreatePCtxtOnVCtxt","failed to create a temp. parser context")
      ;
      return 0xffffffff;
    }
    _xmlSchemaSetParserErrors
              (*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x10),
               *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8));
  }
  return 0;
}

