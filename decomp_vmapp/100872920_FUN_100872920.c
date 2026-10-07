
undefined8 FUN_100872920(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 1;
  if (param_1 == 0) {
    puVar2 = (undefined8 *)FUN_10081ddd0(0x10,"dsa_asn1.c",0x49);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_100887ce0(10,0x72,0x41,"dsa_asn1.c",0x4b);
      uVar1 = 0;
    }
    else {
      puVar2[1] = 0;
      *puVar2 = 0;
      *param_2 = puVar2;
      uVar1 = 2;
    }
  }
  return uVar1;
}

