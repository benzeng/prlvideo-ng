
void FUN_1005b2c10(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 1) {
    FUN_1005b2c70(param_1);
    uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    FUN_1005b8760(uVar1,2);
    uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    uVar2 = FUN_1005b8750(uVar1);
    FUN_10083fee0(param_1,uVar2);
    return;
  }
  return;
}

