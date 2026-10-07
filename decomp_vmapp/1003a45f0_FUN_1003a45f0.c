
undefined8 FUN_1003a45f0(long param_1,short param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar3 = *param_4;
  if (uVar3 == param_4[0x2e]) {
    pcVar7 = (char *)0x0;
    if (param_2 == 0xd) {
      pcVar7 = ">=";
    }
    pcVar4 = "<";
    if (param_2 != 0xc) {
      pcVar4 = pcVar7;
    }
    uVar1 = *param_3;
    *param_3 = uVar1 | 0xf0000;
    *param_4 = uVar3 & 0xff00ffff | 0xe40000;
    if (param_3[8] == 0) {
      puVar6 = *(undefined1 **)(param_3 + 0x34);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(param_3 + 0x38);
      }
      *puVar6 = 0;
      param_3[0x32] = 0;
      FUN_1003a18f0(*(undefined8 *)(param_3 + 0x20),param_3 + 0x32,*param_3,param_3[1]);
      FUN_10039ed40(param_3 + 0x32,*param_3,"xyzw");
      lVar9 = *(long *)(param_3 + 0x34);
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_3 + 0x38);
      }
    }
    else {
      lVar9 = *(long *)(param_3 + 10);
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_3 + 0xe);
      }
    }
    if (param_4[0x24] == 0) {
      FUN_1003a2100(param_4,param_4 + 0x24);
    }
    lVar8 = *(long *)(param_4 + 0x26);
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_4 + 0x2a);
    }
    if ((uVar1 & 0x10000) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%s.%c = (%s.%c %s %s.%c) ? 1.0 : 0.0;\n",lVar9,
                    0x78,lVar8,(int)"xyzw"[uVar3 >> 0x10 & 3],pcVar4,lVar8,
                    (int)"xyzw"[uVar3 >> 0x10 & 3]);
    }
    if ((uVar1 & 0x20000) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%s.%c = (%s.%c %s %s.%c) ? 1.0 : 0.0;\n",lVar9,
                    0x79,lVar8,(int)"xyzw"[uVar3 >> 0x12 & 3],pcVar4,lVar8,
                    (int)"xyzw"[uVar3 >> 0x12 & 3]);
    }
    if ((uVar1 & 0x40000) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%s.%c = (%s.%c %s %s.%c) ? 1.0 : 0.0;\n",lVar9,
                    0x7a,lVar8,(int)"xyzw"[uVar3 >> 0x14 & 3],pcVar4,lVar8,
                    (int)"xyzw"[uVar3 >> 0x14 & 3]);
    }
    if ((uVar1 & 0x80000) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%s.%c = (%s.%c %s %s.%c) ? 1.0 : 0.0;\n",lVar9,
                    0x77,lVar8,(int)"xyzw"[uVar3 >> 0x16 & 3],pcVar4,lVar8,
                    (int)"xyzw"[uVar3 >> 0x16 & 3]);
    }
  }
  else {
    pcVar7 = (char *)0x0;
    if (param_2 == 0xd) {
      pcVar7 = "greaterThanEqual";
    }
    pcVar4 = "lessThan";
    if (param_2 != 0xc) {
      pcVar4 = pcVar7;
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    if (param_3[8] == 0) {
      puVar6 = *(undefined1 **)(param_3 + 0x34);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(param_3 + 0x38);
      }
      *puVar6 = 0;
      param_3[0x32] = 0;
      FUN_1003a18f0(*(undefined8 *)(param_3 + 0x20),param_3 + 0x32,*param_3,param_3[1]);
      FUN_10039ed40(param_3 + 0x32,*param_3,"xyzw");
      lVar9 = *(long *)(param_3 + 0x34);
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_3 + 0x38);
      }
    }
    else {
      lVar9 = *(long *)(param_3 + 10);
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_3 + 0xe);
      }
    }
    if (param_3[8] == 0) {
      puVar6 = *(undefined1 **)(param_3 + 0x4e);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(param_3 + 0x52);
      }
      *puVar6 = 0;
      param_3[0x4c] = 0;
      uVar3 = *param_3;
      if ((uVar3 & 0x100000) != 0) {
        FUN_10038e8e0(param_3 + 0x4c,"clamp(");
        uVar3 = *param_3;
      }
      uVar3 = uVar3 >> 0x18;
      uVar1 = uVar3 | 0xfffffff0;
      if ((uVar3 & 8) == 0) {
        uVar1 = uVar3 & 0xf;
      }
      if (uVar1 != 0) {
        FUN_10038e8e0(param_3 + 0x4c,"(");
      }
      pcVar7 = *(char **)(param_3 + 0x4e);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = *(char **)(param_3 + 0x52);
      }
    }
    else {
      pcVar7 = "";
    }
    if (param_4[0x24] == 0) {
      FUN_1003a2100(param_4,param_4 + 0x24);
    }
    lVar8 = *(long *)(param_4 + 0x26);
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_4 + 0x2a);
    }
    if (param_4[0x52] == 0) {
      FUN_1003a2100(param_4 + 0x2e,param_4 + 0x52);
    }
    lVar10 = *(long *)(param_4 + 0x54);
    if (lVar10 == 0) {
      lVar10 = *(long *)(param_4 + 0x58);
    }
    if (param_3[8] == 0) {
      puVar6 = *(undefined1 **)(param_3 + 0x68);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(param_3 + 0x6c);
      }
      *puVar6 = 0;
      param_3[0x66] = 0;
      FUN_1003a28c0(param_3,param_3 + 0x66);
      pcVar5 = *(char **)(param_3 + 0x68);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = *(char **)(param_3 + 0x6c);
      }
    }
    else {
      pcVar5 = "";
    }
    FUN_10038e8e0(uVar2,"%s = %svec4(%s(%s, %s))%s;\n",lVar9,pcVar7,pcVar4,lVar8,lVar10,pcVar5);
  }
  return 0;
}

