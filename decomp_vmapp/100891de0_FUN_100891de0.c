
undefined8 FUN_100891de0(int *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*param_1 == *param_2) {
    lVar2 = *(long *)(param_2 + 4);
    if (lVar2 != 0) {
      if (*(code **)(lVar2 + 0x78) != (code *)0x0) {
        iVar1 = (**(code **)(lVar2 + 0x78))(param_2);
        if (iVar1 != 0) {
          FUN_100887ce0(6,0x67,0x67,"p_lib.c",0x82);
          return 0;
        }
        lVar2 = *(long *)(param_2 + 4);
        if (lVar2 == 0) {
          return 0;
        }
      }
      if (*(code **)(lVar2 + 0x80) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100891e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(lVar2 + 0x80))(param_1,param_2);
        return uVar3;
      }
    }
  }
  else {
    FUN_100887ce0(6,0x67,0x65,"p_lib.c",0x7d);
  }
  return 0;
}

