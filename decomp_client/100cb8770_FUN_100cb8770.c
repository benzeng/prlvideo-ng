
undefined8 * FUN_100cb8770(undefined8 *param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  
  iVar2 = FUN_100c929e0(param_2,param_3);
  if (iVar2 == 0) {
    FUN_100c62ee0(0x2e,0x66,0x88,"cms_sd.c",0x11d);
    return (undefined8 *)0x0;
  }
  plVar4 = (long *)FUN_100cb84b0(param_1);
  if (plVar4 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar5 = (undefined8 *)FUN_100c7fb90(&DAT_102257b50);
  if (puVar5 == (undefined8 *)0x0) {
LAB_100cb8cc1:
    uVar6 = 0x41;
    uVar9 = 0x198;
LAB_100cb8cdd:
    FUN_100c62ee0(0x2e,0x66,uVar6,"cms_sd.c",uVar9);
  }
  else {
    FUN_100ca5120(param_2,0xffffffff,0xffffffff);
    FUN_100bf2cf0(param_3 + 8,1,10,"cms_sd.c",0x128);
    FUN_100bf2cf0(param_2 + 0x1c,1,3,"cms_sd.c",0x129);
    puVar5[8] = param_3;
    puVar5[7] = param_2;
    if ((param_5 & 0x10000) == 0) {
      *puVar5 = 1;
      uVar6 = 0;
    }
    else {
      *puVar5 = 3;
      if (*plVar4 < 3) {
        *plVar4 = 3;
        uVar6 = 1;
      }
      else {
        uVar6 = 1;
      }
    }
    iVar2 = FUN_100cb8570(puVar5[1],param_2,uVar6);
    if (iVar2 == 0) goto LAB_100cb8d0f;
    if (param_4 == 0) {
      iVar2 = FUN_100c6dab0(param_3,&local_3c);
      if (iVar2 < 1) goto LAB_100cb8d0f;
      uVar6 = FUN_100bf70a0(local_3c);
      param_4 = FUN_100c6bd60(uVar6);
      if (param_4 == 0) {
        FUN_100c62ee0(0x2e,0x66,0x80,"cms_sd.c",0x141);
        goto LAB_100cb8d0f;
      }
    }
    FUN_100cb76d0(puVar5[2],param_4);
    iVar3 = FUN_100c60800(plVar4[1]);
    iVar10 = 0;
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar10 = iVar2;
        uVar6 = FUN_100c60820(plVar4[1],iVar10);
        FUN_100c7af60(&local_48,0,0,uVar6);
        iVar2 = FUN_100bf7220(local_48);
        iVar3 = FUN_100c6fc30(param_4);
        if (iVar2 == iVar3) break;
        iVar10 = iVar10 + 1;
        iVar3 = FUN_100c60800(plVar4[1]);
        iVar2 = iVar10;
      } while (iVar10 < iVar3);
    }
    iVar2 = FUN_100c60800(plVar4[1]);
    if (iVar10 == iVar2) {
      lVar7 = FUN_100c7ae20();
      if (lVar7 != 0) {
        FUN_100cb76d0(lVar7,param_4);
        iVar2 = FUN_100c604e0(plVar4[1],lVar7);
        if (iVar2 != 0) goto LAB_100cb89b0;
        FUN_100c7ae40(lVar7);
      }
      goto LAB_100cb8cc1;
    }
LAB_100cb89b0:
    if ((*(long *)(param_3 + 0x10) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_3 + 0x10) + 0xa8), pcVar1 != (code *)0x0)) {
      iVar2 = (*pcVar1)(param_3,5,0,puVar5);
      if (iVar2 == -2) {
        uVar6 = 0x7d;
        uVar9 = 0x165;
      }
      else {
        if (0 < iVar2) goto LAB_100cb8a02;
        uVar6 = 0x6f;
        uVar9 = 0x169;
      }
      goto LAB_100cb8cdd;
    }
LAB_100cb8a02:
    if ((param_5 & 0x100) != 0) {
LAB_100cb8c79:
      if (((param_5 & 2) != 0) || (iVar2 = FUN_100cb7ab0(param_1,param_2), iVar2 != 0)) {
        lVar7 = plVar4[5];
        if (lVar7 == 0) {
          lVar7 = FUN_100c60010();
          plVar4[5] = lVar7;
          if (lVar7 == 0) goto LAB_100cb8cc1;
        }
        iVar2 = FUN_100c604e0(lVar7,puVar5);
        if (iVar2 != 0) {
          return puVar5;
        }
      }
      goto LAB_100cb8cc1;
    }
    if (puVar5[3] == 0) {
      lVar7 = FUN_100c60010();
      puVar5[3] = lVar7;
      if (lVar7 == 0) goto LAB_100cb8cc1;
    }
    if ((param_5 & 0x200) == 0) {
      local_50 = 0;
      iVar2 = FUN_100cb8d30(&local_50);
      uVar6 = local_50;
      if (iVar2 == 0) {
        FUN_100c60790(local_50,FUN_100c7ae40);
      }
      else {
        local_38 = 0;
        iVar2 = FUN_100c7ae80(local_50,&local_38);
        if (iVar2 < 1) {
          FUN_100c60790(uVar6,FUN_100c7ae40);
        }
        else {
          iVar2 = FUN_100cb8050(puVar5,0xa7,0x10,local_38,iVar2);
          FUN_100bf3910(local_38);
          FUN_100c60790(uVar6,FUN_100c7ae40);
          if (iVar2 != 0) goto LAB_100cb8ab4;
        }
      }
      goto LAB_100cb8cc1;
    }
LAB_100cb8ab4:
    if ((param_5 & 0x8000) == 0) goto LAB_100cb8c79;
    iVar2 = FUN_100bf7220(*param_1);
    if (iVar2 == 0x16) {
      uVar6 = 0;
      if (param_1[1] != 0) {
        uVar6 = *(undefined8 *)(param_1[1] + 0x28);
      }
    }
    else {
      FUN_100c62ee0(0x2e,0x85,0x6c,"cms_sd.c",0x47);
      uVar6 = 0;
    }
    iVar2 = FUN_100c60800(uVar6);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar8 = (undefined8 *)FUN_100c60820(uVar6,iVar2);
        if (((puVar8 != puVar5) && (iVar3 = FUN_100cb7fc0(puVar8), -1 < iVar3)) &&
           (iVar3 = FUN_100bf8810(*(undefined8 *)puVar5[2],*(undefined8 *)puVar8[2]), iVar3 == 0)) {
          uVar6 = FUN_100bf6fe0(0x33);
          lVar7 = FUN_100cb8090(puVar8,uVar6,0xfffffffd,4);
          if (lVar7 == 0) {
            FUN_100c62ee0(0x2e,0x6c,0x72,"cms_sd.c",0xb5);
            goto LAB_100cb8d0f;
          }
          iVar2 = FUN_100cb8050(puVar5,0x33,4,lVar7,0xffffffff);
          if ((iVar2 == 0) ||
             (((param_5 & 0x4000) == 0 && (iVar2 = FUN_100cb8f90(puVar5), iVar2 == 0))))
          goto LAB_100cb8d0f;
          goto LAB_100cb8c79;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100c60800(uVar6);
      } while (iVar2 < iVar3);
    }
    FUN_100c62ee0(0x2e,0x6c,0x83,"cms_sd.c",0xc0);
  }
  if (puVar5 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
LAB_100cb8d0f:
  FUN_100c801c0(puVar5,&DAT_102257b50);
  return (undefined8 *)0x0;
}

