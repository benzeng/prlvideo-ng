
undefined4 FUN_100936ada(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    uVar1 = _xmlSchemaNewValidCtxt(0);
    *(undefined8 *)(param_1 + 0xb8) = uVar1;
    if (*(long *)(param_1 + 0xb8) == 0) {
      FUN_10091b9cb(param_1,0,0xbfd,
                    "Internal error: xmlSchemaCreateVCtxtOnPCtxt, failed to create a temp. validation context.\n"
                    ,0,0);
      return 0xffffffff;
    }
    _xmlSchemaSetValidErrors
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x10),
               *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8));
  }
  return 0;
}

