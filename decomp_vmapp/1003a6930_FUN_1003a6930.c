
undefined8 FUN_1003a6930(long param_1,short param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_2 == 0x1e) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(param_4 + 0x90) == 0) {
      FUN_1003a2100(param_4,param_4 + 0x90);
    }
    lVar2 = *(long *)(param_4 + 0x98);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_4 + 0xa8);
    }
    FUN_10038e8e0(uVar1,"void %s()\n{\nvec4 dst, src0, src1, src2;\nbvec3 gamma_cmp;\n",lVar2);
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"bvec4 bdst;\n\n");
  }
  else if (param_2 == 0x1a) {
    pcVar4 = "";
    if ((*(uint *)(param_4 + 0xb8) >> 8 & 0x18 | *(uint *)(param_4 + 0xb8) >> 0x1c & 7) == 0x13) {
      pcVar4 = ".x";
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(param_4 + 0x148) == 0) {
      FUN_1003a2100(param_4 + 0xb8,param_4 + 0x148);
    }
    lVar2 = *(long *)(param_4 + 0x150);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_4 + 0x160);
    }
    if (*(int *)(param_4 + 0x90) == 0) {
      FUN_1003a2100(param_4,param_4 + 0x90);
    }
    lVar3 = *(long *)(param_4 + 0x98);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_4 + 0xa8);
    }
    FUN_10038e8e0(uVar1,"if(%s%s) %s();\n",lVar2,pcVar4,lVar3);
  }
  else if (param_2 == 0x19) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(param_4 + 0x90) == 0) {
      FUN_1003a2100(param_4,param_4 + 0x90);
    }
    lVar2 = *(long *)(param_4 + 0x98);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_4 + 0xa8);
    }
    FUN_10038e8e0(uVar1,"%s();\n",lVar2);
  }
  return 0;
}

