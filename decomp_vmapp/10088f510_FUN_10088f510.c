
undefined8 FUN_10088f510(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (*(code **)(lVar1 + 0x100) == (code *)0x0) {
    FUN_1008427d0(param_3,param_2,param_4,lVar1,param_1 + 0x28,*(undefined8 *)(lVar1 + 0xf8));
  }
  else {
    (**(code **)(lVar1 + 0x100))
              (param_3,param_2,param_4,lVar1,param_1 + 0x28,*(undefined4 *)(param_1 + 0x10));
  }
  return 1;
}

