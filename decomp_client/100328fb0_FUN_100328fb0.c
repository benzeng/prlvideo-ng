
void FUN_100328fb0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong in_RAX;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong local_28;
  
  *param_1 = &PTR_FUN_10220bb80;
  local_28 = in_RAX;
  if ((DAT_102312230 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102312230), iVar3 != 0)) {
    DAT_102312228 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    ___cxa_atexit(FUN_10032ba30,&DAT_102312228,0x100000000);
    ___cxa_guard_release(&DAT_102312230);
  }
  uVar6 = 0;
  if ((param_1[2] != 0) && (uVar6 = 0, *(int *)(param_1[2] + 4) != 0)) {
    uVar6 = param_1[3];
  }
  FUN_1003193b0(&local_28,uVar6);
  uVar1 = local_28;
  if (1 < *(uint *)DAT_102312228) {
    FUN_10032bc20(&DAT_102312228);
  }
  while (*(long *)(DAT_102312228 + 0x10) != 0) {
    lVar2 = *(long *)(DAT_102312228 + 0x10);
    lVar4 = 0;
    do {
      while (lVar7 = lVar2, uVar5 = *(ulong *)(lVar7 + 0x18), uVar1 <= uVar5) {
        lVar2 = *(long *)(lVar7 + 8);
        lVar4 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_1003290aa;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    if (lVar4 == 0) break;
    uVar5 = *(ulong *)(lVar4 + 0x18);
LAB_1003290aa:
    if (uVar1 < uVar5) break;
    QMapDataBase::freeNodeAndRebalance(DAT_102312228);
  }
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  FUN_100327ff0(param_1);
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x20))();
  }
  FUN_100327dc0(param_1);
  return;
}

