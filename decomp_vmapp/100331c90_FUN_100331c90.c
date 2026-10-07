
undefined8 FUN_100331c90(long param_1,ulong *param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  uVar5 = 0xf0000003;
  if (param_3 == 0x28) {
    uVar6 = (ulong)(uint)param_2[2];
    uVar5 = 0;
    uVar4 = 0;
    if (uVar6 < 0x10) {
      lVar2 = *(long *)(param_1 + 0x10);
      if ((*(int *)(lVar2 + 0x938 + uVar6 * 0x8f0) != 0) &&
         (*(int *)(lVar2 + 0x93c + uVar6 * 0x8f0) != 0)) {
        if ((int)param_2[1] == 0) {
          uVar5 = 0;
          FUN_1002abbd0(lVar2,uVar6,*(undefined4 *)((long)param_2 + 0xc),0);
        }
        else {
          uVar5 = uVar4;
          if (*(long **)(param_1 + 0x28) != (long *)0x0) {
            plVar3 = *(long **)(param_1 + 0x28);
            plVar7 = (long *)(param_1 + 0x28);
            do {
              while (plVar8 = plVar3, *param_2 <= (ulong)plVar8[4]) {
                plVar3 = (long *)*plVar8;
                plVar7 = plVar8;
                if ((long *)*plVar8 == (long *)0x0) goto LAB_100331d31;
              }
              plVar1 = plVar8 + 1;
              plVar3 = (long *)*plVar1;
              plVar8 = plVar7;
            } while ((long *)*plVar1 != (long *)0x0);
LAB_100331d31:
            if ((((plVar8 != (long *)(param_1 + 0x28)) && ((ulong)plVar8[4] <= *param_2)) &&
                (plVar8[5] != 0)) && (FUN_10035a080(), (int)param_2[4] == 1)) {
              if ((*(uint *)((long)param_2 + 0x1c) < *(uint *)(*(long *)(param_1 + 0x10) + 0x928))
                 && (*(int *)((long)param_2 + 0x24) == 4)) {
                *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x920) +
                        (ulong)*(uint *)((long)param_2 + 0x1c)) = (int)param_2[3];
              }
            }
          }
        }
      }
    }
  }
  return uVar5;
}

