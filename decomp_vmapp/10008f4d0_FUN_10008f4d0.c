
void FUN_10008f4d0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    iVar1 = *(int *)(*(undefined8 **)(param_1 + 0xa8) + 6);
    iVar6 = iVar1 % 0x10;
    if ((iVar6 < 1) || (iVar6 <= DAT_1011b55f8)) {
      uVar2 = **(undefined8 **)(param_1 + 0xa8);
      iVar6 = *(int *)((long)plVar5 + 0x14);
      if ((ulong)*(uint *)(param_1 + 0x38) != 0) {
        uVar7 = 0;
        piVar8 = *(int **)(param_1 + 0x30);
        do {
          if (*piVar8 == iVar6) {
            uVar4 = *(undefined8 *)(*(int **)(param_1 + 0x30) + uVar7 * 4 + 2);
            goto LAB_10008f567;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(uint *)(param_1 + 0x38));
      }
      uVar4 = FUN_1007d5980();
      iVar6 = *(int *)(*(long *)(param_1 + 0x48) + 0x14);
LAB_10008f567:
      FUN_1008e3970("","vm",iVar1,"%s state(%s): delay \'%s\'(%u) command",param_1 + 0x81,uVar2,
                    uVar4,iVar6);
      plVar5 = *(long **)(param_1 + 0x48);
    }
    puVar3 = *(undefined8 **)(param_1 + 0xe8);
    *(long **)(param_1 + 0xe8) = plVar5;
    *plVar5 = param_1 + 0xe0;
    plVar5[1] = (long)puVar3;
    *puVar3 = plVar5;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}

