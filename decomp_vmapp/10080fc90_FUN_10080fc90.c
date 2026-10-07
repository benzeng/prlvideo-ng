
undefined8 FUN_10080fc90(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 < 0x301) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00010080fcb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x68))();
  return uVar1;
}

