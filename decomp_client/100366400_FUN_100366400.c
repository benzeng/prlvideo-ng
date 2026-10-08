
void FUN_100366400(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double local_78;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = param_2[6];
  local_30 = param_2[5];
  local_38 = param_2[4];
  local_78 = *(double *)*(undefined1 (*) [16])(param_2 + 2);
  local_48 = *(undefined1 (*) [16])(param_2 + 2);
  local_58 = *param_2;
  local_50 = param_2[1];
  if (((((local_78 != 0.0) || (NAN(local_78))) || ((double)param_2[3] != 0.0)) ||
      (NAN((double)param_2[3]))) &&
     (((*(ulong *)(*(long *)(param_1 + 8) + 0xa0) | *(ulong *)(*(long *)(param_1 + 8) + 0x98)) &
      0x7fffffffffffffff) != 0)) {
    uVar4 = MacUtils::currentCGEvent();
    auVar8 = _CGEventGetLocation(uVar4);
    lVar1 = *(long *)(param_1 + 8);
    dVar5 = auVar8._0_8_ - *(double *)(lVar1 + 0x98);
    dVar6 = auVar8._8_8_ - *(double *)(lVar1 + 0xa0);
    if ((((ulong)dVar6 | (ulong)dVar5) & 0x7fffffffffffffff) != 0) {
      *(undefined8 *)(lVar1 + 0xa0) = 0;
      *(undefined8 *)(lVar1 + 0x98) = 0;
      local_78 = (double)local_48._0_8_ - dVar5;
      local_48._8_8_ = (double)local_48._8_8_ - dVar6;
      local_48._0_8_ = local_78;
    }
  }
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(lVar1 + 0x48);
  if (((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) && (*(long *)(lVar1 + 0x50) != 0)) {
    uVar4 = FUN_100360500();
    uVar4 = FUN_1003277b0(uVar4);
    auVar7._8_8_ = local_48._8_8_;
    auVar7._0_8_ = local_78;
    auVar8._8_8_ = uVar4;
    auVar8._0_8_ = uVar4;
    local_48 = divpd(auVar7,auVar8);
  }
  cVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),&local_58);
  if (cVar3 != '\0') {
    FUN_10035fc90(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  }
  return;
}

