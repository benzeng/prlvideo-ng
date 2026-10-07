
void FUN_1006b7460(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *local_18;
  
  local_18 = param_2;
  lVar1 = CParallelsNetworkConfig::getVirtualNetworks();
  if ((lVar1 != 0) && (param_2 != (long *)0x0)) {
    FUN_1006bc7f0(lVar1 + 0x98,&local_18);
                    /* WARNING: Could not recover jumptable at 0x0001006b749a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x88))(param_2);
    return;
  }
  return;
}

