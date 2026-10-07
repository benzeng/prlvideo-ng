
undefined8 FUN_10044dc80(uint *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  (**(code **)(param_1 + 0xc))
            (*(undefined8 *)(param_1 + 6),param_2,(ulong)*param_1,(ulong)*param_1 << 2,param_3);
  if (0 < (int)param_1[0x12]) {
    lVar1 = 0;
    do {
      param_1[0x24] = param_1[lVar1 + 0x25];
      (**(code **)(param_1 + 0xe))
                (param_1 + 0x12,*(long *)(param_1 + 4) + lVar1,*(long *)(param_1 + 6) + lVar1,
                 *param_1);
      param_1[lVar1 + 0x25] = param_1[0x24];
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[0x12]);
  }
  return 1;
}

