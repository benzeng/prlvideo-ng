
undefined8 FUN_100891ed0(int *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0xffffffff;
  if (*param_1 == *param_2) {
    lVar2 = *(long *)(param_1 + 4);
    uVar1 = 0xfffffffe;
    if (lVar2 != 0) {
      if (*(code **)(lVar2 + 0x88) != (code *)0x0) {
        uVar1 = (**(code **)(lVar2 + 0x88))(param_1,param_2);
        if ((int)uVar1 < 1) {
          return uVar1;
        }
        lVar2 = *(long *)(param_1 + 4);
      }
      uVar1 = 0xfffffffe;
      if (*(code **)(lVar2 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100891f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(lVar2 + 0x30))(param_1,param_2);
        return uVar1;
      }
    }
  }
  return uVar1;
}

