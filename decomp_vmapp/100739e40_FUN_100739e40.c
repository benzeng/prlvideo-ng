
undefined8 FUN_100739e40(long *param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_2 != 0) {
    iVar3 = (int)param_1[1];
    if ((long)iVar3 == 0) {
      if ((*(int *)((long)param_1 + 0xc) < 1) && (lVar5 = FUN_10072d730(param_1,1), lVar5 == 0)) {
        return 0;
      }
      *(undefined4 *)(param_1 + 2) = 0;
      *(ulong *)*param_1 = param_2;
      *(undefined4 *)(param_1 + 1) = 1;
    }
    else {
      if ((int)param_1[2] != 0) {
        *(undefined4 *)(param_1 + 2) = 0;
        uVar4 = FUN_1007365d0(param_1,param_2);
        if ((int)param_1[1] == 0) {
          return uVar4;
        }
        *(uint *)(param_1 + 2) = (uint)((int)param_1[2] == 0);
        return uVar4;
      }
      lVar5 = *param_1;
      if ((*(long *)(lVar5 + -8 + (long)iVar3 * 8) == -1) &&
         (*(int *)((long)param_1 + 0xc) <= iVar3)) {
        lVar5 = FUN_10072d730(param_1,iVar3 + 1);
        if (lVar5 == 0) {
          return 0;
        }
        iVar3 = (int)param_1[1];
        lVar5 = *param_1;
      }
      lVar2 = 0;
      do {
        lVar7 = lVar2;
        uVar6 = param_2;
        if (lVar7 < iVar3) {
          uVar6 = *(long *)(lVar5 + lVar7 * 8) + param_2;
        }
        *(ulong *)(lVar5 + lVar7 * 8) = uVar6;
        bVar1 = uVar6 < param_2;
        lVar2 = lVar7 + 1;
        param_2 = 1;
      } while (bVar1);
      if (iVar3 <= (int)lVar7) {
        *(int *)(param_1 + 1) = iVar3 + 1;
      }
    }
  }
  return 1;
}

