
uint * FUN_1008ad740(undefined8 param_1,long param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  char **ppcVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  uint local_290;
  undefined1 local_280 [4];
  undefined1 local_27c [4];
  ulong local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  void *local_260;
  void *local_258;
  uint local_250;
  int iStack_24c;
  uint local_248;
  int iStack_244;
  char *local_240 [3];
  undefined4 local_228 [116];
  int local_58;
  undefined4 local_50 [2];
  long local_48 [2];
  char *local_38;
  
  local_258 = (void *)0x0;
  local_250 = 0xffffffff;
  iStack_24c = -1;
  iStack_244 = 1;
  local_58 = 0;
  iVar1 = FUN_1008d15f0(param_1,0x2c,1,FUN_1008ae180,&local_250);
  iVar2 = iStack_244;
  if (iVar1 != 0) {
    *param_4 = 0xc2;
    return (uint *)0x0;
  }
  uVar7 = CONCAT44(iStack_244,local_248);
  if ((local_248 & 0xfffffffe) == 0x10) {
    if (param_2 == 0) {
      *param_4 = 0xc0;
      return (uint *)0x0;
    }
    if (0x31 < param_3) {
      *param_4 = 0xb5;
      return (uint *)0x0;
    }
    local_48[0] = 0;
    lVar3 = FUN_100884e10();
    puVar14 = (uint *)0x0;
    lVar5 = 0;
    if (lVar3 == 0) {
LAB_1008adba3:
      if (local_48[0] != 0) {
        FUN_10081e1a0();
      }
    }
    else {
      lVar4 = 0;
      if (local_240[0] != (char *)0x0) {
        lVar4 = FUN_1008c23d0(param_2,local_240[0]);
        puVar14 = (uint *)0x0;
        lVar5 = 0;
        if (lVar4 == 0) goto LAB_1008adba3;
        iVar2 = FUN_100885600(lVar4);
        if (0 < iVar2) {
          iVar2 = 0;
          do {
            lVar5 = FUN_100885620(lVar4,iVar2);
            lVar5 = FUN_1008ad740(*(undefined8 *)(lVar5 + 0x10),param_2,param_3 + 1,param_4);
            if ((lVar5 == 0) || (iVar1 = FUN_1008852e0(lVar3,lVar5), iVar1 == 0)) {
              puVar14 = (uint *)0x0;
              lVar5 = lVar4;
              goto LAB_1008adba3;
            }
            iVar2 = iVar2 + 1;
            iVar1 = FUN_100885600(lVar4);
          } while (iVar2 < iVar1);
        }
      }
      if (local_248 == 0x11) {
        iVar2 = FUN_1008a8ba0(lVar3);
      }
      else {
        iVar2 = FUN_1008a8b60(lVar3,local_48);
      }
      puVar14 = (uint *)0x0;
      lVar5 = lVar4;
      if (iVar2 < 0) goto LAB_1008adba3;
      puVar14 = (uint *)FUN_1008a8980();
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)0x0;
        goto LAB_1008adba3;
      }
      lVar4 = FUN_1008afdf0(uVar7);
      *(long *)(puVar14 + 2) = lVar4;
      if (lVar4 == 0) goto LAB_1008adba3;
      *puVar14 = local_248;
      *(long *)(lVar4 + 8) = local_48[0];
      **(int **)(puVar14 + 2) = iVar2;
      local_48[0] = 0;
    }
    if (lVar3 != 0) {
      FUN_100885590(lVar3,FUN_1008a89a0);
    }
    if (lVar5 != 0) {
      FUN_1008c2440(param_2,lVar5);
    }
  }
  else {
    puVar14 = (uint *)FUN_1008a8980();
    if (puVar14 == (uint *)0x0) {
      FUN_100887ce0(0xd,0xb3,0x41,"asn1_gen.c",0x289);
    }
    else {
      pcVar12 = "";
      if (local_240[0] != (char *)0x0) {
        pcVar12 = local_240[0];
      }
      switch(local_248) {
      case 1:
        if (iVar2 == 1) {
          local_48[0] = 0;
          local_48[1] = 0;
          local_38 = pcVar12;
          iVar2 = FUN_1008c3eb0(local_48,puVar14 + 2);
          if (iVar2 != 0) goto LAB_1008ade16;
          uVar7 = 0xb0;
          uVar13 = 0x2a2;
          break;
        }
        FUN_100887ce0(0xd,0xb3,0xbe,"asn1_gen.c",0x29b);
        goto LAB_1008ad91f;
      case 2:
      case 10:
        if (iVar2 != 1) {
          FUN_100887ce0(0xd,0xb3,0xb9,"asn1_gen.c",0x2aa);
          goto LAB_1008ad91f;
        }
        lVar5 = FUN_1008c3cc0(0,pcVar12);
        *(long *)(puVar14 + 2) = lVar5;
        if (lVar5 != 0) goto LAB_1008ade16;
        uVar7 = 0xb4;
        uVar13 = 0x2ae;
        break;
      case 3:
      case 4:
        lVar5 = FUN_1008afd00();
        *(long *)(puVar14 + 2) = lVar5;
        if (lVar5 == 0) {
          FUN_100887ce0(0xd,0xb3,0x41,"asn1_gen.c",0x2f4);
          goto LAB_1008ad91f;
        }
        if (iVar2 == 1) {
          FUN_1008afb30(lVar5,pcVar12,0xffffffff);
LAB_1008add4e:
          if (local_248 == 3) {
            *(ulong *)(*(long *)(puVar14 + 2) + 0x10) =
                 *(ulong *)(*(long *)(puVar14 + 2) + 0x10) & 0xfffffffffffffff0 | 8;
          }
          goto LAB_1008ade16;
        }
        if (iVar2 == 3) {
          lVar5 = FUN_1008c46f0(pcVar12,local_50);
          if (lVar5 != 0) {
            *(long *)(*(long *)(puVar14 + 2) + 8) = lVar5;
            puVar9 = *(undefined4 **)(puVar14 + 2);
            *puVar9 = local_50[0];
            puVar9[1] = local_248;
            goto LAB_1008add4e;
          }
          uVar7 = 0xb2;
          uVar13 = 0x2fb;
        }
        else {
          if ((local_248 != 3) || (iVar2 != 4)) {
            FUN_100887ce0(0xd,0xb3,0xaf,"asn1_gen.c",0x30f);
            goto LAB_1008ad91f;
          }
          iVar2 = FUN_1008d15f0(pcVar12,0x2c,1,FUN_1008ae830,lVar5);
          if (iVar2 != 0) goto LAB_1008ade16;
          uVar7 = 0xbc;
          uVar13 = 0x309;
        }
        break;
      case 5:
        if (*pcVar12 != '\0') {
          FUN_100887ce0(0xd,0xb3,0xb6,"asn1_gen.c",0x294);
          goto LAB_1008ad91f;
        }
LAB_1008ade16:
        *puVar14 = local_248;
        goto LAB_1008ade1a;
      case 6:
        if (iVar2 != 1) {
          FUN_100887ce0(0xd,0xb3,0xbf,"asn1_gen.c",0x2b5);
          goto LAB_1008ad91f;
        }
        lVar5 = FUN_100821bf0(pcVar12,0);
        *(long *)(puVar14 + 2) = lVar5;
        if (lVar5 != 0) goto LAB_1008ade16;
        uVar7 = 0xb7;
        uVar13 = 0x2b9;
        break;
      default:
        uVar7 = 0xc4;
        uVar13 = 0x31c;
        break;
      case 0xc:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x16:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1e:
        uVar7 = 0x1001;
        if (iVar2 != 1) {
          if (iVar2 != 2) {
            FUN_100887ce0(0xd,0xb3,0xb1,"asn1_gen.c",0x2e3);
            goto LAB_1008ad91f;
          }
          uVar7 = 0x1000;
        }
        uVar13 = FUN_1008a5ef0(local_248);
        iVar2 = FUN_10089df80(puVar14 + 2,pcVar12,0xffffffff,uVar7,uVar13);
        if (0 < iVar2) goto LAB_1008ade16;
        uVar7 = 0x41;
        uVar13 = 0x2e9;
        break;
      case 0x17:
      case 0x18:
        if (iVar2 != 1) {
          FUN_100887ce0(0xd,0xb3,0xc1,"asn1_gen.c",0x2c1);
          goto LAB_1008ad91f;
        }
        lVar5 = FUN_1008afd00();
        *(long *)(puVar14 + 2) = lVar5;
        if (lVar5 == 0) {
          uVar7 = 0x41;
          uVar13 = 0x2c5;
        }
        else {
          iVar2 = FUN_1008afb30(lVar5,pcVar12,0xffffffff);
          if (iVar2 == 0) {
            uVar7 = 0x41;
            uVar13 = 0x2c9;
          }
          else {
            *(uint *)(*(long *)(puVar14 + 2) + 4) = local_248;
            iVar2 = FUN_10089a8d0();
            if (iVar2 != 0) goto LAB_1008ade16;
            uVar7 = 0xb8;
            uVar13 = 0x2ce;
          }
        }
      }
      FUN_100887ce0(0xd,0xb3,uVar7,"asn1_gen.c",uVar13);
      FUN_1008890a0(2,"string=",pcVar12);
LAB_1008ad91f:
      FUN_1008a89a0(puVar14);
    }
    puVar14 = (uint *)0x0;
  }
