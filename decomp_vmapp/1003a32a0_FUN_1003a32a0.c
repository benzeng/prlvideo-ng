
undefined8 FUN_1003a32a0(long param_1,ushort param_2,uint *param_3,long param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  
  pcVar7 = (char *)0x0;
  pcVar6 = (char *)0x0;
  if (param_2 < 0x4f) {
    pcVar6 = pcVar7;
    if (param_2 < 0xf) {
      if (param_2 == 0xe) {
        pcVar6 = "%s = %svec4(exp2(%s.w))%s;\n";
      }
      goto LAB_1003a332e;
    }
    if (0x21 < param_2) {
      if (param_2 == 0x22) {
        pcVar6 = "%s = %ssign(%s)%s;\n";
      }
      else if (param_2 == 0x23) {
        pcVar6 = "%s = %sabs(%s)%s;\n";
      }
      goto LAB_1003a332e;
    }
    if (param_2 != 0xf) {
      if (param_2 == 0x13) {
        pcVar6 = "%s = %sfract(%s)%s;\n";
      }
      goto LAB_1003a332e;
    }
  }
  else if (param_2 != 0x4f) {
    if (param_2 == 0x5b) {
      pcVar6 = "%s = %sdFdx(%s)%s;\n";
    }
    else if (param_2 == 0x5c) {
      pcVar6 = "%s = %sdFdy(%s)%s;\n";
    }
    goto LAB_1003a332e;
  }
  pcVar6 = "%s = %svec4(log2(abs(%s.w)))%s;\n";
LAB_1003a332e:
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (param_3[8] == 0) {
    puVar4 = *(undefined1 **)(param_3 + 0x34);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(param_3 + 0x38);
    }
    *puVar4 = 0;
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
    puVar4 = *(undefined1 **)(param_3 + 0x4e);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(param_3 + 0x52);
    }
    *puVar4 = 0;
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
    pcVar7 = *(char **)(param_3 + 0x4e);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = *(char **)(param_3 + 0x52);
    }
  }
  else {
    pcVar7 = "";
  }
  if (*(int *)(param_4 + 0x90) == 0) {
    FUN_1003a2100(param_4,param_4 + 0x90);
  }
  lVar9 = *(long *)(param_4 + 0x98);
  if (lVar9 == 0) {
    lVar9 = *(long *)(param_4 + 0xa8);
  }
  if (param_3[8] == 0) {
    puVar4 = *(undefined1 **)(param_3 + 0x68);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(param_3 + 0x6c);
    }
    *puVar4 = 0;
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
  FUN_10038e8e0(uVar1,pcVar6,lVar8,pcVar7,lVar9,pcVar5);
  return 0;
}

