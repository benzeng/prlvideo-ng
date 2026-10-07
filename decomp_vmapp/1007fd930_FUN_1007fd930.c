
undefined8 FUN_1007fd930(undefined4 *param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1007fb950(param_1,param_2,
                        (long)(int)param_1[0x19] + *(long *)(*(long *)(param_1 + 0x14) + 8),
                        param_1[0x18]);
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    if ((int)param_2 == 0x16) {
      FUN_1007fa5f0(param_1,(long)(int)param_1[0x19] + *(long *)(*(long *)(param_1 + 0x14) + 8),
                    iVar1);
    }
    if (param_1[0x18] - iVar1 == 0) {
      uVar2 = 1;
      if (*(code **)(param_1 + 0x26) != (code *)0x0) {
        uVar2 = 1;
        (**(code **)(param_1 + 0x26))
                  (1,*param_1,param_2 & 0xffffffff,*(undefined8 *)(*(long *)(param_1 + 0x14) + 8),
                   (long)iVar1 + (long)(int)param_1[0x19],param_1,*(undefined8 *)(param_1 + 0x28));
      }
    }
    else {
      param_1[0x19] = param_1[0x19] + iVar1;
      param_1[0x18] = param_1[0x18] - iVar1;
      uVar2 = 0;
    }
  }
  return uVar2;
}