LAB_1008ade1a:
  if (puVar14 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if ((local_250 == 0xffffffff) && (local_58 == 0)) {
    return puVar14;
  }
  iVar2 = FUN_1008a8960(puVar14,&local_258);
  FUN_1008a89a0(puVar14);
  local_260 = local_258;
  if (local_250 == 0xffffffff) {
    local_290 = 0;
    iVar1 = iVar2;
  }
  else {
    local_290 = FUN_1008af630(&local_260,&local_278,local_27c,local_280,(long)iVar2);
    puVar14 = (uint *)0x0;
    puVar15 = (undefined1 *)0x0;
    if ((local_290 & 0x80) != 0) goto LAB_1008ae055;
    iVar1 = (iVar2 - (int)local_260) + (int)local_258;
    if ((local_290 & 1) == 0) {
      local_290 = local_290 & 0x20;
      uVar11 = local_278 & 0xffffffff;
    }
    else {
      local_278 = 0;
      local_290 = 2;
      uVar11 = 0;
    }
    iVar2 = FUN_1008af920(0,uVar11,local_250);
  }
  if (0 < (long)local_58) {
    ppcVar8 = local_240 + (long)local_58 * 3;
    iVar16 = 0;
    do {
      pcVar12 = (char *)((long)iVar2 + (long)*(int *)((long)ppcVar8 + -4));
      *ppcVar8 = pcVar12;
      iVar2 = FUN_1008af920(0,pcVar12,*(undefined4 *)(ppcVar8 + -2));
      iVar16 = iVar16 + 1;
      ppcVar8 = ppcVar8 + -3;
    } while (iVar16 < local_58);
  }
  puVar6 = (undefined1 *)FUN_10081ddd0(iVar2,"asn1_gen.c",0xf5);
  puVar14 = (uint *)0x0;
  puVar15 = (undefined1 *)0x0;
  if (puVar6 != (undefined1 *)0x0) {
    local_268 = puVar6;
    if (0 < local_58) {
      puVar9 = local_228;
      iVar16 = 0;
      do {
        FUN_1008af7d0(&local_268,puVar9[-2],*puVar9,puVar9[-4],puVar9[-3]);
        if (puVar9[-1] != 0) {
          *local_268 = 0;
          local_268 = local_268 + 1;
        }
        iVar16 = iVar16 + 1;
        puVar9 = puVar9 + 6;
      } while (iVar16 < local_58);
    }
    if (local_250 != 0xffffffff) {
      uVar10 = 0x20;
      if (iStack_24c != 0) {
        uVar10 = local_290;
      }
      if ((local_250 & 0xfffffffe) != 0x10) {
        uVar10 = local_290;
      }
      FUN_1008af7d0(&local_268,uVar10,local_278 & 0xffffffff);
    }
    _memcpy(local_268,local_260,(long)iVar1);
    local_270 = puVar6;
    puVar14 = (uint *)FUN_1008a8940(0,&local_270,(long)iVar2);
    puVar15 = puVar6;
  }
LAB_1008ae055:
  if (local_258 != (void *)0x0) {
    FUN_10081e1a0();
  }
  if (puVar15 != (undefined1 *)0x0) {
    FUN_10081e1a0(puVar15);
  }
  return puVar14;
}

