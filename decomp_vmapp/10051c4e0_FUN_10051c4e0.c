
void FUN_10051c4e0(long param_1,undefined8 param_2,int param_3)

{
  if ((param_3 == 1) && (*(char *)(param_1 + 0x58) != '\0')) {
    *(undefined1 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010051c501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + -0x28) + 0x78))();
    return;
  }
  return;
}

