
undefined1
FUN_10042b7d0(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 local_a0 [64];
  undefined1 local_60 [64];
  
  if (*(long *)(param_1 + 0x400) == 0) {
    FUN_10042c230(local_a0,param_1,param_4,param_5);
    uVar1 = FUN_10042c350(local_a0,param_2,param_3);
    puVar2 = local_a0;
  }
  else {
    FUN_10042c2d0(local_60,*(long *)(param_1 + 0x400),*(undefined8 *)(param_1 + 0x408));
    uVar1 = FUN_10042c350(local_60,param_2,param_3);
    puVar2 = local_60;
  }
  FUN_10042c330(puVar2);
  return uVar1;
}

