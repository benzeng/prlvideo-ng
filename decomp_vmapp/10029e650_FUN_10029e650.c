
void FUN_10029e650(undefined8 *param_1,void *param_2,void *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  char *pcVar11;
  ulong uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  *param_1 = &PTR_FUN_1011160b8;
  puVar1 = param_1 + 1;
  _memcpy(puVar1,param_2,0xb8);
  _memcpy(param_1 + 0x18,param_3,0xb8);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  *param_1 = &PTR_FUN_101115fd0;
  uVar2 = *(uint *)((long)param_1 + 0xc);
  switch(uVar2) {
  case 1:
    uVar13 = *(uint *)((long)param_1 + 0xc4);
    if (uVar13 == 2) {
      _memcpy(param_1 + 0x35,&DAT_100b37270,0x200);
      uVar6 = FUN_10029c850(puVar1);
      _snprintf((char *)(param_1 + 0x75),0x20,"transform.matrix.1x2-%s",uVar6);
      break;
    }
    goto LAB_10029e913;
  case 4:
    if (*(int *)((long)param_1 + 0xc4) == 2) {
      _memcpy(param_1 + 0x35,&DAT_100b37070,0x200);
      uVar6 = FUN_10029c850(puVar1);
      pcVar11 = "transform.matrix.4x2-%s";
      goto LAB_10029e8f9;
    }
  default:
switchD_10029e70c_caseD_2:
    uVar13 = *(uint *)((long)param_1 + 0xc4);
LAB_10029e913:
    _memcpy(param_1 + 0x35,&DAT_100b37470,0x200);
    uVar6 = FUN_10029c850(puVar1);
    _snprintf((char *)(param_1 + 0x75),0x20,"transform.matrix.%ux%u-%s",(ulong)uVar2,(ulong)uVar13,
              uVar6);
    break;
  case 6:
    if (*(int *)((long)param_1 + 0xc4) == 4) {
      _memcpy(param_1 + 0x35,&DAT_100b36c70,0x200);
      uVar6 = FUN_10029c850(puVar1);
      pcVar11 = "transform.matrix.6x4-%s";
    }
    else {
      if (*(int *)((long)param_1 + 0xc4) != 2) goto switchD_10029e70c_caseD_2;
      _memcpy(param_1 + 0x35,&DAT_100b36e70,0x200);
      uVar6 = FUN_10029c850(puVar1);
      pcVar11 = "transform.matrix.6x2-%s";
    }
    goto LAB_10029e8f9;
  case 8:
    iVar5 = *(int *)((long)param_1 + 0xc4);
    if (iVar5 == 2) {
      _memcpy(param_1 + 0x35,&DAT_100b36a70,0x200);
      uVar6 = FUN_10029c850(puVar1);
      pcVar11 = "transform.matrix.8x2-%s";
    }
    else if (iVar5 == 4) {
      _memcpy(param_1 + 0x35,&DAT_100b36870,0x200);
      uVar6 = FUN_10029c850(puVar1);
      pcVar11 = "transform.matrix.8x4-%s";
    }
    else {
      if (iVar5 != 6) goto switchD_10029e70c_caseD_2;
      _memcpy(param_1 + 0x35,&DAT_100b36670,0x200);
      uVar6 = FUN_10029c850(puVar1);
      pcVar11 = "transform.matrix.8x6-%s";
    }
LAB_10029e8f9:
    _snprintf((char *)(param_1 + 0x75),0x20,pcVar11,uVar6);
  }
  lVar7 = 0;
  do {
    dVar14 = *(double *)((long)param_1 + lVar7 + 0x1a8);
    dVar15 = dVar14 + 0.0 + *(double *)((long)param_1 + lVar7 + 0x1b0) +
             *(double *)((long)param_1 + lVar7 + 0x1b8) + *(double *)((long)param_1 + lVar7 + 0x1c0)
             + *(double *)((long)param_1 + lVar7 + 0x1c8) +
             *(double *)((long)param_1 + lVar7 + 0x1d0) + *(double *)((long)param_1 + lVar7 + 0x1d8)
             + *(double *)((long)param_1 + lVar7 + 0x1e0);
    if ((dVar15 != 0.0) || (NAN(dVar15))) {
      auVar16._8_8_ = *(undefined8 *)((long)param_1 + lVar7 + 0x1b0);
      auVar16._0_8_ = dVar14;
      auVar17._8_8_ = dVar15;
      auVar17._0_8_ = dVar15;
      auVar17 = divpd(auVar16,auVar17);
      *(undefined1 (*) [16])((long)param_1 + lVar7 + 0x1a8) = auVar17;
      auVar3._8_8_ = dVar15;
      auVar3._0_8_ = dVar15;
      auVar17 = divpd(*(undefined1 (*) [16])((long)param_1 + lVar7 + 0x1b8),auVar3);
      *(undefined1 (*) [16])((long)param_1 + lVar7 + 0x1b8) = auVar17;
      auVar4._8_8_ = dVar15;
      auVar4._0_8_ = dVar15;
      auVar17 = divpd(*(undefined1 (*) [16])((long)param_1 + lVar7 + 0x1c8),auVar4);
      *(undefined1 (*) [16])((long)param_1 + lVar7 + 0x1c8) = auVar17;
      *(double *)((long)param_1 + lVar7 + 0x1d8) =
           *(double *)((long)param_1 + lVar7 + 0x1d8) / dVar15;
      dVar15 = *(double *)((long)param_1 + lVar7 + 0x1e0) / dVar15;
    }
    else {
      puVar1 = (undefined8 *)((long)param_1 + lVar7 + 0x1a8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)param_1 + lVar7 + 0x1b8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)param_1 + lVar7 + 0x1c8);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)param_1 + lVar7 + 0x1d8) = 0;
      dVar15 = 0.0;
    }
    *(double *)((long)param_1 + lVar7 + 0x1e0) = dVar15;
    lVar7 = lVar7 + 0x40;
  } while (lVar7 != 0x200);
  uVar2 = *(uint *)((long)param_2 + 4);
  if (uVar2 != 0) {
    uVar13 = *(uint *)((long)param_3 + 4);
    uVar12 = 0;
    uVar8 = (ulong)uVar13;
    do {
      iVar5 = (int)uVar8;
      uVar8 = 0;
      if (iVar5 != 0) {
        uVar9 = 0;
        uVar8 = uVar12;
        do {
          dVar14 = 0.0;
          if ((uint)uVar12 < 8) {
            dVar14 = *(double *)((long)param_2 + uVar12 * 8 + 0x68);
          }
          param_1[uVar8 + 0x35] = dVar14 * (double)param_1[uVar8 + 0x35];
          uVar9 = uVar9 + 1;
          uVar8 = (ulong)((int)uVar8 + 8);
        } while (uVar9 < uVar13);
        uVar8 = (ulong)uVar13;
      }
      uVar10 = (uint)uVar12 + 1;
      uVar12 = (ulong)uVar10;
    } while (uVar10 < uVar2);
  }
  *(uint *)(param_1 + 0x79) = *(uint *)((long)param_2 + 8) / *(uint *)((long)param_3 + 8);
  return;
}

