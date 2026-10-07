
undefined8 FUN_100331a20(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = 0xf0000003;
  if (param_3 == 0x10) {
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x868) == 0) {
      uVar8 = 0;
    }
    else {
      FUN_1002adb30();
      lVar7 = FUN_10032ebe0(*(undefined8 *)(param_1 + 0x38),*param_2);
      if (lVar7 == 0) {
        uVar8 = 0;
      }
      else {
        plVar1 = *(long **)(lVar7 + 0x40);
        if ((int)((ulong)(*(long *)(lVar7 + 0x48) - (long)plVar1) >> 3) == 0) {
          uVar8 = 0;
        }
        else if (-1 < *(int *)((long)param_2 + 0xc)) {
          *(int *)(*(long *)(lVar7 + 0x28) + (ulong)*(uint *)(param_2 + 1) * 0xc) =
               *(int *)((long)param_2 + 0xc);
          lVar2 = *plVar1;
          if ((**(byte **)(lVar2 + 0x88) & 1) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            if ((**(byte **)(lVar7 + 0x90) & 1) == 0) {
              (*DAT_1011c5768)(*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0xc));
              pcVar3 = DAT_1011c66f0;
              uVar4 = FUN_10038e380(*(undefined4 *)(*(long *)(lVar7 + 0x28) + 4),
                                    *(undefined4 *)(lVar7 + 8));
              (*pcVar3)(0xd02,uVar4);
              (*DAT_1011c66f0)(0xd05,4);
              pcVar3 = DAT_1011c61d8;
              uVar4 = *(undefined4 *)(lVar2 + 0x14);
              uVar5 = FUN_10038e1d0(*(undefined4 *)(lVar7 + 8));
              uVar6 = FUN_10038e1f0(*(undefined4 *)(lVar7 + 8));
              uVar8 = 0;
              (*pcVar3)(uVar4,0,uVar5,uVar6,
                        (ulong)*(uint *)((long)param_2 + 0xc) +
                        *(long *)(*(long *)(param_1 + 0x10) + 0x920));
              (*DAT_1011c5768)(*(undefined4 *)(lVar2 + 0x14),0);
              **(uint **)(lVar7 + 0x90) = **(uint **)(lVar7 + 0x90) | 1;
            }
          }
        }
      }
    }
  }
  return uVar8;
}

