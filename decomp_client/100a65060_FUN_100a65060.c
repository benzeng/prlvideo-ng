
bool FUN_100a65060(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  long *plVar7;
  bool bVar8;
  undefined1 local_e8 [64];
  undefined1 local_a8 [120];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  bVar8 = true;
  local_30 = lVar1;
  if (*(int *)(param_1 + 0x58) == 4) goto LAB_100a65223;
  FUN_100a64f50(param_1);
  FUN_100aafe50(local_e8,param_1 + 8);
  if (*(int *)(param_1 + 0x58) == 0) {
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      uVar4 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar4 == 0) goto LAB_100a65215;
    piVar5 = operator_new(8);
    iVar3 = _pipe((int)piVar5);
    if (iVar3 == -1) {
      piVar6 = ___error();
      FUN_100df99c0("","IpcServer",0,"pipe(), err=%d",*piVar6);
      piVar5[0] = -1;
      piVar5[1] = -1;
    }
    piVar6 = *(int **)(param_1 + 0x48);
    if ((piVar6 != piVar5) && (piVar6 != (int *)0x0)) {
      if ((-1 < *piVar6) && (-1 < piVar6[1])) {
        _close(*piVar6);
        _close(piVar6[1]);
      }
      operator_delete(piVar6);
    }
    *(int **)(param_1 + 0x48) = piVar5;
    if ((*piVar5 < 0) || (piVar5[1] < 0)) goto LAB_100a65215;
    *(undefined4 *)(param_1 + 0x58) = 3;
    FUN_100ab1d40(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x50));
    FUN_100ab1eb0(*(undefined8 *)(param_1 + 0x10));
    FUN_100aaf550(local_a8,0,0);
    plVar7 = operator_new(0x20);
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (long)&PTR_FUN_102238e08;
    plVar7[2] = (long)local_a8;
    plVar7[3] = param_1;
    cVar2 = FUN_100ab0dd0(*(undefined8 *)(param_1 + 0x10),plVar7);
    if (cVar2 != '\0') {
      FUN_100aaf630(local_a8,0xffffffff);
    }
    bVar8 = *(int *)(param_1 + 0x58) == 4;
    if (!bVar8) {
      FUN_100aafe00(local_e8);
      FUN_100a64f50(param_1);
    }
    (**(code **)(*plVar7 + 8))(plVar7);
    FUN_100aaf5b0(local_a8);
  }
  else {
LAB_100a65215:
    bVar8 = false;
  }
  FUN_100aafde0(local_e8);
LAB_100a65223:
  if (lVar1 == local_30) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

