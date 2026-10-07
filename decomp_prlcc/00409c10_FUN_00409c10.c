
long FUN_00409c10(undefined8 param_1)

{
  if (DAT_0061d7f0 == 0) {
    DAT_0061d7f0 = (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x68))
                             (param_1,"PARALLELS_CONTROL_COHERENCE_ENABLED",0);
  }
  return DAT_0061d7f0;
}

