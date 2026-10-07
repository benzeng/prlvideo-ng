
undefined8 * FUN_1008dbf30(undefined8 *param_1,long param_2,long param_3,long param_4,ulong param_5)

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
  
  iVar2 = FUN_1008b7460(param_2,param_3);
  if (iVar2 == 0) {
    FUN_100887ce0(0x2e,0x66,0x88,"cms_sd.c",0x11d);
    return (undefined8 *)0x0;
  }
  plVar4 = (long *)FUN_1008dbc70(param_1);
  if (plVar4 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar5 = (undefined8 *)FUN_1008a4610(&DAT_100be7540);
  if (puVar5 == (undefined8 *)0x0) {
LAB_1008dc481:
    uVar6 = 0x41;
    uVar9 = 0x198;
LAB_1008dc49d:
    FUN_100887ce0(0x2e,0x66,uVar6,"cms_sd.c",uVar9);
  }
  else {
    FUN_1008c9ba0(param_2,0xffffffff,0xffffffff);
    FUN_10081d580(param_3 + 8,1,10,"cms_sd.c",0x128);
    FUN_10081d580(param_2 + 0x1c,1,3,"cms_sd.c",0x129);
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
    iVar2 = FUN_1008dbd30(puVar5[1],param_2,uVar6);
    if (iVar2 == 0) goto LAB_1008dc4cf;
    if (param_4 == 0) {
      iVar2 = FUN_1008926d0(param_3,&local_3c);
      if (iVar2 < 1) goto LAB_1008dc4cf;
      uVar6 = FUN_100821930(local_3c);
      param_4 = FUN_100890b60(uVar6);
      if (param_4 == 0) {
        FUN_100887ce0(0x2e,0x66,0x80,"cms_sd.c",0x141);
        goto LAB_1008dc4cf;
      }
    }
    FUN_1008dae90(puVar5[2],param_4);
    iVar3 = FUN_100885600(plVar4[1]);
    iVar10 = 0;
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar10 = iVar2;
        uVar6 = FUN_100885620(plVar4[1],iVar10);
        FUN_10089f9e0(&local_48,0,0,uVar6);
        iVar2 = FUN_100821ab0(local_48);
        iVar3 = FUN_1008946b0(param_4);
        if (iVar2 == iVar3) break;
        iVar10 = iVar10 + 1;
        iVar3 = FUN_100885600(plVar4[1]);
        iVar2 = iVar10;
      } while (iVar10 < iVar3);
    }
    iVar2 = FUN_100885600(plVar4[1]);
    if (iVar10 == iVar2) {
      lVar7 = FUN_10089f8a0();
      if (lVar7 != 0) {
        FUN_1008dae90(lVar7,param_4);
        iVar2 = FUN_1008852e0(plVar4[1],lVar7);
        if (iVar2 != 0) goto LAB_1008dc170;
        FUN_10089f8c0(lVar7);
      }
      goto LAB_1008dc481;
    }
LAB_1008dc170:
    if ((*(long *)(param_3 + 0x10) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_3 + 0x10) + 0xa8), pcVar1 != (code *)0x0)) {
      iVar2 = (*pcVar1)(param_3,5,0,puVar5);
      if (iVar2 == -2) {
        uVar6 = 0x7d;
        uVar9 = 0x165;
      }
      else {
        if (0 < iVar2) goto LAB_1008dc1c2;
        uVar6 = 0x6f;
        uVar9 = 0x169;
      }
      goto LAB_1008dc49d;
    }
LAB_1008dc1c2:
    if ((param_5 & 0x100) != 0) {
LAB_1008dc439:
      if (((param_5 & 2) != 0) || (iVar2 = FUN_1008db270(param_1,param_2), iVar2 != 0)) {
        lVar7 = plVar4[5];
        if (lVar7 == 0) {
          lVar7 = FUN_100884e10();
          plVar4[5] = lVar7;
          if (lVar7 == 0) goto LAB_1008dc481;
        }
        iVar2 = FUN_1008852e0(lVar7,puVar5);
        if (iVar2 != 0) {
          return puVar5;
        }
      }
      goto LAB_1008dc481;
    }
    if (puVar5[3] == 0) {
      lVar7 = FUN_100884e10();
      puVar5[3] = lVar7;
      if (lVar7 == 0) goto LAB_1008dc481;
    }
    if ((param_5 & 0x200) == 0) {
      local_50 = 0;
      iVar2 = FUN_1008dc4f0(&local_50);
      uVar6 = local_50;
      if (iVar2 == 0) {
        FUN_100885590(local_50,FUN_10089f8c0);
      }
      else {
        local_38 = 0;
        iVar2 = FUN_10089f900(local_50,&local_38);
        if (iVar2 < 1) {
          FUN_100885590(uVar6,FUN_10089f8c0);
        }
        else {
          iVar2 = FUN_1008db810(puVar5,0xa7,0x10,local_38,iVar2);
          FUN_10081e1a0(local_38);
          FUN_100885590(uVar6,FUN_10089f8c0);
          if (iVar2 != 0) goto LAB_1008dc274;
        }
      }
      goto LAB_1008dc481;
    }
LAB_1008dc274:
    if ((param_5 & 0x8000) == 0) goto LAB_1008dc439;
    iVar2 = FUN_100821ab0(*param_1);
    if (iVar2 == 0x16) {
      uVar6 = 0;
      if (param_1[1] != 0) {
        uVar6 = *(undefined8 *)(param_1[1] + 0x28);
      }
    }
    else {
      FUN_100887ce0(0x2e,0x85,0x6c,"cms_sd.c",0x47);
      uVar6 = 0;
    }
    iVar2 = FUN_100885600(uVar6);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar8 = (undefined8 *)FUN_100885620(uVar6,iVar2);
        if (((puVar8 != puVar5) && (iVar3 = FUN_1008db780(puVar8), -1 < iVar3)) &&
           (iVar3 = FUN_1008230a0(*(undefined8 *)puVar5[2],*(undefined8 *)puVar8[2]), iVar3 == 0)) {
          uVar6 = FUN_100821870(0x33);
          lVar7 = FUN_1008db850(puVar8,uVar6,0xfffffffd,4);
          if (lVar7 == 0) {
            FUN_100887ce0(0x2e,0x6c,0x72,"cms_sd.c",0xb5);
            goto LAB_1008dc4cf;
          }
          iVar2 = FUN_1008db810(puVar5,0x33,4,lVar7,0xffffffff);
          if ((iVar2 == 0) ||
             (((param_5 & 0x4000) == 0 && (iVar2 = FUN_1008dc750(puVar5), iVar2 == 0))))
          goto LAB_1008dc4cf;
          goto LAB_1008dc439;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100885600(uVar6);
      } while (iVar2 < iVar3);
    }
    FUN_100887ce0(0x2e,0x6c,0x83,"cms_sd.c",0xc0);
  }
  if (puVar5 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
LAB_1008dc4cf:
  FUN_1008a4c40(puVar5,&DAT_100be7540);
  return (undefined8 *)0x0;
}

