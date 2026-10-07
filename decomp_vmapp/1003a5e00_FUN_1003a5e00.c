
undefined8 FUN_1003a5e00(long param_1,undefined8 param_2,uint *param_3,long param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
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
  lVar8 = *(long *)(param_4 + 0x98);
  if (lVar8 == 0) {
    lVar8 = *(long *)(param_4 + 0xa8);
  }
  if (*(int *)(param_4 + 0x148) == 0) {
    FUN_1003a2100(param_4 + 0xb8,param_4 + 0x148);
  }
  lVar10 = *(long *)(param_4 + 0x150);
  if (lVar10 == 0) {
    lVar10 = *(long *)(param_4 + 0x160);
  }
  if (*(int *)(param_4 + 0x200) == 0) {
    FUN_1003a2100(param_4 + 0x170,param_4 + 0x200);
  }
  lVar7 = *(long *)(param_4 + 0x208);
  if (lVar7 == 0) {
    lVar7 = *(long *)(param_4 + 0x218);
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
  FUN_10038e8e0(uVar1,"%s = %s(%s*%s + %s)%s;\n",lVar9,pcVar4,lVar8,lVar10,lVar7,pcVar5);
  return 0;
}

