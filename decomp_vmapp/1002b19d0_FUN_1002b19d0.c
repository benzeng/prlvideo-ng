
undefined8 FUN_1002b19d0(int param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  long lVar8;
  
  lVar2 = *(long *)(DAT_1011c3698 + 0x1938);
  if (*(uint *)(lVar2 + 0x3d150) != 0) {
    piVar3 = (int *)(lVar2 + 0x3d158);
    lVar8 = 0;
    do {
      if (*piVar3 == param_1) {
        if (param_5 == 0) {
          uVar1 = *(uint *)(lVar2 + 0x3d178 + lVar8 * 0x1b0);
          if (uVar1 == 0) goto LAB_1002b1aa6;
          plVar4 = (long *)(lVar8 * 0x1b0 + 0x3d190 + lVar2);
          uVar7 = 0;
          while ((plVar4[-1] != param_3 || (*plVar4 != param_4))) {
            uVar7 = uVar7 + 1;
            plVar4 = plVar4 + 3;
            if (uVar1 <= uVar7) {
LAB_1002b1aa6:
              pcVar6 = "mapping not found";
LAB_1002b1abb:
              FUN_1008e3970("","LocalDevices",0,pcVar6);
              return 1;
            }
          }
          uVar5 = (ulong)*(uint *)(lVar2 + 0x3cecc);
          *(uint *)(lVar2 + 0x3cecc) = *(uint *)(lVar2 + 0x3cecc) + 1;
          *(undefined4 *)(lVar2 + 0x3ced0 + uVar5 * 0x28) = 3;
        }
        else {
          if (*(ulong *)(lVar2 + 0x3d168 + lVar8 * 0x1b0) < (ulong)((param_4 + param_3) * 0x1000)) {
            pcVar6 = "invalid mapping region";
            goto LAB_1002b1abb;
          }
          uVar5 = (ulong)*(uint *)(lVar2 + 0x3cecc);
          *(uint *)(lVar2 + 0x3cecc) = *(uint *)(lVar2 + 0x3cecc) + 1;
          *(undefined4 *)(lVar2 + 0x3ced0 + uVar5 * 0x28) = 2;
        }
        *(int *)(lVar2 + 0x3ced8 + uVar5 * 0x28) = param_1;
        *(undefined8 *)(lVar2 + 0x3cee0 + uVar5 * 0x28) = param_2;
        *(long *)(lVar2 + 0x3cee8 + uVar5 * 0x28) = param_3;
        *(long *)(lVar2 + 0x3cef0 + uVar5 * 0x28) = param_4;
        return 0;
      }
      lVar8 = lVar8 + 1;
      piVar3 = piVar3 + 0x6c;
    } while ((uint)lVar8 < *(uint *)(lVar2 + 0x3d150));
  }
  FUN_1008e3970("","LocalDevices",0,"invalid region_handle=%d",param_1);
  return 1;
}

