
undefined8 FUN_10067f350(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x10) == (long *)0x0) {
    FUN_1008e3970("","WinRegistry",0,"OA00005.15:");
    uVar1 = 0x8158003;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
    if ((int)uVar1 == 0x8000000) {
      (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8),1);
      uVar1 = 0x8000000;
    }
  }
  return uVar1;
}

