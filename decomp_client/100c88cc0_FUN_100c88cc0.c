
uint * FUN_100c88cc0(undefined8 param_1,long param_2,int param_3,undefined4 *param_4)

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
  iVar1 = FUN_100cacb70(param_1,0x2c,1,FUN_100c89700,&local_250);
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
    lVar3 = FUN_100c60010();
    puVar14 = (uint *)0x0;
    lVar5 = 0;
    if (lVar3 == 0) {
LAB_100c89123:
      if (local_48[0] != 0) {
        FUN_100bf3910();
      }
    }
    else {
      lVar4 = 0;
      if (local_240[0] != (char *)0x0) {
        lVar4 = FUN_100c9d950(param_2,local_240[0]);
        puVar14 = (uint *)0x0;
        lVar5 = 0;
        if (lVar4 == 0) goto LAB_100c89123;
        iVar2 = FUN_100c60800(lVar4);
        if (0 < iVar2) {
          iVar2 = 0;
          do {
            lVar5 = FUN_100c60820(lVar4,iVar2);
            lVar5 = FUN_100c88cc0(*(undefined8 *)(lVar5 + 0x10),param_2,param_3 + 1,param_4);
            if ((lVar5 == 0) || (iVar1 = FUN_100c604e0(lVar3,lVar5), iVar1 == 0)) {
              puVar14 = (uint *)0x0;
              lVar5 = lVar4;
              goto LAB_100c89123;
            }
            iVar2 = iVar2 + 1;
            iVar1 = FUN_100c60800(lVar4);
          } while (iVar2 < iVar1);
        }
      }
      if (local_248 == 0x11) {
        iVar2 = FUN_100c84120(lVar3);
      }
      else {
        iVar2 = FUN_100c840e0(lVar3,local_48);
      }
      puVar14 = (uint *)0x0;
      lVar5 = lVar4;
      if (iVar2 < 0) goto LAB_100c89123;
      puVar14 = (uint *)FUN_100c83f00();
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)0x0;
        goto LAB_100c89123;
      }
      lVar4 = FUN_100c8b370(uVar7);
      *(long *)(puVar14 + 2) = lVar4;
      if (lVar4 == 0) goto LAB_100c89123;
      *puVar14 = local_248;
      *(long *)(lVar4 + 8) = local_48[0];
      **(int **)(puVar14 + 2) = iVar2;
      local_48[0] = 0;
    }
    if (lVar3 != 0) {
      FUN_100c60790(lVar3,FUN_100c83f20);
    }
    if (lVar5 != 0) {
      FUN_100c9d9c0(param_2,lVar5);
    }
  }
  else {
    puVar14 = (uint *)FUN_100c83f00();
    if (puVar14 == (uint *)0x0) {
      FUN_100c62ee0(0xd,0xb3,0x41,"asn1_gen.c",0x289);
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
          iVar2 = FUN_100c9f430(local_48,puVar14 + 2);
          if (iVar2 != 0) goto LAB_100c89396;
          uVar7 = 0xb0;
          uVar13 = 0x2a2;
          break;
        }
        FUN_100c62ee0(0xd,0xb3,0xbe,"asn1_gen.c",0x29b);
        goto LAB_100c88e9f;
      case 2:
      case 10:
        if (iVar2 != 1) {
          FUN_100c62ee0(0xd,0xb3,0xb9,"asn1_gen.c",0x2aa);
          goto LAB_100c88e9f;
        }
        lVar5 = FUN_100c9f240(0,pcVar12);
        *(long *)(puVar14 + 2) = lVar5;
        if (lVar5 != 0) goto LAB_100c89396;
        uVar7 = 0xb4;
        uVar13 = 0x2ae;
        break;
      case 3:
      case 4:
        lVar5 = FUN_100c8b280();
        *(long *)(puVar14 + 2) = lVar5;
        if (lVar5 == 0) {
          FUN_100c62ee0(0xd,0xb3,0x41,"asn1_gen.c",0x2f4);
          goto LAB_100c88e9f;
        }
        if (iVar2 == 1) {
          FUN_100c8b0b0(lVar5,pcVar12,0xffffffff);
LAB_100c892ce:
          if (local_248 == 3) {
            *(ulong *)(*(long *)(puVar14 + 2) + 0x10) =
                 *(ulong *)(*(long *)(puVar14 + 2) + 0x10) & 0xfffffffffffffff0 | 8;
          }
          goto LAB_100c89396;
        }
        if (iVar2 == 3) {
          lVar5 = FUN_100c9fc70(pcVar12,local_50);
          if (lVar5 != 0) {
            *(long *)(*(long *)(puVar14 + 2) + 8) = lVar5;
            puVar9 = *(undefined4 **)(puVar14 + 2);
            *puVar9 = local_50[0];
            puVar9[1] = local_248;
            goto LAB_100c892ce;
          }
          uVar7 = 0xb2;
          uVar13 = 0x2fb;
        }
        else {
          if ((local_248 != 3) || (iVar2 != 4)) {
            FUN_100c62ee0(0xd,0xb3,0xaf,"asn1_gen.c",0x30f);
            goto LAB_100c88e9f;
          }
          iVar2 = FUN_100cacb70(pcVar12,0x2c,1,FUN_100c89db0,lVar5);
          if (iVar2 != 0) goto LAB_100c89396;
          uVar7 = 0xbc;
          uVar13 = 0x309;
        }
        break;
      case 5:
        if (*pcVar12 != '\0') {
          FUN_100c62ee0(0xd,0xb3,0xb6,"asn1_gen.c",0x294);
          goto LAB_100c88e9f;
        }
LAB_100c89396:
        *puVar14 = local_248;
        goto LAB_100c8939a;
      case 6:
        if (iVar2 != 1) {
          FUN_100c62ee0(0xd,0xb3,0xbf,"asn1_gen.c",0x2b5);
          goto LAB_100c88e9f;
        }
        lVar5 = FUN_100bf7360(pcVar12,0);
        *(long *)(puVar14 + 2) = lVar5;
        if (lVar5 != 0) goto LAB_100c89396;
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
            FUN_100c62ee0(0xd,0xb3,0xb1,"asn1_gen.c",0x2e3);
            goto LAB_100c88e9f;
          }
          uVar7 = 0x1000;
        }
        uVar13 = FUN_100c81470(local_248);
        iVar2 = FUN_100c79500(puVar14 + 2,pcVar12,0xffffffff,uVar7,uVar13);
        if (0 < iVar2) goto LAB_100c89396;
        uVar7 = 0x41;
        uVar13 = 0x2e9;
        break;
      case 0x17:
      case 0x18:
        if (iVar2 != 1) {
          FUN_100c62ee0(0xd,0xb3,0xc1,"asn1_gen.c",0x2c1);
          goto LAB_100c88e9f;
        }
        lVar5 = FUN_100c8b280();
        *(long *)(puVar14 + 2) = lVar5;
        if (lVar5 == 0) {
          uVar7 = 0x41;
          uVar13 = 0x2c5;
        }
        else {
          iVar2 = FUN_100c8b0b0(lVar5,pcVar12,0xffffffff);
          if (iVar2 == 0) {
            uVar7 = 0x41;
            uVar13 = 0x2c9;
          }
          else {
            *(uint *)(*(long *)(puVar14 + 2) + 4) = local_248;
            iVar2 = FUN_100c75e50();
            if (iVar2 != 0) goto LAB_100c89396;
            uVar7 = 0xb8;
            uVar13 = 0x2ce;
          }
        }
      }
      FUN_100c62ee0(0xd,0xb3,uVar7,"asn1_gen.c",uVar13);
      FUN_100c642a0(2,"string=",pcVar12);
