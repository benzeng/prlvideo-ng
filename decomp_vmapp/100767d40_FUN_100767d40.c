
undefined1 FUN_100767d40(long *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  FILE *pFVar8;
  char *pcVar9;
  int iVar10;
  size_t sVar11;
  ulong uVar12;
  uint uVar13;
  size_t sVar14;
  ulong uVar15;
  ulong uVar16;
  ulong local_a8;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_58;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((ulong)uVar2 < 0x30) {
    pcVar9 = "Input file is too small, not a eTrace dump";
  }
  else {
    iVar7 = QFileDevice::handle();
    pFVar8 = _fdopen(iVar7,"w");
    if (pFVar8 != (FILE *)0x0) {
      uVar16 = (ulong)*(uint *)(param_1 + 1);
      uVar12 = uVar16;
      if (8 < uVar16) {
        uVar12 = 8;
      }
      pvVar3 = (void *)*param_1;
      _memcpy(&local_38,pvVar3,uVar12);
      uVar5 = local_38;
      *param_1 = (long)((long)pvVar3 + uVar12);
      uVar16 = uVar16 - uVar12;
      *(int *)(param_1 + 1) = (int)uVar16;
      sVar11 = uVar16 & 0xffffffff;
      if (8 < sVar11) {
        sVar11 = 8;
      }
      _memcpy(&local_38,(void *)((long)pvVar3 + uVar12),sVar11);
      uVar6 = local_38;
      pvVar1 = (void *)((long)pvVar3 + uVar12 + sVar11);
      *param_1 = (long)pvVar1;
      iVar7 = (int)(uVar16 - sVar11);
      *(int *)(param_1 + 1) = iVar7;
      uVar16 = uVar16 - sVar11 & 0xffffffff;
      sVar14 = 8;
      if (uVar16 < 9) {
        sVar14 = uVar16;
      }
      iVar10 = 8;
      if (uVar16 < 9) {
        iVar10 = iVar7;
      }
      _memcpy(&local_38,pvVar1,sVar14);
      uVar16 = local_38;
      *param_1 = sVar14 + uVar12 + sVar11 + (long)pvVar3;
      *(int *)(param_1 + 1) = iVar7 - iVar10;
      _fwrite("========================= eTrace dump ==============================\n",0x45,1,pFVar8
             );
      uVar12 = uVar5 >> 0x20;
      if (uVar12 == 0) {
        local_a8 = 0;
        _fprintf(pFVar8,"CPU freq is %llu MHz\n",uVar5);
      }
      else {
        _fprintf(pFVar8,"CPU timebase, numer: %u, denom: %u\n",uVar5 & 0xffffffff,uVar12);
        local_a8 = uVar12 * 1000 & 0xfffffff8;
      }
      _fwrite("Abs time (s)   Delta (us)\n",0x1a,1,pFVar8);
      local_90 = 0;
      local_88 = 0xffffffffffffffff;
      local_78 = 0;
      local_80 = 0;
      local_58 = 0;
      while( true ) {
        uVar15 = (ulong)*(uint *)(param_1 + 1);
        uVar12 = uVar15;
        if (8 < uVar15) {
          uVar12 = 8;
        }
        pvVar3 = (void *)*param_1;
        _memcpy(&local_38,pvVar3,uVar12);
        uVar4 = local_38;
        *param_1 = (long)((long)pvVar3 + uVar12);
        iVar7 = (int)(uVar15 - uVar12);
        *(int *)(param_1 + 1) = iVar7;
        local_48 = local_38;
        sVar11 = uVar15 - uVar12 & 0xffffffff;
        if (8 < sVar11) {
          sVar11 = 8;
        }
        _memcpy(&local_38,(void *)((long)pvVar3 + uVar12),sVar11);
        *param_1 = sVar11 + uVar12 + (long)pvVar3;
        *(int *)(param_1 + 1) = iVar7 - (int)sVar11;
        local_40 = local_38;
        if ((uVar4 == 0) || ((ulong)uVar2 - 0x30 >> 4 <= local_58)) break;
        uVar4 = uVar4 & 0xffffffffffff;
        uVar12 = uVar4 * 0x100;
        if ((uVar4 != 0) && (uVar15 = uVar12 - uVar6, uVar6 <= uVar12 && uVar15 != 0)) {
          if (uVar5 < 0x100000000) {
            uVar15 = uVar15 / uVar5;
          }
          else {
            uVar15 = (uVar15 * (uVar5 & 0xffffffff)) / local_a8;
          }
          if (uVar15 < local_88) {
            local_88 = uVar15;
          }
          if (local_78 < uVar15) {
            local_78 = uVar15;
          }
          FUN_100763860(pFVar8,&local_48,uVar15,local_90);
          local_80 = (ulong)((int)local_80 + 1);
          local_90 = uVar15;
        }
        local_58 = (ulong)((int)local_58 + 1);
      }
      uVar12 = local_78 - local_88;
      if (local_78 < local_88 || local_78 - local_88 == 0) {
        uVar12 = 0;
      }
      _fprintf(pFVar8,"Total %d event found\n",local_80);
      _fprintf(pFVar8,"Log duration: according to TSC %llu.%06llu sec\n",uVar12 / 1000000,
               uVar12 % 1000000);
      uVar2 = *(uint *)(param_1 + 1);
      uVar12 = (ulong)uVar2;
      pvVar3 = (void *)*param_1;
      sVar11 = 8;
      if (uVar12 < 9) {
        sVar11 = uVar12;
      }
      uVar13 = 8;
      if (uVar12 < 9) {
        uVar13 = uVar2;
      }
      _memcpy(&local_38,pvVar3,sVar11);
      *param_1 = sVar11 + (long)pvVar3;
      *(uint *)(param_1 + 1) = uVar2 - uVar13;
      _fprintf(pFVar8,"                     real time %llu.%06llu sec\n",
               (local_38 - uVar16) / 1000000,(local_38 - uVar16) % 1000000);
      _fflush(pFVar8);
      return 1;
    }
    pcVar9 = "Failed to reopen output file";
  }
  FUN_1008e3970("","etrace",0,pcVar9);
  return 0;
}

