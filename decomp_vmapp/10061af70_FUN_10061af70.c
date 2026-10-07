
undefined8 FUN_10061af70(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010061af81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x60))();
    return uVar1;
  }
  FUN_1008e3970("","EngAES",0,"Error setting key. It\'s null.");
  return 0x80000003;
}

