
undefined8 FUN_1003f2620(long param_1)

{
  int iVar1;
  size_t sVar2;
  undefined1 local_28 [20];
  int local_14;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),&local_14,local_28)
  ;
  if ((iVar1 == 0) && (local_14 != 4)) {
    if (local_14 == 2) {
      sVar2 = 0x12;
      if ((ulong)*(uint *)(param_1 + 0x68) < 0x12) {
        sVar2 = (ulong)*(uint *)(param_1 + 0x68);
      }
      _memcpy(*(void **)(param_1 + 0x60),local_28,sVar2);
    }
    else if (local_14 == 0) {
      *(undefined8 *)(param_1 + 0x84) = 0x100000000;
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return 2;
}

