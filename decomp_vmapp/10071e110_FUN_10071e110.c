
void FUN_10071e110(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_100742250(DAT_10116db38);
  lVar2 = FUN_100715020(param_2);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x54);
    *(int *)(param_1 + 0x1d8) = iVar1;
    *(undefined **)(param_1 + 0x1e0) = (&PTR_s_UNKNOWN_10116e5d0)[iVar1];
    uVar3 = FUN_100722f30(0);
    ___snprintf_chk(param_1 + 0x1e8,0x7e,0,0xffffffffffffffff,"%s",uVar3);
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  }
  FUN_100742310(DAT_10116db38);
  return;
}

