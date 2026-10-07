
undefined8 FUN_1003a34f0(long param_1,short param_2,uint *param_3,long param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  char *pcVar11;
  
  if (*(char *)(*(long *)(param_1 + 0x18) + 4) == '\0') {
    pcVar11 = "3.402823466E+38";
  }
  else {
    pcVar11 = "1E+30";
  }
  if ((param_2 == 6) && (*(char *)(DAT_1011c8478 + 0x66) != '\0')) {
    uVar10 = *(undefined8 *)(param_1 + 8);
    if (param_3[8] == 0) {
      puVar6 = *(undefined1 **)(param_3 + 0x34);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(param_3 + 0x38);
      }
      *puVar6 = 0;
      param_3[0x32] = 0;
      FUN_1003a18f0(*(undefined8 *)(param_3 + 0x20),param_3 + 0x32,*param_3,param_3[1]);
      FUN_10039ed40(param_3 + 0x32,*param_3,"xyzw");
      lVar5 = *(long *)(param_3 + 0x34);
      if (lVar5 == 0) {
        lVar5 = *(long *)(param_3 + 0x38);
      }
    }
    else {
      lVar5 = *(long *)(param_3 + 10);
      if (lVar5 == 0) {
        lVar5 = *(long *)(param_3 + 0xe);
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
      uVar2 = uVar3 | 0xfffffff0;
      if ((uVar3 & 8) == 0) {
        uVar2 = uVar3 & 0xf;
      }
      if (uVar2 != 0) {
        FUN_10038e8e0(param_3 + 0x4c,"(");
      }
      pcVar4 = *(char **)(param_3 + 0x4e);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = *(char **)(param_3 + 0x52);
      }
    }
    else {
      pcVar4 = "";
    }
    piVar1 = (int *)(param_4 + 0x90);
    if (*(int *)(param_4 + 0x90) == 0) {
      FUN_1003a2100(param_4,piVar1);
    }
    pcVar8 = *(char **)(param_4 + 0x98);
    if (pcVar8 == (char *)0x0) {
      pcVar8 = *(char **)(param_4 + 0xa8);
    }
    if (*piVar1 == 0) {
      FUN_1003a2100(param_4,piVar1);
    }
    if (param_3[8] == 0) {
      puVar6 = *(undefined1 **)(param_3 + 0x68);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(param_3 + 0x6c);
      }
      *puVar6 = 0;
      param_3[0x66] = 0;
      FUN_1003a28c0(param_3,param_3 + 0x66);
    }
    pcVar9 = "%s = %svec4(%s.w == 0.0 ? %s : 1.0 / %s.w)%s;\n";
