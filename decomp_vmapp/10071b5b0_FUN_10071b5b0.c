
void FUN_10071b5b0(long param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0x1d8) = param_2;
  *(undefined **)(param_1 + 0x1e0) = (&PTR_s_UNKNOWN_10116e5d0)[param_2];
  uVar1 = FUN_100722f30(param_3);
  ___snprintf_chk(param_1 + 0x1e8,0x7e,0,0xffffffffffffffff,"%s",uVar1);
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  return;
}

