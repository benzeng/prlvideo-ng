
void FUN_1002ca480(long param_1,long *param_2)

{
  uint uVar1;
  
  *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) | 0x7ff;
  *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) | 0x400000;
  uVar1 = *(uint *)(param_1 + 0x470);
  if ((*(byte *)(*param_2 + 7) & 1) != 0) {
    uVar1 = uVar1 | 4;
    *(uint *)(param_1 + 0x470) = uVar1;
  }
  *(uint *)(param_1 + 0x470) = uVar1 | 0x10;
  *(uint *)(*param_2 + 4) = *(uint *)(*param_2 + 4) & 0xff7fffff;
  return;
}

