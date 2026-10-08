
undefined8
FUN_100334540(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_100319390(*(undefined8 *)(param_1 + 0x10));
  iVar1 = FUN_10018a9d0(uVar2);
  if (iVar1 == 0x30000005) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100094910(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}

