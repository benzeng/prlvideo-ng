
undefined8 FUN_100332150(long param_1,ulong *param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  
  uVar6 = 0xf0000003;
  if (param_3 == 0x2c) {
    uVar2 = *(uint *)((long)param_2 + 0x14);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x928);
    if ((uVar2 < uVar3) && ((uint)param_2[2] <= uVar3 - uVar2)) {
      uVar6 = 0;
      if (*(long **)(param_1 + 0x28) != (long *)0x0) {
        plVar4 = *(long **)(param_1 + 0x28);
        plVar7 = (long *)(param_1 + 0x28);
        do {
          while (plVar5 = plVar4, *param_2 <= (ulong)plVar5[4]) {
            plVar4 = (long *)*plVar5;
            plVar7 = plVar5;
            if ((long *)*plVar5 == (long *)0x0) goto LAB_1003321e6;
          }
          plVar1 = plVar5 + 1;
          plVar5 = plVar7;
          plVar4 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
LAB_1003321e6:
        if (((plVar5 != (long *)(param_1 + 0x28)) && ((ulong)plVar5[4] <= *param_2)) &&
           (uVar6 = 0, plVar5[5] != 0)) {
          FUN_1003594d0(plVar5[5],(int)param_2[1],uVar2,*(undefined4 *)((long)param_2 + 0xc),
                        (uint)param_2[2],(int)param_2[3]);
        }
      }
    }
    else {
      uVar6 = 0;
      FUN_1008e3970("","LocalDevices",0,"DxBufferBlt: Invalid scr offset %u or size %u");
    }
  }
  return uVar6;
}

