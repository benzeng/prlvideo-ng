
undefined4 * FUN_100ca1f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 local_20 [2];
  
  puVar1 = (undefined4 *)FUN_100c8b370(4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_100c62ee0(0x22,0x70,0x41,"v3_skey.c",0x57);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    lVar2 = FUN_100c9fc70(param_3,local_20);
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 == 0) {
      FUN_100c8b2f0(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = local_20[0];
    }
  }
  return puVar1;
}

