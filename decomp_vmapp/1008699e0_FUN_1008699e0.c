
ulong FUN_1008699e0(long *param_1,undefined8 param_2,uint param_3,char *param_4,ulong param_5,
                   long param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if ((6 < param_3) || ((0x54U >> (param_3 & 0x1f) & 1) == 0)) {
    FUN_100887ce0(0x10,0xa1,0x68,"ec2_oct.c",0xba);
    return 0;
  }
  iVar1 = FUN_10085c5d0(param_1,param_2);
  if (iVar1 != 0) {
    if (param_4 == (char *)0x0) {
      return 1;
    }
    if (param_5 != 0) {
      *param_4 = '\0';
      return 1;
    }
    FUN_100887ce0(0x10,0xa1,100,"ec2_oct.c",0xc2);
    return 0;
  }
  iVar1 = FUN_10085bc50(param_1);
  iVar1 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
  uVar8 = (ulong)iVar1;
  uVar3 = (uVar8 << (param_3 != 2)) + 1;
  if (param_4 == (char *)0x0) {
    return uVar3;
  }
  if (param_5 < uVar3) {
    FUN_100887ce0(0x10,0xa1,100,"ec2_oct.c",0xd3);
    return 0;
  }
  lVar4 = 0;
  if ((param_6 == 0) && (lVar4 = FUN_10084c820(), param_6 = lVar4, lVar4 == 0)) {
    return 0;
  }
  FUN_10084ca60(param_6);
  lVar5 = FUN_10084cc20(param_6);
  uVar6 = FUN_10084cc20(param_6);
  puVar7 = (undefined8 *)FUN_10084cc20(param_6);
  if ((puVar7 == (undefined8 *)0x0) ||
     (iVar2 = FUN_10085c430(param_1,param_2,lVar5,uVar6,param_6), iVar2 == 0)) goto LAB_100869d6c;
  *param_4 = (char)param_3;
  if ((param_3 != 4) && (*(int *)(lVar5 + 8) != 0)) {
    iVar2 = (**(code **)(*param_1 + 0x110))(param_1,puVar7,uVar6,lVar5,param_6);
    if (iVar2 == 0) goto LAB_100869d6c;
    if ((0 < *(int *)(puVar7 + 1)) && ((*(byte *)*puVar7 & 1) != 0)) {
      *param_4 = *param_4 + '\x01';
    }
  }
  iVar2 = FUN_10084b410(lVar5);
  iVar2 = (int)(iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d)) >> 3;
  if (uVar8 < uVar8 - (long)iVar2) {
    uVar6 = 0xf4;
  }
  else {
    if (iVar1 == iVar2) {
      lVar10 = 1;
    }
    else {
      ___bzero(param_4 + 1);
      lVar10 = (uVar8 + 1) - (long)iVar2;
    }
    uVar9 = uVar8 + 1;
    iVar2 = FUN_10084bdf0(lVar5,param_4 + lVar10);
    if (iVar2 + lVar10 == uVar9) {
      if ((param_3 & 0xfffffffd) == 4) {
        iVar2 = FUN_10084b410(uVar6);
        iVar2 = (int)(iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d)) >> 3;
        if (uVar8 < uVar8 - (long)iVar2) {
          uVar6 = 0x106;
          goto LAB_100869d63;
        }
        if (iVar1 != iVar2) {
          ___bzero(param_4 + uVar9);
          uVar9 = (uVar8 + uVar9) - (long)iVar2;
        }
        iVar1 = FUN_10084bdf0(uVar6,param_4 + uVar9);
        uVar9 = uVar9 + (long)iVar1;
      }
      if (uVar9 == uVar3) {
        FUN_10084cb40(param_6);
        if (lVar4 == 0) {
          return uVar3;
        }
        FUN_10084c8b0();
        return uVar3;
      }
      uVar6 = 0x112;
    }
    else {
      uVar6 = 0xfe;
    }
  }
LAB_100869d63:
  FUN_100887ce0(0x10,0xa1,0x44,"ec2_oct.c",uVar6);
LAB_100869d6c:
  FUN_10084cb40(param_6);
  if (lVar4 != 0) {
    FUN_10084c8b0();
  }
  return 0;
}

