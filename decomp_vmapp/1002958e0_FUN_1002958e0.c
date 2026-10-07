
void FUN_1002958e0(long *param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  bVar1 = *(byte *)(*(long *)(param_2 + 0x60) + 2);
  if (bVar1 < 0xc4) {
    if (0x5f < bVar1) {
      if (bVar1 - 0x60 < 2) goto LAB_100295991;
LAB_1002959ef:
      FUN_100291670(param_2);
                    /* WARNING: Could not recover jumptable at 0x000100295a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2 + 0x50))(param_2,0);
      return;
    }
    if (0x39 < bVar1) goto LAB_1002959ef;
    if ((0x213021300000000U >> ((ulong)bVar1 & 0x3f) & 1) == 0) {
      if ((0x20002000000000U >> ((ulong)bVar1 & 0x3f) & 1) != 0) goto LAB_100295991;
      goto LAB_1002959ef;
    }
  }
  else {
    if (bVar1 - 200 < 4) goto LAB_100295991;
    if (1 < bVar1 - 0xc4) goto LAB_1002959ef;
  }
  if (DAT_101115f88 == 0) {
    FUN_1008e3970("","LocalDevices",0,"[hdd::sata:%u] ATA PIO command 0x%02X is prohibited",
                  (short)param_1[0x1fe]);
  }
LAB_100295991:
  plVar2 = (long *)param_1[0x26ee];
  lVar3 = *plVar2;
  plVar4 = (long *)plVar2[1];
  *(long **)(lVar3 + 8) = plVar4;
  *plVar4 = lVar3;
  *plVar2 = (long)plVar2;
  plVar2[1] = (long)plVar2;
  FUN_100297410(param_1,param_2,plVar2 + -0x123);
  FUN_100296b80(param_1,plVar2 + -0x123);
  FUN_100402d70(param_1 + 0x26f7);
                    /* WARNING: Could not recover jumptable at 0x0001002959e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1);
  return;
}

