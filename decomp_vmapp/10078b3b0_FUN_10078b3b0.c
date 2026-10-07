
void FUN_10078b3b0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x760))(param_1 + 0x740,*(undefined8 *)(param_1 + 0x90),param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010078b3f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x748))(param_2,param_4,uVar1,*(code **)(param_1 + 0x748));
  return;
}

