
undefined4 FUN_1002e00e0(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_1002de350();
  uVar2 = (**(code **)(*param_1 + 0xb8))(param_1);
  if (uVar2 != DAT_1011c5670) {
    DAT_1011c5670 = uVar2;
    FUN_1000d7a90(*(undefined8 *)(DAT_1011c3698 + 0x107f8),(uVar2 & 1) * 5 + -3);
  }
  return uVar1;
}

