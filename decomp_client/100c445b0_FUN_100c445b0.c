
undefined8 FUN_100c445b0(long param_1,undefined8 param_2,byte *param_3,long param_4,long param_5)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_4 == 0) {
    uVar8 = 100;
    uVar9 = 0x152;
LAB_100c44653:
    FUN_100c62ee0(0x10,0x67,uVar8,"ecp_oct.c",uVar9);
    return 0;
  }
  bVar2 = *param_3;
  uVar11 = (uint)bVar2;
  uVar10 = uVar11 & 0xfe;
  if ((6 < uVar10) || ((0x55U >> (uVar11 & 0x1e) & 1) == 0)) {
    uVar8 = 0x66;
    uVar9 = 0x15b;
    goto LAB_100c44653;
  }
  if ((bVar2 & 0xfb) == 1) {
    uVar8 = 0x66;
    uVar9 = 0x15f;
    goto LAB_100c44653;
  }
  if ((bVar2 & 0xfe) == 0) {
    if (param_4 == 1) {
      uVar8 = FUN_100c373f0(param_1,param_2);
      return uVar8;
    }
    uVar8 = 0x66;
    uVar9 = 0x165;
    goto LAB_100c44653;
  }
  lVar1 = param_1 + 0x68;
  iVar3 = FUN_100c26610(lVar1);
  iVar3 = (int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3;
  if (((long)iVar3 << (uVar10 != 2)) + 1 != param_4) {
    uVar8 = 0x66;
    uVar9 = 0x172;
    goto LAB_100c44653;
  }
  lVar5 = 0;
  if ((param_5 == 0) && (lVar5 = FUN_100c27a20(), param_5 = lVar5, lVar5 == 0)) {
    return 0;
  }
  FUN_100c27c60(param_5);
  uVar8 = FUN_100c27e20(param_5);
  puVar6 = (undefined8 *)FUN_100c27e20(param_5);
  if ((puVar6 != (undefined8 *)0x0) && (lVar7 = FUN_100c26e20(param_3 + 1,iVar3,uVar8), lVar7 != 0))
  {
    iVar4 = FUN_100c27100(uVar8,lVar1);
    if (iVar4 < 0) {
      if (uVar10 == 2) {
        iVar3 = FUN_100c45320(param_1,param_2,uVar8,uVar11 & 1,param_5);
      }
      else {
        lVar7 = FUN_100c26e20(param_3 + (long)iVar3 + 1,iVar3,puVar6);
        if (lVar7 == 0) goto LAB_100c447c1;
        iVar3 = FUN_100c27100(puVar6,lVar1);
        if (-1 < iVar3) {
          uVar8 = 0x66;
          uVar9 = 0x191;
          goto LAB_100c44757;
        }
        if (uVar10 == 6) {
          if (*(int *)(puVar6 + 1) < 1) {
            if ((bVar2 & 1) != 0) goto LAB_100c448f0;
          }
          else if ((uVar11 & 1) != (uint)(*(byte *)*puVar6 & 1)) {
LAB_100c448f0:
            uVar8 = 0x66;
            uVar9 = 0x196;
            goto LAB_100c44757;
          }
        }
        iVar3 = FUN_100c37510(param_1,param_2,uVar8,puVar6,param_5);
      }
      if (iVar3 == 0) goto LAB_100c447c1;
      iVar3 = FUN_100c37830(param_1,param_2,param_5);
      uVar8 = 1;
      if (0 < iVar3) goto LAB_100c447c4;
      uVar8 = 0x6b;
      uVar9 = 0x1a1;
    }
    else {
      uVar8 = 0x66;
      uVar9 = 0x185;
    }
LAB_100c44757:
    FUN_100c62ee0(0x10,0x67,uVar8,"ecp_oct.c",uVar9);
  }
LAB_100c447c1:
  uVar8 = 0;
LAB_100c447c4:
  FUN_100c27d40(param_5);
  if (lVar5 == 0) {
    return uVar8;
  }
  FUN_100c27ab0();
  return uVar8;
}

