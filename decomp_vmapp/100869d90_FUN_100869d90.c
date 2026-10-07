
undefined8 FUN_100869d90(long *param_1,undefined8 param_2,byte *param_3,long param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_4 == 0) {
    uVar7 = 100;
    uVar8 = 0x135;
LAB_100869e33:
    FUN_100887ce0(0x10,0xa0,uVar7,"ec2_oct.c",uVar8);
    return 0;
  }
  bVar1 = *param_3;
  uVar10 = (uint)bVar1;
  uVar9 = uVar10 & 0xfe;
  if ((6 < uVar9) || ((0x55U >> (uVar10 & 0x1e) & 1) == 0)) {
    uVar7 = 0x66;
    uVar8 = 0x13e;
    goto LAB_100869e33;
  }
  if ((bVar1 & 0xfb) == 1) {
    uVar7 = 0x66;
    uVar8 = 0x142;
    goto LAB_100869e33;
  }
  if ((bVar1 & 0xfe) == 0) {
    if (param_4 == 1) {
      uVar7 = FUN_10085c1f0(param_1,param_2);
      return uVar7;
    }
    uVar7 = 0x66;
    uVar8 = 0x148;
    goto LAB_100869e33;
  }
  iVar2 = FUN_10085bc50();
  iVar2 = (int)(iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d)) >> 3;
  if (((long)iVar2 << (uVar9 != 2)) + 1 != param_4) {
    uVar7 = 0x66;
    uVar8 = 0x155;
    goto LAB_100869e33;
  }
  lVar4 = 0;
  if ((param_5 == 0) && (lVar4 = FUN_10084c820(), param_5 = lVar4, lVar4 == 0)) {
    return 0;
  }
  FUN_10084ca60(param_5);
  uVar7 = FUN_10084cc20(param_5);
  uVar8 = FUN_10084cc20(param_5);
  puVar5 = (undefined8 *)FUN_10084cc20(param_5);
  if ((puVar5 != (undefined8 *)0x0) && (lVar6 = FUN_10084bc20(param_3 + 1,iVar2,uVar7), lVar6 != 0))
  {
    iVar3 = FUN_10084bf00(uVar7,param_1 + 0xd);
    if (iVar3 < 0) {
      if (uVar9 == 2) {
        iVar2 = FUN_10086a1a0(param_1,param_2,uVar7,uVar10 & 1,param_5);
LAB_100869ffa:
        if (iVar2 == 0) goto LAB_100869fa5;
        iVar2 = FUN_10085c630(param_1,param_2,param_5);
        uVar7 = 1;
        if (0 < iVar2) goto LAB_100869fa8;
        uVar7 = 0x6b;
        uVar8 = 0x187;
      }
      else {
        lVar6 = FUN_10084bc20(param_3 + (long)iVar2 + 1,iVar2,uVar8);
        if (lVar6 == 0) goto LAB_100869fa5;
        iVar2 = FUN_10084bf00(uVar8,param_1 + 0xd);
        if (-1 < iVar2) {
          uVar7 = 0x66;
          uVar8 = 0x175;
          goto LAB_100869f3b;
        }
        if (uVar9 != 6) goto LAB_10086a0d6;
        iVar2 = (**(code **)(*param_1 + 0x110))(param_1,puVar5,uVar8,uVar7,param_5);
        if (iVar2 == 0) goto LAB_100869fa5;
        if (*(int *)(puVar5 + 1) < 1) {
          if ((bVar1 & 1) == 0) goto LAB_10086a0d6;
        }
        else if ((uVar10 & 1) == (uint)(*(byte *)*puVar5 & 1)) {
LAB_10086a0d6:
          iVar2 = FUN_10085c370(param_1,param_2,uVar7,uVar8,param_5);
          goto LAB_100869ffa;
        }
        uVar7 = 0x66;
        uVar8 = 0x17c;
      }
    }
    else {
      uVar7 = 0x66;
      uVar8 = 0x169;
    }
LAB_100869f3b:
    FUN_100887ce0(0x10,0xa0,uVar7,"ec2_oct.c",uVar8);
  }
LAB_100869fa5:
  uVar7 = 0;
LAB_100869fa8:
  FUN_10084cb40(param_5);
  if (lVar4 == 0) {
    return uVar7;
  }
  FUN_10084c8b0();
  return uVar7;
}

