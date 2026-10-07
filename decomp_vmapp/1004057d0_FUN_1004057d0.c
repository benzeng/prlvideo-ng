
int FUN_1004057d0(long param_1,long param_2,uint param_3,void *param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  uint uVar10;
  ulong uVar11;
  
  iVar6 = 0;
  if ((param_3 != 0) && ((*(byte *)(param_2 + 0xa8) & 1) == 0)) {
    uVar8 = *(ulong *)(param_2 + 0x90);
    lVar7 = FUN_100404650(param_1,uVar8);
    if (lVar7 != 0) {
      uVar1 = param_3 + uVar8;
      if (((*(int *)(lVar7 + 0x14) == 1) && (uVar3 = *(ulong *)(lVar7 + 0x20), uVar8 < uVar3)) &&
         (uVar3 < uVar1)) {
        iVar6 = -((int)uVar3 - (int)uVar8);
      }
      else {
        plVar2 = (long *)(param_1 + 0x10);
        iVar6 = 0;
        do {
          uVar3 = *(ulong *)(lVar7 + 0x20);
          if (uVar8 < uVar3) {
            return iVar6;
          }
          if (uVar1 <= uVar3) {
            return iVar6;
          }
          if (*(int *)(lVar7 + 0x14) != 1) {
            return iVar6;
          }
          lVar4 = *(long *)(lVar7 + 0x48);
          plVar5 = *(long **)(lVar7 + 0x50);
          *(long **)(lVar4 + 8) = plVar5;
          *plVar5 = lVar4;
          lVar4 = *plVar2;
          *(long *)(lVar4 + 8) = lVar7 + 0x48;
          *(long *)(lVar7 + 0x48) = lVar4;
          *(long **)(lVar7 + 0x50) = plVar2;
          *plVar2 = lVar7 + 0x48;
          uVar11 = (uVar3 - uVar8) + (ulong)*(uint *)(lVar7 + 0x1c);
          uVar10 = (uint)uVar11;
          if (param_3 <= uVar11) {
            uVar10 = param_3;
          }
          sVar9 = (size_t)(int)uVar10;
          _memcpy(param_4,(void *)((uVar8 - uVar3) + *(long *)(lVar7 + 0x58)),sVar9);
          iVar6 = iVar6 + uVar10;
          lVar7 = FUN_1007d9a20(lVar7 + 0x30);
          if (lVar7 == 0) {
            return iVar6;
          }
          uVar8 = uVar8 + sVar9;
          param_4 = (void *)((long)param_4 + sVar9);
          lVar7 = lVar7 + -0x30;
          param_3 = param_3 - uVar10;
        } while (param_3 != 0);
      }
    }
  }
  return iVar6;
}

