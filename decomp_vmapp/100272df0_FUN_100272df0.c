
void FUN_100272df0(long param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x188) != 0) {
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    *(undefined2 *)((long)param_2 + 0x2c) = *(undefined2 *)(param_1 + 0x1c0);
    *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0x1bc);
    iVar1 = FUN_1006b3dc0();
    if (iVar1 == 1) {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x170) + 0xc0))
                        (*(long **)(param_1 + 0x170),(long)param_2 + 0x2e);
      if (iVar1 != 0) {
        FUN_1008e3970("","LocalDevices",0,"net_adapter %d:Failed to get vme hwaddr: error %x",
                      *(undefined4 *)(param_1 + 0x150));
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000100272ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x188) + 0x20))(*(long **)(param_1 + 0x188),param_2);
    return;
  }
  return;
}

