
void FUN_1005ace00(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  bool bVar9;
  
  plVar5 = *(long **)(param_2 + 0x10);
  if (plVar5 != *(long **)(param_2 + 0x18)) {
    lVar1 = param_1[2];
    uVar4 = param_3;
    do {
      plVar2 = (long *)(**(code **)(*(long *)*param_1 + 0x308))
                                 ((long *)*param_1,(int)plVar5[5],uVar4);
      if (plVar2 == (long *)0x0) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","Stor","BlockGroup.cpp",
                      0x328,"CheckOnUnalignedStorages");
      }
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
      uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2);
      uVar6 = (ulong)*(uint *)((long)param_1 + 0x1c);
      iVar8 = (int)((ulong)(param_2 - lVar1) >> 6);
      if ((uVar3 % uVar6 != 0) && ((int)(uVar3 / uVar6 >> 0xc) == iVar8)) {
        *(undefined4 *)(param_3 + 0xc + (uVar3 / uVar6 & 0xfff) * 0x20) = 0xfffffffe;
      }
      if ((uVar4 % uVar6 != 0) && ((int)(uVar4 / uVar6 >> 0xc) == iVar8)) {
        *(undefined4 *)(param_3 + 0xc + (uVar4 / uVar6 & 0xfff) * 0x20) = 0xfffffffe;
      }
      uVar4 = uVar4 % uVar6;
      plVar2 = (long *)plVar5[1];
      plVar7 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar7[2];
          bVar9 = (long *)*plVar5 != plVar7;
          plVar7 = plVar5;
        } while (bVar9);
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    } while (plVar5 != *(long **)(param_2 + 0x18));
  }
  return;
}

