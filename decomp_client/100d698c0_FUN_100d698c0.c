
undefined8 FUN_100d698c0(long param_1,int param_2,uint *param_3)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  *param_3 = 0xffffffff;
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6 == (long *)0x0) {
    FUN_100df99c0("","WinRegistry",0,"OA00003.02:");
    uVar10 = 0x8158002;
  }
  else {
    puVar9 = (undefined8 *)(param_1 + 8);
    puVar2 = (uint *)*plVar6;
    if ((1 < *puVar2) || (*(long *)(puVar2 + 4) != 0x18)) {
      QByteArray::reallocData(plVar6,puVar2[1] + 1,puVar2[2] >> 0x1f);
      puVar2 = (uint *)*plVar6;
      plVar6 = (long *)*puVar9;
    }
    uVar5 = *(uint *)(*plVar6 + 4);
    uVar10 = 0x8158005;
    if (0x1000 < uVar5) {
      lVar1 = *(long *)(puVar2 + 4);
      uVar8 = 0x1000;
      while( true ) {
        iVar3 = *(int *)((long)puVar2 + uVar8 + lVar1);
        iVar4 = (int)uVar8;
        if (iVar3 != 0x6e696268) break;
        iVar3 = *(int *)((long)puVar2 + lVar1 + 8 + uVar8);
        if (iVar3 == 0) {
          FUN_100df99c0("","WinRegistry",0,"OA00003.04:\t%x;\t%x;\t%x",0x6e696268,uVar8,uVar5);
          return 0x8158008;
        }
        uVar7 = iVar3 + iVar4;
        uVar8 = (ulong)uVar7;
        uVar5 = iVar4 + 0x20;
        while (uVar5 < uVar7) {
          iVar3 = *(int *)((long)puVar2 + (ulong)uVar5 + lVar1);
          if ((param_2 <= iVar3) && (0 < iVar3)) {
            *param_3 = uVar5;
            return 0x8000000;
          }
          if (iVar3 < 0) {
            uVar5 = uVar5 - iVar3;
          }
          else {
            if (iVar3 < 1) {
              FUN_100df99c0("","WinRegistry",0,"OA00003.05:\t%x",uVar5);
              return 0x8158004;
            }
            uVar5 = uVar5 + iVar3;
          }
        }
        uVar5 = *(uint *)(*(long *)*puVar9 + 4);
        if (uVar5 <= uVar7) {
          return 0x8158005;
        }
      }
      FUN_100df99c0("","WinRegistry",0,"OA00003.03:\t%x;\t%x;\t%x",iVar3,uVar8,uVar5);
      uVar5 = *(uint *)(*(long *)*puVar9 + 8);
      iVar3 = (uVar5 & 0x7fffffff) - 1;
      if ((uVar5 & 0x7fffffff) == 0) {
        iVar3 = 0;
      }
      if (iVar4 < iVar3) {
        QByteArray::resize((int)(long *)*puVar9);
      }
      else {
        FUN_100df99c0("","WinRegistry",0,"OA00003.11");
        uVar10 = 0x8158019;
      }
    }
  }
  return uVar10;
}

