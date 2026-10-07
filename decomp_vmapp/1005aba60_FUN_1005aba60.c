
undefined4 FUN_1005aba60(undefined8 *param_1,ulong param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong local_48;
  undefined4 local_40;
  code *local_38;
  
  uVar5 = param_2 / *(uint *)((long)param_1 + 0x1c) >> 0xc;
  if ((uint)uVar5 < *(uint *)(param_1 + 3)) {
    lVar6 = (uVar5 & 0xffffffff) * 0x40;
    lVar3 = *(long *)(param_1[2] + 0x10 + lVar6);
    iVar7 = (int)param_2;
    if (lVar3 == param_1[8] + 8) {
      *param_3 = *(uint *)((long)param_1 + 0x1c) * ((int)(uVar5 << 0xc) + 0x1000) - iVar7;
      uVar2 = 0xffffffff;
    }
    else {
      local_40 = 0xffffffff;
      local_38 = FUN_1005ab5a0;
      local_48 = param_2;
      lVar3 = FUN_1005b53b0(lVar3,*(undefined8 *)(param_1[2] + 0x18 + lVar6),&local_48,&local_38);
      if (lVar3 == *(long *)(param_1[2] + 0x18 + lVar6)) {
        *param_3 = ((int)(uVar5 << 0xc) + 0x1000) * *(int *)((long)param_1 + 0x1c) - iVar7;
        uVar2 = 0xffffffff;
      }
      else {
        plVar4 = (long *)(**(code **)(*(long *)*param_1 + 0x308))
                                   ((long *)*param_1,*(undefined4 *)(lVar3 + 0x28));
        uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
        plVar4 = (long *)(**(code **)(*(long *)*param_1 + 0x308))
                                   ((long *)*param_1,*(undefined4 *)(lVar3 + 0x28));
        if (param_2 < uVar5) {
          iVar1 = (**(code **)(*plVar4 + 0x18))();
          *param_3 = iVar1 - iVar7;
          uVar2 = 0xffffffff;
        }
        else {
          iVar1 = (**(code **)(*plVar4 + 0x20))();
          *param_3 = iVar1 - iVar7;
          uVar2 = *(undefined4 *)(lVar3 + 0x28);
        }
      }
    }
  }
  else {
    FUN_1008e3970("","vdisk",0,"Error: try to get storage id by LBA %llu out of disk",param_2);
    *param_3 = 0;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

