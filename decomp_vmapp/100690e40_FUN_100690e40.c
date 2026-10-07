
undefined8
FUN_100690e40(undefined8 param_1,int param_2,long param_3,uint param_4,undefined1 *param_5,
             undefined8 *param_6)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  
  *param_5 = 0;
  if (param_4 != 0) {
    uVar10 = 0;
    do {
      uVar9 = (ulong)*(uint *)(param_3 + uVar10 * 4);
      if (uVar9 != 0) {
        plVar2 = (long *)*param_6;
        uVar9 = *(uint *)(param_6[1] + 0xc) * uVar9;
        plVar8 = plVar2 + 1;
        plVar3 = (long *)plVar2[1];
        plVar11 = plVar3;
        plVar7 = plVar8;
        if (plVar3 == (long *)0x0) {
LAB_100690fb2:
          uVar6 = (ulong)(uint)((int)uVar10 + param_2);
        }
        else {
          do {
            while (plVar4 = plVar11, uVar9 <= (ulong)plVar4[4]) {
              plVar11 = (long *)*plVar4;
              plVar7 = plVar4;
              if ((long *)*plVar4 == (long *)0x0) goto LAB_100690fa3;
            }
            plVar1 = plVar4 + 1;
            plVar4 = plVar7;
            plVar11 = (long *)*plVar1;
          } while ((long *)*plVar1 != (long *)0x0);
LAB_100690fa3:
          if ((plVar4 == plVar8) || (uVar9 < (ulong)plVar4[4])) goto LAB_100690fb2;
          uVar6 = (ulong)(uint)((int)uVar10 + param_2);
          if (plVar4 != plVar8) {
            plVar11 = plVar8;
            if (plVar3 != (long *)0x0) {
              do {
                while (plVar11 = plVar3, uVar9 < (ulong)plVar11[4]) {
                  plVar8 = plVar11;
                  plVar3 = (long *)*plVar11;
                  if ((long *)*plVar11 == (long *)0x0) goto LAB_100690eda;
                }
                plVar3 = (long *)plVar11[1];
              } while ((long *)plVar11[1] != (long *)0x0);
              plVar8 = plVar11 + 1;
            }
LAB_100690eda:
            puVar5 = operator_new(0x30);
            puVar5[4] = uVar9;
            puVar5[5] = uVar6;
            puVar5[1] = 0;
            *puVar5 = 0;
            puVar5[2] = plVar11;
            *plVar8 = (long)puVar5;
            if (*(long *)*plVar2 != 0) {
              *plVar2 = *(long *)*plVar2;
              puVar5 = (undefined8 *)*plVar8;
            }
            FUN_1000e8bb0(plVar2[1],puVar5);
            plVar2[2] = plVar2[2] + 1;
            goto LAB_100691060;
          }
        }
        plVar11 = plVar8;
        if (plVar3 != (long *)0x0) {
          do {
            while (plVar11 = plVar3, uVar9 < (ulong)plVar11[4]) {
              plVar8 = plVar11;
              plVar3 = (long *)*plVar11;
              if ((long *)*plVar11 == (long *)0x0) goto LAB_100691010;
            }
            plVar3 = (long *)plVar11[1];
          } while ((long *)plVar11[1] != (long *)0x0);
          plVar8 = plVar11 + 1;
        }
LAB_100691010:
        puVar5 = operator_new(0x30);
        puVar5[4] = uVar9;
        puVar5[5] = uVar6;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[2] = plVar11;
        *plVar8 = (long)puVar5;
        if (*(long *)*plVar2 != 0) {
          *plVar2 = *(long *)*plVar2;
          puVar5 = (undefined8 *)*plVar8;
        }
        FUN_1000e8bb0(plVar2[1],puVar5);
        plVar2[2] = plVar2[2] + 1;
      }
LAB_100691060:
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_4);
  }
  return 0;
}

