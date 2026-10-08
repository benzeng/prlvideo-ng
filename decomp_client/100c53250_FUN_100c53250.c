
undefined4
FUN_100c53250(void *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong uVar13;
  ulong local_38;
  
  local_38 = param_2;
  if ((param_2 & 0xffffffff80000000) != 0) {
    FUN_100c62ee0(0x2b,100,0x41,"ech_ossl.c",0x7b);
    return 0xffffffff;
  }
  lVar2 = FUN_100c27a20();
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  FUN_100c27c60(lVar2);
  uVar3 = FUN_100c27e20(lVar2);
  uVar4 = FUN_100c27e20(lVar2);
  lVar5 = FUN_100c3fb20(param_4);
  if (lVar5 == 0) {
    uVar3 = 100;
    uVar4 = 0x88;
  }
  else {
    uVar6 = FUN_100c3fad0(param_4);
    lVar7 = FUN_100c368e0(uVar6);
    if (lVar7 != 0) {
      iVar1 = FUN_100c37990(uVar6,lVar7,0,param_3,lVar5,lVar2);
      if (iVar1 == 0) {
        uVar3 = 0x93;
LAB_100c53518:
        FUN_100c62ee0(0x2b,100,0x65,"ech_ossl.c",uVar3);
        pvVar9 = (void *)0x0;
        uVar11 = 0xffffffff;
        goto LAB_100c535c0;
      }
      uVar8 = FUN_100c36a70(uVar6);
      iVar1 = FUN_100c36a80(uVar8);
      if (iVar1 == 0x196) {
        iVar1 = FUN_100c375d0(uVar6,lVar7,uVar3,uVar4,lVar2);
        if (iVar1 == 0) {
          uVar3 = 0x9a;
          goto LAB_100c53518;
        }
      }
      else {
        iVar1 = FUN_100c37630(uVar6,lVar7,uVar3,uVar4,lVar2);
        if (iVar1 == 0) {
          uVar3 = 0xa1;
          goto LAB_100c53518;
        }
      }
      iVar1 = FUN_100c36e50(uVar6);
      uVar10 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
      iVar1 = FUN_100c26610(uVar3);
      uVar12 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar10 < uVar12) {
        uVar3 = 0x44;
        uVar4 = 0xaa;
LAB_100c53547:
        FUN_100c62ee0(0x2b,100,uVar3,"ech_ossl.c",uVar4);
        pvVar9 = (void *)0x0;
        uVar11 = 0xffffffff;
      }
      else {
        pvVar9 = (void *)FUN_100bf3540(uVar10,"ech_ossl.c",0xad);
        if (pvVar9 == (void *)0x0) {
          uVar3 = 0x41;
          uVar4 = 0xae;
          goto LAB_100c53547;
        }
        uVar13 = (ulong)(int)uVar10;
        ___bzero(pvVar9,uVar13 - (long)(int)uVar12);
        uVar10 = FUN_100c26ff0(uVar3,(uVar13 - (long)(int)uVar12) + (long)pvVar9);
        if (uVar12 == uVar10) {
          if (param_5 == (code *)0x0) {
            if (uVar13 < param_2) {
              param_2 = uVar13;
              local_38 = uVar13;
            }
            _memcpy(param_1,pvVar9,param_2);
            uVar11 = (undefined4)param_2;
          }
          else {
            lVar5 = (*param_5)(pvVar9,uVar13,param_1,&local_38);
            if (lVar5 == 0) {
              uVar3 = 0x66;
              uVar4 = 0xba;
              goto LAB_100c535b1;
            }
            uVar11 = (undefined4)local_38;
          }
        }
        else {
          uVar3 = 3;
          uVar4 = 0xb4;
LAB_100c535b1:
          FUN_100c62ee0(0x2b,100,uVar3,"ech_ossl.c",uVar4);
          uVar11 = 0xffffffff;
        }
      }
LAB_100c535c0:
      FUN_100c36280(lVar7);
      goto LAB_100c535c8;
    }
    uVar3 = 0x41;
    uVar4 = 0x8e;
  }
  FUN_100c62ee0(0x2b,100,uVar3,"ech_ossl.c",uVar4);
  uVar11 = 0xffffffff;
  pvVar9 = (void *)0x0;
LAB_100c535c8:
  FUN_100c27d40(lVar2);
  FUN_100c27ab0(lVar2);
  if (pvVar9 != (void *)0x0) {
    FUN_100bf3910(pvVar9);
  }
  return uVar11;
}

