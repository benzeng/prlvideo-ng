
undefined8
FUN_100b16dd0(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,undefined1 *param_5,
             ulong *param_6)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 local_40 [12];
  undefined4 local_34;
  
  plVar6 = (long *)param_6[2];
  uVar1 = *(ulong *)(*(long *)(*plVar6 + -0x18) + 0x38 + (long)plVar6);
  *param_5 = 0;
  if (param_4 != 0) {
    uVar8 = 0;
    do {
      uVar7 = (ulong)*(uint *)(param_3 + uVar8 * 4);
      if ((uVar7 != 0) && (uVar7 = *(uint *)(plVar6[4] + 0xc) * uVar7, uVar7 < *param_6)) {
        uVar5 = (**(code **)(*plVar6 + 0x120))(plVar6,local_40);
        if (uVar5 == 0xffffffffffffffff) {
          FUN_100df99c0("Reclaim","dimg",0,"Error: can not get space for block");
          return 0x80021056;
        }
        FUN_100df99c0("Reclaim","dimg",0,"Copy block from %llu to %llu",uVar7,uVar5);
        plVar6 = *(long **)(*(long *)(*(long *)param_6[2] + -0x18) + 8 + (long)param_6[2]);
        cVar2 = (**(code **)(*plVar6 + 0x40))
                          (plVar6,param_6[3],(int)param_6[4],&local_34,uVar7 * uVar1);
        if (cVar2 == '\0') {
          uVar8 = param_6[4];
          uVar4 = (**(code **)(**(long **)(*(long *)(*(long *)param_6[2] + -0x18) + 8 +
                                          (long)param_6[2]) + 0xb0))();
          FUN_100df99c0("Reclaim","dimg",0,
                        "Error: reading block by file off %llu [Size requested %u Size we got %u] at read. [%d]"
                        ,uVar7 * uVar1,(int)uVar8,local_34,uVar4);
          return 0x80021029;
        }
        plVar6 = *(long **)(*(long *)(*(long *)param_6[2] + -0x18) + 8 + (long)param_6[2]);
        cVar2 = (**(code **)(*plVar6 + 0x48))(plVar6,param_6[3],(int)param_6[4],&local_34,uVar5);
        if (cVar2 == '\0') {
          uVar1 = param_6[4];
          uVar4 = (**(code **)(**(long **)(*(long *)(*(long *)param_6[2] + -0x18) + 8 +
                                          (long)param_6[2]) + 0xb0))();
          FUN_100df99c0("Reclaim","dimg",0,
                        "Error: writing block by file off %llu [Size requested %u Size we got %u] at write. [%d]"
                        ,uVar5,(int)uVar1,local_34,uVar4);
          return 0x80021027;
        }
        plVar6 = (long *)param_6[2];
        (**(code **)(*(long *)((long)plVar6 + *(long *)(*plVar6 + -0x18)) + 0x188))
                  ((long)plVar6 + *(long *)(*plVar6 + -0x18),uVar5 + (uint)param_6[4] / uVar1,
                   (ulong)(uint)param_6[4] % uVar1);
        plVar6 = (long *)param_6[2];
        uVar3 = (uint)((uVar5 / uVar1 & 0xffffffff) / (ulong)*(uint *)(plVar6[4] + 0xc));
        *(uint *)(param_3 + uVar8 * 4) = uVar3;
        if (uVar3 < (uint)param_6[1]) {
          *(uint *)(param_6 + 1) = uVar3;
        }
        *param_5 = 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_4);
  }
  return 0;
}

