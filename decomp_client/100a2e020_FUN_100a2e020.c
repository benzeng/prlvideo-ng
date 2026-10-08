
void FUN_100a2e020(long *param_1)

{
  short sVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  short *local_48;
  short *local_38;
  
  lVar2 = *param_1;
  iVar10 = (int)((ulong)(param_1[1] - lVar2) >> 1);
  if (iVar10 < 1) {
    local_48 = (short *)0x0;
    local_38 = (short *)0x0;
    psVar8 = (short *)0x0;
  }
  else {
    iVar5 = 0;
    iVar7 = 0;
    do {
      sVar1 = *(short *)(lVar2 + (long)iVar7 * 2);
      if ((sVar1 == 10) || (sVar1 == 0xd)) {
        iVar4 = iVar7;
        if ((iVar7 != iVar10 + -1) &&
           ((sVar1 == 0xd && (iVar4 = iVar7 + 1, *(short *)(lVar2 + (long)(iVar7 + 1) * 2) != 10))))
        {
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
        iVar5 = iVar5 + 2;
      }
      else {
        iVar5 = iVar5 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar10);
    lVar6 = (long)iVar5;
    local_48 = (short *)0x0;
    local_38 = (short *)0x0;
    psVar8 = (short *)0x0;
    if (iVar5 != 0) {
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      local_48 = operator_new(lVar6 * 2);
      local_38 = local_48 + lVar6;
      lVar6 = lVar6 * -2;
      psVar8 = local_48;
      do {
        *(undefined1 *)psVar8 = 0;
        psVar8 = (short *)((long)psVar8 + 1);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0);
    }
    if (0 < iVar10) {
      iVar5 = 0;
      psVar9 = local_48;
      do {
        sVar1 = *(short *)(lVar2 + (long)iVar5 * 2);
        if ((sVar1 == 10) || (sVar1 == 0xd)) {
          iVar7 = iVar5;
          if ((iVar5 != iVar10 + -1) &&
             ((sVar1 == 0xd && (iVar7 = iVar5 + 1, *(short *)(lVar2 + (long)(iVar5 + 1) * 2) != 10))
             )) {
            iVar7 = iVar5;
          }
          iVar5 = iVar7;
          psVar9[0] = 0xd;
          psVar9[1] = 10;
          psVar9 = psVar9 + 1;
        }
        else {
          *psVar9 = sVar1;
        }
        psVar9 = psVar9 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar10);
    }
  }
  pvVar3 = (void *)*param_1;
  *param_1 = (long)local_48;
  param_1[1] = (long)psVar8;
  param_1[2] = (long)local_38;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  return;
}

