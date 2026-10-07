
undefined8 FUN_1003a64c0(long param_1,undefined8 param_2,uint *param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  if (param_3[8] == 0) {
    puVar7 = *(undefined1 **)(param_3 + 0x34);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = *(undefined1 **)(param_3 + 0x38);
    }
    *puVar7 = 0;
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
    puVar7 = *(undefined1 **)(param_3 + 0x4e);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = *(undefined1 **)(param_3 + 0x52);
    }
    *puVar7 = 0;
    param_3[0x4c] = 0;
    uVar4 = *param_3;
    if ((uVar4 & 0x100000) != 0) {
      FUN_10038e8e0(param_3 + 0x4c,"clamp(");
      uVar4 = *param_3;
    }
    uVar4 = uVar4 >> 0x18;
    uVar3 = uVar4 | 0xfffffff0;
    if ((uVar4 & 8) == 0) {
      uVar3 = uVar4 & 0xf;
    }
    if (uVar3 != 0) {
      FUN_10038e8e0(param_3 + 0x4c,"(");
    }
    pcVar5 = *(char **)(param_3 + 0x4e);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = *(char **)(param_3 + 0x52);
    }
  }
  else {
    pcVar5 = "";
  }
  piVar1 = (int *)(param_4 + 0x90);
  if (*(int *)(param_4 + 0x90) == 0) {
    FUN_1003a2100(param_4,piVar1);
  }
  lVar10 = *(long *)(param_4 + 0x98);
  lVar8 = lVar10;
  if (lVar10 == 0) {
    lVar8 = *(long *)(param_4 + 0xa8);
  }
  if (*piVar1 == 0) {
    FUN_1003a2100(param_4,piVar1);
    lVar10 = *(long *)(param_4 + 0x98);
  }
  if (lVar10 == 0) {
    lVar10 = *(long *)(param_4 + 0xa8);
  }
  if (param_3[8] == 0) {
    puVar7 = *(undefined1 **)(param_3 + 0x68);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = *(undefined1 **)(param_3 + 0x6c);
    }
    *puVar7 = 0;
    param_3[0x66] = 0;
    FUN_1003a28c0(param_3,param_3 + 0x66);
    pcVar6 = *(char **)(param_3 + 0x68);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = *(char **)(param_3 + 0x6c);
    }
  }
  else {
    pcVar6 = "";
  }
  FUN_10038e8e0(uVar2,"%s = %svec4(cos(%s.x), sin(%s.x), 0.0, 0.0)%s;\n",lVar9,pcVar5,lVar8,lVar10,
                pcVar6);
  return 0;
}

