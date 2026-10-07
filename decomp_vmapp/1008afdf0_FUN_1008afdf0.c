
undefined4 * FUN_1008afdf0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10081ddd0(0x18,"asn1_lib.c",0x19c);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_100887ce0(0xd,0x82,0x41,"asn1_lib.c",0x19e);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = param_1;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
  }
  return puVar1;
}

