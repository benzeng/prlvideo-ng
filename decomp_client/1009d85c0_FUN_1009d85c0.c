
undefined1
FUN_1009d85c0(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 local_a0 [64];
  undefined1 local_60 [64];
  
  if (*(long *)(param_1 + 0x400) == 0) {
    FUN_1009d9020(local_a0,param_1,param_4,param_5);
    uVar1 = FUN_1009d9140(local_a0,param_2,param_3);
    puVar2 = local_a0;
  }
  else {
    FUN_1009d90c0(local_60,*(long *)(param_1 + 0x400),*(undefined8 *)(param_1 + 0x408));
    uVar1 = FUN_1009d9140(local_60,param_2,param_3);
    puVar2 = local_60;
  }
  FUN_1009d9120(puVar2);
  return uVar1;
}

