
void FUN_100113f50(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long local_48;
  long local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  if ((DAT_1011b76a8 == 0) || (DAT_1011b76b0 == 0)) {
    local_48 = FUN_1007784a0();
    local_40 = 0;
    iVar2 = FUN_100683330(param_1 + 0xc,0x60107819,&local_48,0x10,0);
    if (iVar2 == 0) {
      FUN_1008e3970("","vm",0,"[GetTscAndBusHz] HypCall: TSC %llu Hz, Bus %llu Hz",local_48,local_40
                   );
    }
    else {
      FUN_1008e3970("","vm",0,"[GetTscAndBusHz] HypCall failed");
    }
    DAT_1011b76a8 = local_48;
    *param_2 = local_48;
    DAT_1011b76b0 = 100000000;
    if (local_40 != 0) {
      DAT_1011b76b0 = local_40;
    }
  }
  else {
    *param_2 = DAT_1011b76a8;
  }
  *param_3 = DAT_1011b76b0;
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

