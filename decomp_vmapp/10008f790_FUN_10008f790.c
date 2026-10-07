
void FUN_10008f790(long *param_1,void *param_2,undefined4 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  iVar7 = *(int *)((undefined8 *)param_1[0x15] + 6);
  iVar5 = *(int *)((long)param_2 + 0x38);
  if (*(int *)((long)param_2 + 0x38) <= iVar7) {
    iVar5 = iVar7;
  }
  if ((iVar5 % 0x10 < 1) || (iVar5 % 0x10 <= DAT_1011b55f8)) {
    uVar1 = *(undefined8 *)param_1[0x15];
    puVar2 = (&PTR_s_current_100ba8820)[param_4 & 0xffffffff];
    iVar7 = *(int *)((long)param_2 + 0x14);
    if ((ulong)*(uint *)(param_1 + 7) != 0) {
      uVar4 = 0;
      piVar6 = (int *)param_1[6];
      do {
        if (*piVar6 == iVar7) {
          uVar3 = *(undefined8 *)((int *)param_1[6] + uVar4 * 4 + 2);
          goto LAB_10008f85c;
        }
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 < *(uint *)(param_1 + 7));
    }
    uVar3 = FUN_1007d5980();
    iVar7 = *(int *)((long)param_2 + 0x14);
LAB_10008f85c:
    FUN_1008e3970("","vm",iVar5,"%s state(%s): completed %s \'%s\'(%u) command with result 0x%x",
                  (long)param_1 + 0x81,uVar1,puVar2,uVar3,iVar7,param_3);
  }
  if ((*(long *)((long)param_2 + 0x18) != 0) &&
     (*(long *)(*(long *)((long)param_2 + 0x18) + 0x10) != 0)) {
    if (*(int *)(*(long *)((long)param_2 + 0x20) + 4) == 0) {
      (**(code **)(*param_1 + 0x80))(param_1,(long)param_2 + 0x18,param_3);
    }
    else {
      (**(code **)(*param_1 + 0x88))(param_1,(long)param_2 + 0x18,(long)param_2 + 0x20);
    }
  }
  FUN_1000907f0(param_2);
  operator_delete(param_2);
  return;
}

