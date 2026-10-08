
undefined8 FUN_100bebe20(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char *pcVar1;
  ulong uVar2;
  bool bVar3;
  byte *pbVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  byte *pbVar13;
  ulong local_98;
  long local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined8 local_58;
  
  local_58 = 1;
LAB_100bebe63:
  do {
    bVar6 = *param_1;
    iVar8 = 1;
    if ((char)bVar6 < ' ') {
      if (bVar6 == 0) {
        return local_58;
      }
    }
    else if ((char)bVar6 < ':') {
      if ((char)bVar6 < '!') {
LAB_100bebe60:
        param_1 = param_1 + 1;
        goto LAB_100bebe63;
      }
      if ((char)bVar6 < ',') {
        if (bVar6 == 0x21) {
          param_1 = param_1 + 1;
          iVar8 = 2;
        }
        else if (bVar6 == 0x2b) {
          param_1 = param_1 + 1;
          iVar8 = 4;
        }
      }
      else {
        if (bVar6 == 0x2c) goto LAB_100bebe60;
        if (bVar6 == 0x2d) {
          param_1 = param_1 + 1;
          iVar8 = 3;
        }
      }
    }
    else {
      if ((byte)(bVar6 - 0x3a) < 2) goto LAB_100bebe60;
      if (bVar6 == 0x40) {
        param_1 = param_1 + 1;
        iVar8 = 5;
      }
    }
    local_60 = 0;
    local_78 = 0;
    local_80 = 0;
    local_98 = 0;
    local_68 = 0;
    local_70 = 0;
    do {
      pbVar13 = param_1;
      local_88 = 0;
      while( true ) {
        bVar6 = pbVar13[local_88];
        if ((((0x19 < (byte)(bVar6 + 0xbf)) && (9 < (byte)(bVar6 - 0x30))) &&
            (0x19 < (byte)(bVar6 + 0x9f))) && (1 < (byte)(bVar6 - 0x2d))) break;
        local_88 = local_88 + 1;
      }
      param_1 = pbVar13 + local_88;
      iVar10 = (int)local_88;
      if (iVar10 == 0) {
        FUN_100c62ee0(0x14,0xe6,0x118,"ssl_ciph.c",0x4ac);
        param_1 = param_1 + 1;
        local_88 = 0;
        bVar3 = false;
        local_58 = 0;
        break;
      }
      if (iVar8 == 5) goto LAB_100bec1a5;
      pbVar4 = param_1 + 1;
      if (bVar6 != 0x2b) {
        pbVar4 = param_1;
      }
      param_1 = pbVar4;
      piVar12 = (int *)*param_4;
      if (piVar12 == (int *)0x0) goto LAB_100bec253;
      puVar11 = param_4;
      while( true ) {
        puVar11 = puVar11 + 1;
        pcVar1 = *(char **)(piVar12 + 2);
        iVar7 = _strncmp((char *)pbVar13,pcVar1,(long)iVar10);
        if ((iVar7 == 0) && (pcVar1[iVar10] == '\0')) break;
        piVar12 = (int *)*puVar11;
        bVar3 = false;
        if (piVar12 == (int *)0x0) goto LAB_100bec198;
      }
      uVar2 = *(ulong *)(piVar12 + 6);
      uVar9 = local_70;
      if ((uVar2 != 0) && (uVar9 = uVar2, local_70 != 0)) {
        bVar3 = false;
        uVar9 = local_70 & uVar2;
        if ((local_70 & uVar2) == 0) {
          local_70 = 0;
          break;
        }
      }
      local_70 = uVar9;
      uVar2 = *(ulong *)(piVar12 + 8);
      uVar9 = local_60;
      if ((uVar2 != 0) && (uVar9 = uVar2, local_60 != 0)) {
        bVar3 = false;
        uVar9 = local_60 & uVar2;
        if ((local_60 & uVar2) == 0) {
          local_60 = 0;
          break;
        }
      }
      uVar2 = *(ulong *)(piVar12 + 10);
      uVar5 = local_78;
      local_60 = uVar9;
      if ((uVar2 != 0) && (uVar5 = uVar2, local_78 != 0)) {
        bVar3 = false;
        uVar5 = local_78 & uVar2;
        if ((local_78 & uVar2) == 0) {
          local_78 = 0;
          break;
        }
      }
      local_78 = uVar5;
      uVar2 = *(ulong *)(piVar12 + 0xc);
      uVar9 = local_80;
      if ((uVar2 != 0) && (uVar9 = uVar2, local_80 != 0)) {
        bVar3 = false;
        uVar9 = local_80 & uVar2;
        if ((local_80 & uVar2) == 0) {
          local_80 = 0;
          break;
        }
      }
      local_80 = uVar9;
      uVar2 = *(ulong *)(piVar12 + 0x10);
      if ((uVar2 & 3) != 0) {
        if ((local_68 & 3) == 0) {
          local_68 = uVar2 & 3 | local_68;
        }
        else {
          local_68 = (uVar2 | 0xfffffffffffffffc) & local_68;
          bVar3 = false;
          if ((local_68 & 3) == 0) break;
        }
      }
      if ((uVar2 & 0x1fc) != 0) {
        if ((local_68 & 0x1fc) == 0) {
          local_68 = uVar2 & 0x1fc | local_68;
        }
        else {
          local_68 = (uVar2 | 0xfffffffffffffe03) & local_68;
          bVar3 = false;
          if ((local_68 & 0x1fc) == 0) break;
        }
      }
      uVar2 = local_98;
      if (((*piVar12 == 0) && (uVar9 = *(ulong *)(piVar12 + 0xe), uVar9 != 0)) &&
         (uVar2 = uVar9, local_98 != 0)) {
        bVar3 = false;
        uVar2 = local_98 & uVar9;
        if ((local_98 & uVar9) == 0) {
          local_98 = 0;
          break;
        }
      }
      local_98 = uVar2;
      bVar3 = true;
    } while (bVar6 == 0x2b);
LAB_100bec198:
    if (iVar8 == 5) {
LAB_100bec1a5:
      if (((int)local_88 == 8) && (iVar8 = _strncmp((char *)pbVar13,"STRENGTH",8), iVar8 == 0)) {
        iVar8 = FUN_100bebc80(param_2);
      }
      else {
        FUN_100c62ee0(0x14,0xe6,0x118,"ssl_ciph.c",0x544);
        iVar8 = 0;
      }
      if (iVar8 == 0) {
        local_58 = 0;
      }
      while( true ) {
        bVar6 = *param_1;
        if (((ulong)bVar6 < 0x3c) && ((0xc00100100000001U >> ((ulong)bVar6 & 0x3f) & 1) != 0))
        break;
        param_1 = param_1 + 1;
      }
    }
    else if (bVar3) {
      FUN_100beb970(local_70,local_60,local_78,local_80,local_98,local_68,iVar8,0xffffffff,param_2,
                    param_3);
      bVar6 = *param_1;
    }
    else {
LAB_100bec253:
      while( true ) {
        bVar6 = *param_1;
        if (((ulong)bVar6 < 0x3c) && ((0xc00100100000001U >> ((ulong)bVar6 & 0x3f) & 1) != 0))
        break;
        param_1 = param_1 + 1;
      }
    }
    if (bVar6 == 0) {
      return local_58;
    }
  } while( true );
}

