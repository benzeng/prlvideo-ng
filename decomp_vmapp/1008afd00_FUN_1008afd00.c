
undefined8 * FUN_1008afd00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10081ddd0(0x18,"asn1_lib.c",0x19c);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x400000000;
    puVar1[2] = 0;
    puVar1[1] = 0;
    return puVar1;
  }
  FUN_100887ce0(0xd,0x82,0x41,"asn1_lib.c",0x19e);
  return (undefined8 *)0x0;
}

