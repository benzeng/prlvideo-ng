
undefined * FUN_100bf9750(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 local_88 [96];
  
  puVar3 = &DAT_1023160e0;
  if (param_3 != (undefined *)0x0) {
    puVar3 = param_3;
  }
  iVar1 = FUN_100bf96c0(local_88);
  puVar2 = (undefined *)0x0;
  if (iVar1 != 0) {
    FUN_100bf9460(local_88,param_1,param_2);
    FUN_100bf95d0(puVar3,local_88);
    _OPENSSL_cleanse(local_88,0x5c);
    puVar2 = puVar3;
  }
  return puVar2;
}

