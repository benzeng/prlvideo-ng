
undefined8 FUN_10088f7e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_14;
  
  local_14 = *(undefined4 *)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x78);
  if (*(long *)(lVar1 + 0x100) == 0) {
    FUN_100843190(param_3,param_2,param_4,lVar1,param_1 + 0x28,param_1 + 0x38,&local_14,
                  *(undefined8 *)(lVar1 + 0xf8));
  }
  else {
    FUN_100843470(param_3,param_2,param_4,lVar1,param_1 + 0x28,param_1 + 0x38,&local_14,
                  *(long *)(lVar1 + 0x100));
  }
  *(undefined4 *)(param_1 + 0x58) = local_14;
  return 1;
}

