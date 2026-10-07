
undefined1 FUN_1007681d0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  FILE *pFVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_48 [2];
  ulong local_38;
  
  lVar4 = (**(code **)(*param_1 + 0x80))();
  if (lVar4 < 0x30) {
    pcVar6 = "Input file is too small, not a eTrace dump";
  }
  else {
    iVar3 = QFileDevice::handle();
    pFVar5 = _fdopen(iVar3,"w");
    if (pFVar5 != (FILE *)0x0) {
      QIODevice::read((char *)param_1,(longlong)&local_38);
      uVar7 = local_38;
      QIODevice::read((char *)param_1,(longlong)&local_38);
      uVar1 = local_38;
      QIODevice::read((char *)param_1,(longlong)&local_38);
      uVar2 = local_38;
      _fwrite("========================= eTrace dump ==============================\n",0x45,1,pFVar5
             );
      uVar10 = uVar7 >> 0x20;
      if (uVar10 == 0) {
        _fprintf(pFVar5,"CPU freq is %llu MHz\n");
      }
      else {
        _fprintf(pFVar5,"CPU timebase, numer: %u, denom: %u\n",uVar7,uVar10);
      }
      _fwrite("Abs time (s)   Delta (us)\n",0x1a,1,pFVar5);
      QIODevice::read((char *)param_1,(longlong)&local_38);
      uVar9 = local_38;
      local_48[0] = local_38;
      QIODevice::read((char *)param_1,(longlong)&local_38);
      local_68 = 0xffffffffffffffff;
      local_60 = 0;
      local_58 = 0;
      if (uVar9 != 0) {
        local_68 = 0xffffffffffffffff;
        uVar11 = 0;
        local_60 = 0;
        local_58 = 0;
        local_70 = 0;
        do {
          if (lVar4 - 0x30U >> 4 <= uVar11) break;
          uVar8 = (uVar9 & 0xffffffffffff) * 0x100;
          if (((uVar9 & 0xffffffffffff) != 0) &&
             (uVar9 = uVar8 - uVar1, uVar1 <= uVar8 && uVar9 != 0)) {
            if (uVar7 < 0x100000000) {
              uVar9 = uVar9 / uVar7;
            }
            else {
              uVar9 = (uVar9 * (uVar7 & 0xffffffff)) / (uVar10 * 1000 & 0xfffffff8);
            }
            if (uVar9 < local_68) {
              local_68 = uVar9;
            }
            if (local_58 < uVar9) {
              local_58 = uVar9;
            }
            FUN_100763860(pFVar5,local_48,uVar9,local_70);
            local_60 = (ulong)((int)local_60 + 1);
            local_70 = uVar9;
          }
          uVar11 = (ulong)((int)uVar11 + 1);
          QIODevice::read((char *)param_1,(longlong)&local_38);
          local_48[0] = local_38;
          QIODevice::read((char *)param_1,(longlong)&local_38);
          uVar9 = local_48[0];
        } while (local_48[0] != 0);
      }
      uVar7 = local_58 - local_68;
      if (local_58 < local_68 || local_58 - local_68 == 0) {
        uVar7 = 0;
      }
      _fprintf(pFVar5,"Total %d event found\n",local_60);
      _fprintf(pFVar5,"Log duration: according to TSC %llu.%06llu sec\n",uVar7 / 1000000,
               uVar7 % 1000000);
      QIODevice::read((char *)param_1,(longlong)&local_38);
      _fprintf(pFVar5,"                     real time %llu.%06llu sec\n",
               (local_38 - uVar2) / 1000000,(local_38 - uVar2) % 1000000);
      _fflush(pFVar5);
      return 1;
    }
    pcVar6 = "Failed to reopen output file";
  }
  FUN_1008e3970("","etrace",0,pcVar6);
  return 0;
}

