
ulong FUN_100c44240(long param_1,undefined8 param_2,uint param_3,char *param_4,ulong param_5,
                   long param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if ((6 < param_3) || ((0x54U >> (param_3 & 0x1f) & 1) == 0)) {
    FUN_100c62ee0(0x10,0x68,0x68,"ecp_oct.c",0xdf);
    return 0;
  }
  iVar2 = FUN_100c377d0(param_1,param_2);
  if (iVar2 != 0) {
    if (param_4 == (char *)0x0) {
      return 1;
    }
    if (param_5 != 0) {
      *param_4 = '\0';
      return 1;
    }
    FUN_100c62ee0(0x10,0x68,100,"ecp_oct.c",0xe7);
    return 0;
  }
  iVar2 = FUN_100c26610(param_1 + 0x68);
  iVar2 = (int)(iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d)) >> 3;
  uVar8 = (ulong)iVar2;
  uVar4 = (uVar8 << (param_3 != 2)) + 1;
  if (param_4 == (char *)0x0) {
    return uVar4;
  }
  if (param_5 < uVar4) {
    FUN_100c62ee0(0x10,0x68,100,"ecp_oct.c",0xf8);
    return 0;
  }
  lVar5 = 0;
  if ((param_6 == 0) && (lVar5 = FUN_100c27a20(), param_6 = lVar5, lVar5 == 0)) {
    return 0;
  }
  FUN_100c27c60();
  uVar6 = FUN_100c27e20(param_6);
  puVar7 = (undefined8 *)FUN_100c27e20(param_6);
  if ((puVar7 == (undefined8 *)0x0) ||
     (iVar3 = FUN_100c375d0(param_1,param_2,uVar6,puVar7,param_6), iVar3 == 0)) goto LAB_100c44589;
  cVar1 = (char)param_3;
  if (((param_3 & 0xfffffffb) == 2) && (0 < *(int *)(puVar7 + 1))) {
    cVar1 = ((byte)*(undefined4 *)*puVar7 & 1) + cVar1;
  }
  *param_4 = cVar1;
  iVar3 = FUN_100c26610(uVar6);
  iVar3 = (int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3;
  if (uVar8 < uVar8 - (long)iVar3) {
    uVar6 = 0x116;
  }
  else {
    if (iVar2 == iVar3) {
      lVar10 = 1;
    }
    else {
      ___bzero(param_4 + 1);
      lVar10 = (uVar8 + 1) - (long)iVar3;
    }
    uVar9 = uVar8 + 1;
    iVar3 = FUN_100c26ff0(uVar6,param_4 + lVar10);
    if (iVar3 + lVar10 == uVar9) {
      if ((param_3 & 0xfffffffd) == 4) {
        iVar3 = FUN_100c26610(puVar7);
        iVar3 = (int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3;
        if (uVar8 < uVar8 - (long)iVar3) {
          uVar6 = 0x128;
          goto LAB_100c44580;
        }
        if (iVar2 != iVar3) {
          ___bzero(param_4 + uVar9);
          uVar9 = (uVar8 + uVar9) - (long)iVar3;
        }
        iVar2 = FUN_100c26ff0(puVar7,param_4 + uVar9);
        uVar9 = uVar9 + (long)iVar2;
      }
      if (uVar9 == uVar4) {
        FUN_100c27d40(param_6);
        if (lVar5 == 0) {
          return uVar4;
        }
        FUN_100c27ab0();
        return uVar4;
      }
      uVar6 = 0x134;
    }
    else {
      uVar6 = 0x120;
    }
  }
LAB_100c44580:
  FUN_100c62ee0(0x10,0x68,0x44,"ecp_oct.c",uVar6);
LAB_100c44589:
  FUN_100c27d40(param_6);
  if (lVar5 != 0) {
    FUN_100c27ab0();
  }
  return 0;
}

