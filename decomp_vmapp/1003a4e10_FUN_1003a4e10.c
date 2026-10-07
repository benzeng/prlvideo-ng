
undefined8 FUN_1003a4e10(long param_1,ushort param_2,uint *param_3,long param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  
  pcVar11 = (char *)0x0;
  if (param_2 < 0x20) {
    if (param_2 == 10) {
      pcVar11 = "%s = %smin(%s, %s)%s;\n";
    }
    else if (param_2 == 0xb) {
      pcVar11 = "%s = %smax(%s, %s)%s;\n";
    }
  }
  else if (param_2 == 0x20) {
    if (*(char *)(DAT_1011c8478 + 0x66) != '\0') {
      uVar9 = *(undefined8 *)(param_1 + 8);
      if (param_3[8] == 0) {
        puVar7 = *(undefined1 **)(param_3 + 0x34);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(param_3 + 0x38);
        }
        *puVar7 = 0;
        param_3[0x32] = 0;
        FUN_1003a18f0(*(undefined8 *)(param_3 + 0x20),param_3 + 0x32,*param_3,param_3[1]);
        FUN_10039ed40(param_3 + 0x32,*param_3,"xyzw");
        lVar8 = *(long *)(param_3 + 0x34);
        if (lVar8 == 0) {
          lVar8 = *(long *)(param_3 + 0x38);
        }
      }
      else {
        lVar8 = *(long *)(param_3 + 10);
        if (lVar8 == 0) {
          lVar8 = *(long *)(param_3 + 0xe);
        }
      }
      if (param_3[8] == 0) {
        puVar7 = *(undefined1 **)(param_3 + 0x4e);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(param_3 + 0x52);
        }
        *puVar7 = 0;
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
      lVar6 = *(long *)(param_4 + 0x98);
      if (lVar6 == 0) {
        lVar6 = *(long *)(param_4 + 0xa8);
      }
      piVar1 = (int *)(param_4 + 0x148);
      if (*(int *)(param_4 + 0x148) == 0) {
        FUN_1003a2100(param_4 + 0xb8,piVar1);
      }
      pcVar5 = *(char **)(param_4 + 0x150);
      pcVar10 = pcVar5;
      if (pcVar5 == (char *)0x0) {
        pcVar10 = *(char **)(param_4 + 0x160);
      }
      if (*piVar1 == 0) {
        FUN_1003a2100(param_4 + 0xb8,piVar1);
        pcVar5 = *(char **)(param_4 + 0x150);
      }
      if (pcVar5 == (char *)0x0) {
        pcVar5 = *(char **)(param_4 + 0x160);
      }
      if (param_3[8] == 0) {
        puVar7 = *(undefined1 **)(param_3 + 0x68);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(param_3 + 0x6c);
        }
        *puVar7 = 0;
        param_3[0x66] = 0;
        FUN_1003a28c0(param_3,param_3 + 0x66);
      }
      pcVar11 = "%s = %svec4(pow(abs(%s.x) + float(%s.x == 0.0), %s.x))%s;\n";
      goto LAB_1003a5086;
    }
    pcVar11 = "%s = %svec4(pow(abs(%s.x), %s.x))%s;\n";
  }
  else if (param_2 == 0x21) {
    pcVar11 = "%s = %svec4(cross(%s.xyz, %s.xyz), 0.0)%s;\n";
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  if (param_3[8] == 0) {
    puVar7 = *(undefined1 **)(param_3 + 0x34);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = *(undefined1 **)(param_3 + 0x38);
    }
    *puVar7 = 0;
    param_3[0x32] = 0;
    FUN_1003a18f0(*(undefined8 *)(param_3 + 0x20),param_3 + 0x32,*param_3,param_3[1]);
    FUN_10039ed40(param_3 + 0x32,*param_3,"xyzw");
    lVar8 = *(long *)(param_3 + 0x34);
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_3 + 0x38);
    }
  }
  else {
    lVar8 = *(long *)(param_3 + 10);
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_3 + 0xe);
    }
  }
  if (param_3[8] == 0) {
    puVar7 = *(undefined1 **)(param_3 + 0x4e);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = *(undefined1 **)(param_3 + 0x52);
    }
    *puVar7 = 0;
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
  lVar6 = *(long *)(param_4 + 0x98);
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_4 + 0xa8);
  }
  if (*(int *)(param_4 + 0x148) == 0) {
    FUN_1003a2100(param_4 + 0xb8,param_4 + 0x148);
  }
  pcVar10 = *(char **)(param_4 + 0x150);
  if (pcVar10 == (char *)0x0) {
    pcVar10 = *(char **)(param_4 + 0x160);
  }
  if (param_3[8] == 0) {
    puVar7 = *(undefined1 **)(param_3 + 0x68);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = *(undefined1 **)(param_3 + 0x6c);
    }
    *puVar7 = 0;
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
LAB_1003a5086:
  FUN_10038e8e0(uVar9,pcVar11,lVar8,pcVar4,lVar6,pcVar10,pcVar5);
  return 0;
}

