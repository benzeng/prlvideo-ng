
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7cb00(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = PTR_shared_null_1021e1288;
  param_1[2] = PTR_shared_null_1021e12f0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  uVar3 = _UNK_100e14fec;
  uVar2 = _UNK_100e14fe8;
  uVar1 = DAT_100e14fe0._4_4_;
  *(undefined4 *)(param_1 + 0xb) = (undefined4)DAT_100e14fe0;
  *(undefined4 *)((long)param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)((long)param_1 + 100) = uVar3;
  FUN_100b7cbd0();
  return;
}

