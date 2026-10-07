
void FUN_1003a29e0(uint *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 local_60 [8];
  long local_58;
  long local_48;
  undefined1 local_38 [4];
  char local_34 [4];
  
  uVar6 = param_1[2];
  if (uVar6 == 0) {
    FUN_1003a18f0(*(undefined8 *)(param_1 + 0x20),param_1 + 0x32,*param_1,param_1[1]);
    FUN_10039ed40(param_1 + 0x32,*param_1,"xyzw");
    uVar6 = *param_1;
    if ((uVar6 & 0x100000) != 0) {
      FUN_10038e8e0(param_1 + 0x4c,"clamp(");
      uVar6 = *param_1;
    }
    uVar6 = uVar6 >> 0x18;
    uVar7 = uVar6 | 0xfffffff0;
    if ((uVar6 & 8) == 0) {
      uVar7 = uVar6 & 0xf;
    }
    if (uVar7 != 0) {
      FUN_10038e8e0(param_1 + 0x4c,"(");
    }
    FUN_1003a28c0(param_1,param_1 + 0x66);
    lVar12 = *(long *)(param_1 + 0x34);
    if (lVar12 == 0) {
      lVar12 = *(long *)(param_1 + 0x38);
    }
    lVar8 = *(long *)(param_1 + 0x4e);
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_1 + 0x52);
    }
    lVar10 = *(long *)(param_1 + 10);
    if (lVar10 == 0) {
      lVar10 = *(long *)(param_1 + 0xe);
    }
    lVar13 = *(long *)(param_1 + 0x18);
    if (lVar13 == 0) {
      lVar13 = *(long *)(param_1 + 0x1c);
    }
    lVar9 = *(long *)(param_1 + 0x68);
    if (lVar9 == 0) {
      lVar9 = *(long *)(param_1 + 0x6c);
    }
    FUN_10038e8e0(param_2,"%s = %s%s%s%s;\n",lVar12,lVar8,lVar10,lVar13,lVar9);
  }
  else {
    cVar1 = "xyzw"[uVar6 >> 0x10 & 3];
    cVar2 = "xyzw"[uVar6 >> 0x12 & 3];
    cVar3 = "xyzw"[uVar6 >> 0x14 & 3];
    cVar4 = "xyzw"[uVar6 >> 0x16 & 3];
    pcVar11 = "";
    if ((uVar6 & 0xf000000) == 0xd000000) {
      pcVar11 = "!";
    }
    local_34[0] = cVar1;
    local_34[1] = cVar2;
    local_34[2] = cVar3;
    local_34[3] = cVar4;
    FUN_10038e870(local_60,local_38,4);
    FUN_1003a18f0(*(undefined8 *)(param_1 + 0x20),local_60,param_1[2],0);
    if (((cVar2 == cVar1) && (cVar3 == cVar1)) && (cVar4 == cVar1)) {
      FUN_1003a18f0(*(undefined8 *)(param_1 + 0x20),param_1 + 0x32,*param_1,param_1[1]);
      FUN_10039ed40(param_1 + 0x32,*param_1,"xyzw");
      uVar6 = *param_1;
      if ((uVar6 & 0x100000) != 0) {
        FUN_10038e8e0(param_1 + 0x4c,"clamp(");
        uVar6 = *param_1;
      }
      uVar6 = uVar6 >> 0x18;
      uVar7 = uVar6 | 0xfffffff0;
      if ((uVar6 & 8) == 0) {
        uVar7 = uVar6 & 0xf;
      }
      if (uVar7 != 0) {
        FUN_10038e8e0(param_1 + 0x4c,"(");
      }
      FUN_1003a28c0(param_1,param_1 + 0x66);
      if (local_58 == 0) {
        local_58 = local_48;
      }
      lVar12 = *(long *)(param_1 + 0x34);
      if (lVar12 == 0) {
        lVar12 = *(long *)(param_1 + 0x38);
      }
      lVar8 = *(long *)(param_1 + 0x4e);
      if (lVar8 == 0) {
        lVar8 = *(long *)(param_1 + 0x52);
      }
      lVar10 = *(long *)(param_1 + 10);
      if (lVar10 == 0) {
        lVar10 = *(long *)(param_1 + 0xe);
      }
      lVar13 = *(long *)(param_1 + 0x18);
      if (lVar13 == 0) {
        lVar13 = *(long *)(param_1 + 0x1c);
      }
      lVar9 = *(long *)(param_1 + 0x68);
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_1 + 0x6c);
      }
      FUN_10038e8e0(param_2,"if(%s%s.%c) %s = %s%s%s%s;\n",pcVar11,local_58,(int)cVar1,lVar12,lVar8,
                    lVar10,lVar13,lVar9);
    }
    else {
      uVar6 = *param_1;
      *param_1 = uVar6 | 0xf0000;
      FUN_1003a18f0(*(undefined8 *)(param_1 + 0x20),param_1 + 0x32,uVar6 | 0xf0000,param_1[1]);
      FUN_10039ed40(param_1 + 0x32,*param_1,"xyzw");
      uVar7 = *param_1;
      if ((uVar7 & 0x100000) != 0) {
        FUN_10038e8e0(param_1 + 0x4c,"clamp(");
        uVar7 = *param_1;
      }
      uVar7 = uVar7 >> 0x18;
      uVar5 = uVar7 | 0xfffffff0;
      if ((uVar7 & 8) == 0) {
        uVar5 = uVar7 & 0xf;
      }
      if (uVar5 != 0) {
        FUN_10038e8e0(param_1 + 0x4c,"(");
      }
      FUN_1003a28c0(param_1,param_1 + 0x66);
      *param_1 = uVar6;
      uVar15 = 0;
      while( true ) {
        if ((0x10000 << ((byte)uVar15 & 0x1f) & uVar6) != 0) {
          lVar12 = local_58;
          if (local_58 == 0) {
            lVar12 = local_48;
          }
          lVar8 = *(long *)(param_1 + 0x34);
          if (lVar8 == 0) {
            lVar8 = *(long *)(param_1 + 0x38);
          }
          lVar10 = *(long *)(param_1 + 0x4e);
          if (lVar10 == 0) {
            lVar10 = *(long *)(param_1 + 0x52);
          }
          lVar13 = *(long *)(param_1 + 10);
          if (lVar13 == 0) {
            lVar13 = *(long *)(param_1 + 0xe);
          }
          lVar9 = *(long *)(param_1 + 0x18);
          if (lVar9 == 0) {
            lVar9 = *(long *)(param_1 + 0x1c);
          }
          lVar14 = *(long *)(param_1 + 0x68);
          if (lVar14 == 0) {
            lVar14 = *(long *)(param_1 + 0x6c);
          }
          FUN_10038e8e0(param_2,"if(%s%s.%c) %s.%c = %s%s%s%s.%c;\n",pcVar11,lVar12,
                        (int)local_34[uVar15],lVar8,(int)"xyzw"[uVar15],lVar10,lVar13,lVar9,lVar14,
                        (int)"xyzw"[uVar15]);
        }
        uVar15 = uVar15 + 1;
        if (3 < uVar15) break;
        uVar6 = *param_1;
      }
    }
    FUN_10038e8c0(local_60);
  }
  return;
}

