
void FUN_100404e20(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  ulong local_40;
  long local_38;
  
  lVar6 = param_2[9];
  plVar2 = (long *)param_2[10];
  *(long **)(lVar6 + 8) = plVar2;
  *plVar2 = lVar6;
  lVar6 = param_1[2];
  *(undefined8 **)(lVar6 + 8) = param_2 + 9;
  param_2[9] = lVar6;
  param_2[10] = param_1 + 2;
  param_1[2] = param_2 + 9;
  switch(*(undefined4 *)((long)param_2 + 0x14)) {
  case 1:
    if (param_3 != (int *)0x0) {
      FUN_10070b090(param_3 + 0x14,
                    (long)(*(int *)(param_2 + 5) * *param_3 - *(int *)(param_2 + 4)) + param_2[0xb],
                    0,param_3[0x14]);
      FUN_10070aed0(param_3);
    }
    break;
  case 2:
    if (param_3 != (int *)0x0) {
      param_3[8] = 0;
      param_3[9] = 0;
      if (param_2[1] == 0) {
        *param_2 = param_3;
      }
      else {
        *(int **)(param_2[1] + 0x20) = param_3;
      }
      param_2[1] = param_3;
    }
    break;
  case 3:
    FUN_1008e3970("","PCache",0,"BUG in %s: node_read() mustn\'t be called on node with ERRORS",
                  "node_read");
  case 0:
    iVar7 = *(int *)((long)param_2 + 0x1c);
    local_38 = param_2[0xb];
    local_40 = param_2[4];
    *(undefined8 *)((long)param_2 + 0x14) = 0x100000002;
    if (DAT_1011ccc18 != (code *)0x0) {
      (*DAT_1011ccc18)(0,0x1b,(long)iVar7 | local_40 / (ulong)param_2[5] << 0x20);
    }
    if (param_3 != (int *)0x0) {
      param_3[8] = 0;
      param_3[9] = 0;
      if (param_2[1] == 0) {
        *param_2 = param_3;
      }
      else {
        *(int **)(param_2[1] + 0x20) = param_3;
      }
      param_2[1] = param_3;
    }
    if (iVar7 != 0) {
      do {
        bVar8 = false;
        puVar4 = (ulong *)0x0;
        while( true ) {
          if (!bVar8) {
            puVar4 = (ulong *)FUN_10070ade0();
            if (puVar4 == (ulong *)0x0) {
              FUN_100404740(param_1,param_2);
              if (param_3 == (int *)0x0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x00010040509b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,param_3);
              return;
            }
            *(undefined4 *)(puVar4 + 1) = 0;
            *puVar4 = local_40 / (ulong)param_2[5];
            puVar4[2] = (ulong)param_2;
            if (param_3 == (int *)0x0) {
              puVar4[3] = (ulong)param_2;
            }
            else {
              puVar4[3] = *(ulong *)(param_3 + 6);
            }
            puVar4[9] = (ulong)FUN_1004050f0;
            uVar5 = (**(code **)(*(long *)*param_1 + 0x250))();
            puVar4[6] = uVar5;
          }
          uVar3 = FUN_10070ba60(*param_1,puVar4,local_38);
          if (uVar3 == 0) break;
          local_38 = local_38 + (ulong)uVar3;
          local_40 = local_40 + uVar3;
          bVar8 = puVar4 != (ulong *)0x0;
          iVar7 = iVar7 - uVar3;
          if (iVar7 == 0) {
            if (puVar4 != (ulong *)0x0) {
              *(int *)(param_2 + 3) = *(int *)(param_2 + 3) + 1;
              (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,puVar4);
            }
            goto LAB_10040505e;
          }
        }
        *(int *)(param_2 + 3) = *(int *)(param_2 + 3) + 1;
        (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,puVar4);
      } while( true );
    }
LAB_10040505e:
    piVar1 = (int *)(param_2 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_100405140(param_2);
    }
  }
  lVar6 = FUN_1007d9a20(param_2 + 6);
  if ((lVar6 == 0) ||
     (*(long *)(lVar6 + -0x10) != (ulong)*(uint *)((long)param_2 + 0x1c) + param_2[4])) {
    param_1[7] = param_2;
  }
  return;
}