LAB_1003a382e:
    FUN_10038e8e0(uVar10,pcVar9,lVar5,pcVar4,pcVar8,pcVar11);
    return 0;
  }
  if (*(char *)(DAT_1011c8478 + 0x2c) == '\0') {
    if (param_2 == 0x24) {
      if ((*(byte *)(param_4 + 3) & 0xf) != 0) {
        uVar10 = *(undefined8 *)(param_1 + 8);
        FUN_10038e8e0(uVar10,"src0");
        FUN_10038e8e0(uVar10," = ");
        FUN_1003a2100(param_4,uVar10);
        FUN_10038e8e0(uVar10,";\n");
        puVar6 = *(undefined1 **)(param_4 + 0x98);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_4 + 0xa8);
        }
        *puVar6 = 0;
        *(undefined4 *)(param_4 + 0x90) = 0;
        FUN_10038e8e0((undefined4 *)(param_4 + 0x90),"src0");
      }
      uVar10 = *(undefined8 *)(param_1 + 8);
      if (param_3[8] == 0) {
        puVar6 = *(undefined1 **)(param_3 + 0x34);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_3 + 0x38);
        }
        *puVar6 = 0;
        param_3[0x32] = 0;
        FUN_1003a18f0(*(undefined8 *)(param_3 + 0x20),param_3 + 0x32,*param_3,param_3[1]);
        FUN_10039ed40(param_3 + 0x32,*param_3,"xyzw");
        lVar5 = *(long *)(param_3 + 0x34);
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_3 + 0x38);
        }
      }
      else {
        lVar5 = *(long *)(param_3 + 10);
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_3 + 0xe);
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
        uVar2 = uVar3 | 0xfffffff0;
        if ((uVar3 & 8) == 0) {
          uVar2 = uVar3 & 0xf;
        }
        if (uVar2 != 0) {
          FUN_10038e8e0(param_3 + 0x4c,"(");
        }
        pcVar4 = *(char **)(param_3 + 0x4e);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = *(char **)(param_3 + 0x52);
        }
      }
      else {
        pcVar4 = "";
      }
      piVar1 = (int *)(param_4 + 0x90);
      if (*(int *)(param_4 + 0x90) == 0) {
        FUN_1003a2100(param_4,piVar1);
      }
      pcVar11 = *(char **)(param_4 + 0x98);
      pcVar8 = pcVar11;
      if (pcVar11 == (char *)0x0) {
        pcVar8 = *(char **)(param_4 + 0xa8);
      }
      if (*piVar1 == 0) {
        FUN_1003a2100(param_4,piVar1);
        pcVar11 = *(char **)(param_4 + 0x98);
      }
      if (pcVar11 == (char *)0x0) {
        pcVar11 = *(char **)(param_4 + 0xa8);
      }
      if (*piVar1 == 0) {
        FUN_1003a2100(param_4,piVar1);
      }
      if (param_3[8] == 0) {
        puVar6 = *(undefined1 **)(param_3 + 0x68);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_3 + 0x6c);
        }
        *puVar6 = 0;
        param_3[0x66] = 0;
        FUN_1003a28c0(param_3,param_3 + 0x66);
      }
      pcVar9 = "%s = %s(%s * inversesqrt( dot(%s.xyz, %s.xyz) ))%s;\n";
    }
    else if (param_2 == 7) {
      uVar10 = *(undefined8 *)(param_1 + 8);
      if (param_3[8] == 0) {
        puVar6 = *(undefined1 **)(param_3 + 0x34);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_3 + 0x38);
        }
        *puVar6 = 0;
        param_3[0x32] = 0;
        FUN_1003a18f0(*(undefined8 *)(param_3 + 0x20),param_3 + 0x32,*param_3,param_3[1]);
        FUN_10039ed40(param_3 + 0x32,*param_3,"xyzw");
        lVar5 = *(long *)(param_3 + 0x34);
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_3 + 0x38);
        }
      }
      else {
        lVar5 = *(long *)(param_3 + 10);
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_3 + 0xe);
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
        uVar2 = uVar3 | 0xfffffff0;
        if ((uVar3 & 8) == 0) {
          uVar2 = uVar3 & 0xf;
        }
        if (uVar2 != 0) {
          FUN_10038e8e0(param_3 + 0x4c,"(");
        }
        pcVar4 = *(char **)(param_3 + 0x4e);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = *(char **)(param_3 + 0x52);
        }
      }
      else {
        pcVar4 = "";
      }
      if (*(int *)(param_4 + 0x90) == 0) {
        FUN_1003a2100(param_4,param_4 + 0x90);
      }
      pcVar8 = *(char **)(param_4 + 0x98);
      if (pcVar8 == (char *)0x0) {
        pcVar8 = *(char **)(param_4 + 0xa8);
      }
      if (param_3[8] == 0) {
        puVar6 = *(undefined1 **)(param_3 + 0x68);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_3 + 0x6c);
        }
        *puVar6 = 0;
        param_3[0x66] = 0;
        FUN_1003a28c0(param_3,param_3 + 0x66);
        pcVar11 = *(char **)(param_3 + 0x68);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = *(char **)(param_3 + 0x6c);
        }
        pcVar9 = "%s = %svec4(inversesqrt(abs(%s.w)))%s;\n";
      }
      else {
        pcVar11 = "";
        pcVar9 = "%s = %svec4(inversesqrt(abs(%s.w)))%s;\n";
      }
    }
    else {
      if (param_2 != 6) {
        return 0;
      }
      uVar10 = *(undefined8 *)(param_1 + 8);
      if (param_3[8] == 0) {
        puVar6 = *(undefined1 **)(param_3 + 0x34);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_3 + 0x38);
        }
        *puVar6 = 0;
        param_3[0x32] = 0;
        FUN_1003a18f0(*(undefined8 *)(param_3 + 0x20),param_3 + 0x32,*param_3,param_3[1]);
        FUN_10039ed40(param_3 + 0x32,*param_3,"xyzw");
        lVar5 = *(long *)(param_3 + 0x34);
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_3 + 0x38);
        }
      }
      else {
        lVar5 = *(long *)(param_3 + 10);
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_3 + 0xe);
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
        uVar2 = uVar3 | 0xfffffff0;
        if ((uVar3 & 8) == 0) {
          uVar2 = uVar3 & 0xf;
        }
        if (uVar2 != 0) {
          FUN_10038e8e0(param_3 + 0x4c,"(");
        }
        pcVar4 = *(char **)(param_3 + 0x4e);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = *(char **)(param_3 + 0x52);
        }
      }
      else {
        pcVar4 = "";
      }
      if (*(int *)(param_4 + 0x90) == 0) {
        FUN_1003a2100(param_4,param_4 + 0x90);
      }
      pcVar8 = *(char **)(param_4 + 0x98);
      if (pcVar8 == (char *)0x0) {
        pcVar8 = *(char **)(param_4 + 0xa8);
      }
      if (param_3[8] == 0) {
        puVar6 = *(undefined1 **)(param_3 + 0x68);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_3 + 0x6c);
        }
        *puVar6 = 0;
        param_3[0x66] = 0;
        FUN_1003a28c0(param_3,param_3 + 0x66);
        pcVar11 = *(char **)(param_3 + 0x68);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = *(char **)(param_3 + 0x6c);
        }
      }
      else {
        pcVar11 = "";
      }
      pcVar9 = "%s = %svec4(1.0 / %s.w)%s;\n";
    }
    goto LAB_1003a382e;
  }
  if (param_2 == 6) {
    uVar10 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(param_4 + 0x90) == 0) {
      FUN_1003a2100(param_4,param_4 + 0x90);
    }
    lVar5 = *(long *)(param_4 + 0x98);
    if (lVar5 == 0) {
      lVar5 = *(long *)(param_4 + 0xa8);
    }
    FUN_10038e8e0(uVar10,"src0.x = min(1.0/%s.w, %s);\n",lVar5,pcVar11);
    uVar10 = *(undefined8 *)(param_1 + 8);
    if (param_3[8] == 0) {
      puVar6 = *(undefined1 **)(param_3 + 0x34);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(param_3 + 0x38);
      }
      *puVar6 = 0;
      param_3[0x32] = 0;
      FUN_1003a18f0(*(undefined8 *)(param_3 + 0x20),param_3 + 0x32,*param_3,param_3[1]);
      FUN_10039ed40(param_3 + 0x32,*param_3,"xyzw");
      lVar5 = *(long *)(param_3 + 0x34);
      if (lVar5 == 0) {
        lVar5 = *(long *)(param_3 + 0x38);
      }
    }
    else {
      lVar5 = *(long *)(param_3 + 10);
      if (lVar5 == 0) {
        lVar5 = *(long *)(param_3 + 0xe);
      }
    }
    pcVar11 = "";
    if (param_3[8] != 0) {
      pcVar4 = "";
      goto LAB_1003a3c2d;
    }
  }
  else {
    if (param_2 != 7) {
      if (param_2 != 0x24) {
        return 0;
      }
      uVar10 = *(undefined8 *)(param_1 + 8);
      piVar1 = (int *)(param_4 + 0x90);
      if (*(int *)(param_4 + 0x90) == 0) {
        FUN_1003a2100(param_4,piVar1);
      }
      lVar7 = *(long *)(param_4 + 0x98);
      lVar5 = lVar7;
      if (lVar7 == 0) {
        lVar5 = *(long *)(param_4 + 0xa8);
      }
      if (*piVar1 == 0) {
        FUN_1003a2100(param_4,piVar1);
        lVar7 = *(long *)(param_4 + 0x98);
      }
      if (lVar7 == 0) {
        lVar7 = *(long *)(param_4 + 0xa8);
      }
      FUN_10038e8e0(uVar10,"src0.x = dot(%s.xyz, %s.xyz);\n",lVar5,lVar7);
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"src0.x = min(inversesqrt(src0.x), %s);\n",pcVar11)
      ;
      uVar10 = *(undefined8 *)(param_1 + 8);
      if (param_3[8] == 0) {
        puVar6 = *(undefined1 **)(param_3 + 0x34);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_3 + 0x38);
        }
        *puVar6 = 0;
        param_3[0x32] = 0;
        FUN_1003a18f0(*(undefined8 *)(param_3 + 0x20),param_3 + 0x32,*param_3,param_3[1]);
        FUN_10039ed40(param_3 + 0x32,*param_3,"xyzw");
        lVar5 = *(long *)(param_3 + 0x34);
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_3 + 0x38);
        }
      }
      else {
        lVar5 = *(long *)(param_3 + 10);
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_3 + 0xe);
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
        uVar2 = uVar3 | 0xfffffff0;
        if ((uVar3 & 8) == 0) {
          uVar2 = uVar3 & 0xf;
        }
        if (uVar2 != 0) {
          FUN_10038e8e0(param_3 + 0x4c,"(");
        }
        pcVar4 = *(char **)(param_3 + 0x4e);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = *(char **)(param_3 + 0x52);
        }
      }
      else {
        pcVar4 = "";
      }
      if (*piVar1 == 0) {
        FUN_1003a2100();
      }
      pcVar8 = *(char **)(param_4 + 0x98);
      if (pcVar8 == (char *)0x0) {
        pcVar8 = *(char **)(param_4 + 0xa8);
      }
      if (param_3[8] == 0) {
        puVar6 = *(undefined1 **)(param_3 + 0x68);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_3 + 0x6c);
        }
        *puVar6 = 0;
        param_3[0x66] = 0;
        FUN_1003a28c0(param_3,param_3 + 0x66);
        pcVar11 = *(char **)(param_3 + 0x68);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = *(char **)(param_3 + 0x6c);
        }
      }
      else {
        pcVar11 = "";
      }
      pcVar9 = "%s = %s(%s*src0.x)%s;\n";
      goto LAB_1003a382e;
    }
    uVar10 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(param_4 + 0x90) == 0) {
      FUN_1003a2100(param_4,param_4 + 0x90);
    }
    lVar5 = *(long *)(param_4 + 0x98);
    if (lVar5 == 0) {
      lVar5 = *(long *)(param_4 + 0xa8);
    }
    FUN_10038e8e0(uVar10,"src0.x = min(inversesqrt(abs(%s.w)), %s);\n",lVar5,pcVar11);
    uVar10 = *(undefined8 *)(param_1 + 8);
    if (param_3[8] == 0) {
      puVar6 = *(undefined1 **)(param_3 + 0x34);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(param_3 + 0x38);
      }
      *puVar6 = 0;
      param_3[0x32] = 0;
      FUN_1003a18f0(*(undefined8 *)(param_3 + 0x20),param_3 + 0x32,*param_3,param_3[1]);
      FUN_10039ed40(param_3 + 0x32,*param_3,"xyzw");
      lVar5 = *(long *)(param_3 + 0x34);
      if (lVar5 == 0) {
        lVar5 = *(long *)(param_3 + 0x38);
      }
    }
    else {
      lVar5 = *(long *)(param_3 + 10);
      if (lVar5 == 0) {
        lVar5 = *(long *)(param_3 + 0xe);
      }
    }
    pcVar11 = "";
    if (param_3[8] != 0) {
      pcVar4 = "";
      goto LAB_1003a3c2d;
    }
  }
  pcVar11 = "";
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
  uVar2 = uVar3 | 0xfffffff0;
  if ((uVar3 & 8) == 0) {
    uVar2 = uVar3 & 0xf;
  }
  if (uVar2 != 0) {
    FUN_10038e8e0(param_3 + 0x4c,"(");
  }
  pcVar4 = *(char **)(param_3 + 0x4e);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = *(char **)(param_3 + 0x52);
  }
  if (param_3[8] == 0) {
    puVar6 = *(undefined1 **)(param_3 + 0x68);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = *(undefined1 **)(param_3 + 0x6c);
    }
    *puVar6 = 0;
    param_3[0x66] = 0;
    FUN_1003a28c0(param_3,param_3 + 0x66);
    pcVar11 = *(char **)(param_3 + 0x68);
    if (pcVar11 == (char *)0x0) {
      pcVar11 = *(char **)(param_3 + 0x6c);
    }
  }
LAB_1003a3c2d:
  FUN_10038e8e0(uVar10,"%s = %svec4(src0.x)%s;\n",lVar5,pcVar4,pcVar11);
  return 0;
}

