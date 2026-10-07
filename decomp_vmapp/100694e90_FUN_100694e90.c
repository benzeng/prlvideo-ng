
int FUN_100694e90(long *param_1,undefined8 param_2,ulong param_3,int param_4)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 local_34;
  
  iVar7 = FUN_1006855a0(*(long *)(*param_1 + -0x18) + (long)param_1);
  local_34 = 0;
  if (iVar7 < 0) {
    pcVar9 = "Base WriteDirect returned error 0x%x";
  }
  else {
    iVar7 = FUN_1006950f0(param_1,param_4);
    if (-1 < iVar7) {
      uVar11 = *(uint *)(param_1 + 0x3121);
      lVar2 = param_1[0x3122];
      uVar3 = *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
      uVar10 = param_4 - (int)(((ulong)uVar11 + lVar2) / uVar3);
      lVar4 = param_1[0x3120];
      uVar13 = (int)((param_3 & 0xffffffff) / uVar3) + uVar10;
      if (((uVar10 & 7) != 0) && (uVar10 < uVar13)) {
        do {
          puVar1 = (uint *)(lVar4 + (ulong)(uVar10 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
          uVar10 = uVar10 + 1;
          if (uVar13 <= uVar10) break;
        } while ((uVar10 & 7) != 0);
      }
      uVar8 = uVar13 - uVar10;
      if (0 < (int)uVar8) {
        uVar12 = uVar8 & 0xfffffff8;
        if (uVar12 != 0) {
          if (0xe < (uVar8 | 7)) {
            _memset((void *)((ulong)(uVar10 >> 3) + lVar4),0xff,
                    (ulong)(((int)(((uint)((int)uVar8 >> 0x1f) >> 0x1d) + uVar12) >> 3) - 1) + 1);
          }
          uVar10 = uVar12 + uVar10;
        }
        if (uVar10 < uVar13) {
          param_4 = param_4 - (int)(((ulong)uVar11 + lVar2) / uVar3);
          iVar7 = (int)((param_3 & 0xffffffff) / uVar3);
          uVar11 = uVar10;
          if (((iVar7 + param_4) - uVar10 & 1) != 0) {
            puVar1 = (uint *)(lVar4 + (ulong)(uVar10 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
            uVar11 = uVar10 + 1;
          }
          if (iVar7 + -1 + param_4 != uVar10) {
            do {
              puVar1 = (uint *)(lVar4 + (ulong)(uVar11 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
              puVar1 = (uint *)(lVar4 + (ulong)(uVar11 + 1 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)(uVar11 + 1) & 0x1f);
              uVar11 = uVar11 + 2;
            } while (uVar11 != uVar13);
          }
        }
      }
      plVar5 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
      cVar6 = (**(code **)(*plVar5 + 0x48))
                        (plVar5,param_1[0x3120],(int)param_1[0x3121],&local_34,param_1[0x3122]);
      if (cVar6 != '\0') {
        return 0;
      }
      FUN_1008e3970("","dimg",0,"Error writing bitmap");
      return -0x7ffdefd9;
    }
    pcVar9 = "Reading bitmap failed with error 0x%x";
  }
  FUN_1008e3970("","dimg",0,pcVar9,iVar7);
  return iVar7;
}

