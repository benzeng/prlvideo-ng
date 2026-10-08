
undefined8 FUN_100b215e0(long *param_1,ulong *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  cVar4 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x150))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
  uVar8 = 0x80021021;
  if (cVar4 != '\0') {
    uVar6 = FUN_100b217a0(param_1);
    if (uVar6 == 0xffffffffffffffff) {
      lVar7 = param_1[0x301e];
      if (lVar7 != 0) {
        plVar1 = (long *)param_1[0x301d];
        uVar6 = plVar1[2];
        lVar2 = *plVar1;
        *(long *)(lVar2 + 8) = plVar1[1];
        *(long *)plVar1[1] = lVar2;
        param_1[0x301e] = lVar7 + -1;
        operator_delete(plVar1);
        if (uVar6 != 0xffffffffffffffff) {
          *param_2 = uVar6 / *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
          return 0;
        }
      }
      lVar7 = (**(code **)(*param_1 + 0x120))(param_1,param_2);
      if (lVar7 == -1) {
        uVar5 = FUN_100db96d0();
        FUN_100df99c0("","dimg",0,"Error: GetNewBlockOffset failed. %u",uVar5);
        uVar8 = 0x80021056;
      }
      else {
        plVar1 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
        plVar3 = *(long **)(param_1[4] + 0x38);
        cVar4 = (**(code **)(*plVar1 + 0x70))
                          (plVar1,(ulong)*(uint *)(param_1[4] + 0x10) *
                                  *(long *)(*(long *)(*plVar3 + -0x18) + 0x38 + (long)plVar3) +
                                  lVar7);
        if (cVar4 == '\0') {
          uVar5 = FUN_100db96d0();
          FUN_100df99c0("","dimg",0,"Error: truncate failed %u",uVar5);
          uVar8 = 0x80022002;
        }
        else {
          plVar1 = *(long **)(param_1[4] + 0x38);
          (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x188))
                    ((long)param_1 + *(long *)(*param_1 + -0x18),
                     (ulong)*(uint *)(param_1[4] + 0x10) *
                     *(long *)(*(long *)(*plVar1 + -0x18) + 0x38 + (long)plVar1) + lVar7);
          FUN_100b21970(param_1,lVar7);
          uVar8 = 0;
        }
      }
    }
    else {
      FUN_100b21970(param_1,uVar6);
      uVar8 = 0;
      *param_2 = uVar6 / *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
      param_1[0x3012] = uVar6;
    }
  }
  return uVar8;
}

