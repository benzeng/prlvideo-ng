
undefined8 FUN_1003f1490(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x18) != 0) {
    piVar2 = (int *)(param_1 + 0x5c);
    uVar1 = 0;
    do {
      if (param_2 <= (uint)(*piVar2 + piVar2[-3])) break;
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x10;
    } while (uVar1 < *(uint *)(param_1 + 0x18));
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar1;
  }
  return 0;
}