LAB_100c88e9f:
      FUN_100c83f20(puVar14);
    }
    puVar14 = (uint *)0x0;
  }
LAB_100c8939a:
  if (puVar14 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if ((local_250 == 0xffffffff) && (local_58 == 0)) {
    return puVar14;
  }
  iVar2 = FUN_100c83ee0(puVar14,&local_258);
  FUN_100c83f20(puVar14);
  local_260 = local_258;
  if (local_250 == 0xffffffff) {
    local_290 = 0;
    iVar1 = iVar2;
  }
  else {
    local_290 = FUN_100c8abb0(&local_260,&local_278,local_27c,local_280,(long)iVar2);
    puVar14 = (uint *)0x0;
    puVar15 = (undefined1 *)0x0;
    if ((local_290 & 0x80) != 0) goto LAB_100c895d5;
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
    iVar2 = FUN_100c8aea0(0,uVar11,local_250);
  }
  if (0 < (long)local_58) {
    ppcVar8 = local_240 + (long)local_58 * 3;
    iVar16 = 0;
    do {
      pcVar12 = (char *)((long)iVar2 + (long)*(int *)((long)ppcVar8 + -4));
      *ppcVar8 = pcVar12;
      iVar2 = FUN_100c8aea0(0,pcVar12,*(undefined4 *)(ppcVar8 + -2));
      iVar16 = iVar16 + 1;
      ppcVar8 = ppcVar8 + -3;
    } while (iVar16 < local_58);
  }
  puVar6 = (undefined1 *)FUN_100bf3540(iVar2,"asn1_gen.c",0xf5);
  puVar14 = (uint *)0x0;
  puVar15 = (undefined1 *)0x0;
  if (puVar6 != (undefined1 *)0x0) {
    local_268 = puVar6;
    if (0 < local_58) {
      puVar9 = local_228;
      iVar16 = 0;
      do {
        FUN_100c8ad50(&local_268,puVar9[-2],*puVar9,puVar9[-4],puVar9[-3]);
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
      FUN_100c8ad50(&local_268,uVar10,local_278 & 0xffffffff);
    }
    _memcpy(local_268,local_260,(long)iVar1);
    local_270 = puVar6;
    puVar14 = (uint *)FUN_100c83ec0(0,&local_270,(long)iVar2);
    puVar15 = puVar6;
  }
LAB_100c895d5:
  if (local_258 != (void *)0x0) {
    FUN_100bf3910();
  }
  if (puVar15 != (undefined1 *)0x0) {
    FUN_100bf3910(puVar15);
  }
  return puVar14;
}

