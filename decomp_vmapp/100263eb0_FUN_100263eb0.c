
undefined8 FUN_100263eb0(long param_1)

{
  int iVar1;
  
  **(undefined4 **)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    iVar1 = CVmDevice::getEmulatedType();
    if (iVar1 != 3) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x18))(*(long **)(param_1 + 0x98),param_1 + 0xa8);
    }
    if (*(long **)(param_1 + 0x98) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x98) + 8))();
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  FUN_100269b40(param_1 + 0xa8);
  return 0;
}

