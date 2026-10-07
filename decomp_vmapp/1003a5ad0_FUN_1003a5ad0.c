
undefined8 FUN_1003a5ad0(long param_1,undefined8 param_2,uint *param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_38;
  
  lVar10 = param_4 + 0x170;
  if ((*(byte *)(param_4 + 0x173) & 0xf) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_10038e8e0(uVar2,"src2");
    FUN_10038e8e0(uVar2," = ");
    FUN_1003a2100(lVar10,uVar2);
    FUN_10038e8e0(uVar2,";\n");
    puVar8 = *(undefined1 **)(param_4 + 0x208);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(param_4 + 0x218);
    }
    *puVar8 = 0;
    *(undefined4 *)(param_4 + 0x200) = 0;
    FUN_10038e8e0((undefined4 *)(param_4 + 0x200),"src2");
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  if (param_3[8] == 0) {
    puVar8 = *(undefined1 **)(param_3 + 0x34);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(param_3 + 0x38);
    }
    *puVar8 = 0;
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
    puVar8 = *(undefined1 **)(param_3 + 0x4e);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(param_3 + 0x52);
    }
    *puVar8 = 0;
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
  piVar1 = (int *)(param_4 + 0x200);
  if (*(int *)(param_4 + 0x200) == 0) {
    FUN_1003a2100(lVar10,piVar1);
  }
  local_38 = *(long *)(param_4 + 0x208);
  if (local_38 == 0) {
    local_38 = *(long *)(param_4 + 0x218);
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
  lVar11 = *(long *)(param_4 + 0x150);
  if (lVar11 == 0) {
    lVar11 = *(long *)(param_4 + 0x160);
  }
  if (*piVar1 == 0) {
    FUN_1003a2100(lVar10,piVar1);
  }
  lVar10 = *(long *)(param_4 + 0x208);
  if (lVar10 == 0) {
    lVar10 = *(long *)(param_4 + 0x218);
  }
  if (param_3[8] == 0) {
    puVar8 = *(undefined1 **)(param_3 + 0x68);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(param_3 + 0x6c);
    }
    *puVar8 = 0;
    param_3[0x66] = 0;
    FUN_1003a28c0(param_3,param_3 + 0x66);
    pcVar7 = *(char **)(param_3 + 0x68);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = *(char **)(param_3 + 0x6c);
    }
  }
  else {
    pcVar7 = "";
  }
  FUN_10038e8e0(uVar2,"%s = %s(%s + %s*(%s-%s))%s;\n",lVar9,pcVar5,local_38,lVar6,lVar11,lVar10,
                pcVar7);
  return 0;
}

