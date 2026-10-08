
void FUN_100365e90(long param_1,char param_2)

{
  long lVar1;
  
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100365eb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))(*(long **)(param_1 + 0x18),0x11,0);
    return;
  }
  lVar1 = *(long *)(param_1 + 8);
  if (*(int *)(lVar1 + 0x6c) == 0x11) {
    FUN_100363a60(*(undefined8 *)(param_1 + 0x18),0x12);
    lVar1 = *(long *)(param_1 + 8);
  }
  if (*(int *)(lVar1 + 0x68) == 0x11) {
    FUN_100363bf0(*(undefined8 *)(param_1 + 0x18),0x12,0);
    return;
  }
  return;
}

