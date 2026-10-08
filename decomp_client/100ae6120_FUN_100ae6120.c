
undefined1  [16] FUN_100ae6120(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  
  lVar3 = *(long *)(param_1 + 8);
  uVar4 = 0;
  uVar6 = 0xffffffffffffffff;
  if (0 < (long)*(int *)(lVar3 + 4)) {
    piVar7 = (int *)(lVar3 + 0x1c + *(long *)(lVar3 + 0x10));
    uVar4 = 0;
    lVar5 = 0;
    do {
      iVar1 = piVar7[-1];
      if ((((iVar1 <= *param_2) && (*param_2 <= (int)((uint)*(ushort *)(piVar7 + -6) + iVar1))) &&
          (iVar2 = *piVar7, iVar2 <= param_2[1])) &&
         (param_2[1] <= (int)((uint)*(ushort *)((long)piVar7 + -0x16) + iVar2))) {
        uVar4 = CONCAT44(iVar2,iVar1);
        uVar6 = CONCAT44(iVar2 + -1 + (uint)*(ushort *)((long)piVar7 + -0x16),
                         iVar1 + -1 + (uint)*(ushort *)(piVar7 + -6));
        break;
      }
      lVar5 = lVar5 + 1;
      piVar7 = piVar7 + 8;
    } while (lVar5 < *(int *)(lVar3 + 4));
  }
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar4;
  return auVar8;
}

