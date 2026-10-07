
undefined8 FUN_100594e40(long param_1,uint param_2,undefined8 param_3,undefined4 *param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    *param_4 = 0x80021021;
  }
  else {
    if (*(int *)(param_1 + 0x60) - 1U == param_2) {
      uVar2 = (ulong)param_2 + *(long *)(param_1 + 0x58);
      plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar2 >> 9) * 8) +
                         (uVar2 & 0x1ff) * 8);
                    /* WARNING: Could not recover jumptable at 0x000100594e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0xe0))(plVar1,param_3,param_4);
      return uVar3;
    }
    *param_4 = 0x80022003;
  }
  return 0;
}

