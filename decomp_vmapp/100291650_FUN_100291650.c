
void FUN_100291650(undefined8 param_1,long param_2,undefined8 param_3)

{
  *(undefined1 *)(param_2 + 0x3c) = 1;
  *(undefined2 *)(param_2 + 0x38) = 0x1041;
                    /* WARNING: Could not recover jumptable at 0x00010029166b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x50))(param_2,0,param_3,*(code **)(param_2 + 0x50));
  return;
}

