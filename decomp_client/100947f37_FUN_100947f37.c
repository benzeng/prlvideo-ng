
undefined4 * FUN_100947f37(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)_xmlSchemaNewFacet();
  *puVar1 = 0x3f3;
  uVar2 = FUN_100947ed5(0x21);
  *(undefined8 *)(puVar1 + 0xe) = uVar2;
  *(long *)(*(long *)(puVar1 + 0xe) + 0x10) = (long)param_1;
  return puVar1;
}

