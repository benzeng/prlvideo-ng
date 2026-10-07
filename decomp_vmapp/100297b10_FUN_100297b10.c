
void FUN_100297b10(long param_1,long param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x18) == 2) {
    uVar1 = FUN_1003fe450(param_1 + 0x13928,*(undefined8 *)(param_2 + 0x38),
                          *(undefined8 *)(param_2 + 0x40));
    *(undefined4 *)(param_2 + 0x30) = uVar1;
  }
  else {
    if (*(int *)(param_2 + 0x18) != 0) {
      FUN_1002910f0(param_1,param_2);
      return;
    }
    if (*(code **)(param_2 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100297b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2 + 0x20))(*(undefined8 *)(param_2 + 0x28));
      return;
    }
  }
  return;
}

