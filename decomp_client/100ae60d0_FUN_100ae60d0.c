
undefined1  [16] FUN_100ae60d0(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar5 = *(long *)(param_1 + 8);
  uVar6 = 0xffffffffffffffff;
  uVar4 = 0;
  if (param_2 < *(uint *)(lVar5 + 4)) {
    lVar5 = lVar5 + *(long *)(lVar5 + 0x10);
    lVar3 = (long)(int)param_2 * 0x20;
    iVar1 = *(int *)(lVar3 + 0x18 + lVar5);
    iVar2 = *(int *)(lVar3 + 0x1c + lVar5);
    uVar4 = CONCAT44(iVar2,iVar1);
    uVar6 = CONCAT44(iVar2 + -1 + (uint)*(ushort *)(lVar3 + 6 + lVar5),
                     iVar1 + -1 + (uint)*(ushort *)(lVar3 + 4 + lVar5));
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar4;
  return auVar7;
}

