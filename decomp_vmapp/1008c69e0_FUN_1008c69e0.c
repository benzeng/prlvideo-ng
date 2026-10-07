
undefined4 * FUN_1008c69e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 local_20 [2];
  
  puVar1 = (undefined4 *)FUN_1008afdf0(4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_100887ce0(0x22,0x70,0x41,"v3_skey.c",0x57);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    lVar2 = FUN_1008c46f0(param_3,local_20);
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 == 0) {
      FUN_1008afd70(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = local_20[0];
    }
  }
  return puVar1;
}

