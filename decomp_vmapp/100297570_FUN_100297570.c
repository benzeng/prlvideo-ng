
void FUN_100297570(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    FUN_1008e3970("","LocalDevices",0,"[hdd::sata:%u] restart flags 0x%08X dl %llu",
                  (short)plVar1[0x1fe],(int)param_1[6],(ulong)param_1[9] / 1000);
    FUN_100296b80(plVar1,param_1[7]);
    FUN_100402d70(plVar1 + 0x26f7);
                    /* WARNING: Could not recover jumptable at 0x0001002975f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xd8))(plVar1);
    return;
  }
  return;
}

