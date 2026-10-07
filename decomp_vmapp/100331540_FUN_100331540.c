
undefined8 FUN_100331540(long param_1,long param_2,ulong *param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  uVar5 = 0xf0000026;
  if (param_4 != 0x48) {
    return 0xf0000026;
  }
  if (*(long **)(param_1 + 0x28) == (long *)0x0) goto LAB_100331757;
  plVar3 = *(long **)(param_1 + 0x28);
  plVar10 = (long *)(param_1 + 0x28);
  do {
    while (plVar9 = plVar3, (ulong)plVar9[4] < *param_3) {
      plVar1 = plVar9 + 1;
      plVar9 = plVar10;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_1003315c0;
    }
    plVar3 = (long *)*plVar9;
    plVar10 = plVar9;
  } while ((long *)*plVar9 != (long *)0x0);
LAB_1003315c0:
  if (((plVar9 == (long *)(param_1 + 0x28)) || (*param_3 < (ulong)plVar9[4])) ||
     (lVar2 = plVar9[5], lVar2 == 0)) goto LAB_100331757;
  iVar4 = (int)param_3[1];
  if (*(long **)(lVar2 + 0x18) == (long *)0x0) {
LAB_10033162a:
    if ((iVar4 != 0) || (*(long *)(lVar2 + 0x40) == 0)) goto LAB_100331757;
  }
  else {
    plVar3 = *(long **)(lVar2 + 0x18);
    plVar10 = (long *)(lVar2 + 0x18);
    do {
      while (plVar9 = plVar3, (int)plVar9[4] < iVar4) {
        plVar1 = plVar9 + 1;
        plVar9 = plVar10;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_100331620;
      }
      plVar3 = (long *)*plVar9;
      plVar10 = plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
LAB_100331620:
    if ((plVar9 == (long *)(lVar2 + 0x18)) || (iVar4 < (int)plVar9[4])) goto LAB_10033162a;
  }
  lVar6 = FUN_100331370(param_1,param_2,param_3 + 4,param_1 + 0x58);
  if (lVar6 != 0) {
    FUN_100331410();
  }
  lVar6 = FUN_100331370(param_1,param_2,(long)param_3 + 0x14,param_1 + 0x58);
  if (lVar6 != 0) {
    if (*(long *)(lVar2 + 0x40) == 0) {
      lVar8 = 0;
      pvVar7 = (void *)0x0;
      uVar11 = 0;
      if ((param_3[6] & 2) != 0) {
        lVar8 = 0;
        pvVar7 = (void *)0x0;
        uVar11 = 0;
        if (*(uint *)((long)param_3 + 0x2c) < (uint)*(ushort *)(param_2 + 0x16)) {
          lVar8 = FUN_1002a6120(param_2,*(uint *)((long)param_3 + 0x2c),0);
          uVar11 = (ulong)*(uint *)(lVar8 + 8);
          if (uVar11 == 0) {
            uVar11 = 0;
            pvVar7 = (void *)0x0;
          }
          else {
            pvVar7 = operator_new__(uVar11);
          }
        }
      }
      iVar4 = FUN_10035a0d0(lVar2,(int)param_3[1],lVar6,*(undefined4 *)((long)param_3 + 0x1c),pvVar7
                            ,uVar11,*(undefined4 *)((long)param_3 + 0xc),(int)param_3[2]);
      if (iVar4 != 0) {
        FUN_1002a5a50(lVar8,0,pvVar7,iVar4);
      }
      if (pvVar7 != (void *)0x0) {
        operator_delete__(pvVar7);
      }
    }
    else {
      FUN_10035a190(lVar2,lVar6,*(undefined4 *)((long)param_3 + 0x1c));
    }
  }
  uVar5 = 0;
LAB_100331757:
  if ((int)param_3[8] == 1) {
    if ((*(uint *)((long)param_3 + 0x3c) < *(uint *)(*(long *)(param_1 + 0x10) + 0x928)) &&
       (*(int *)((long)param_3 + 0x44) == 4)) {
      *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x920) + (ulong)*(uint *)((long)param_3 + 0x3c)
              ) = (int)param_3[7];
    }
  }
  return uVar5;
}

