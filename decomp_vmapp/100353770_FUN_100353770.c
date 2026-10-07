
void FUN_100353770(long param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  if (*(uint *)**(undefined8 **)(param_1 + 0x38) < 0xffff0200) {
    pcVar3 = "r0";
  }
  else {
    pcVar3 = "oC[0]";
  }
  if (*(char *)(param_1 + 0x90) != '\0') {
    FUN_10036c060(*(undefined8 *)(param_1 + 0x30),pcVar3);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_10036c1a0(*(undefined8 *)(param_1 + 0x30),pcVar3);
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_10036c110(*(undefined8 *)(param_1 + 0x30),pcVar3);
  }
  if (*(uint *)**(undefined8 **)(param_1 + 0x38) < 0xffff0200) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
    uVar5 = *(uint *)(param_1 + 0x94) & 0xffffffef;
    if ((uVar5 != 0) && (uVar1 = *(uint *)(*(undefined8 **)(param_1 + 0x38) + 0x11), uVar1 != 0)) {
      uVar2 = 0;
      iVar4 = 0;
      do {
        if ((uVar5 & 1) != 0) {
          FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"ps_out%u = oC[%u];\n",iVar4,uVar2);
          iVar4 = iVar4 + 1;
        }
        uVar5 = uVar5 >> 1;
      } while ((uVar5 != 0) && (uVar2 = uVar2 + 1, uVar2 < uVar1));
    }
  }
  if ((*(byte *)(param_1 + 0x94) & 0x10) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x38) + 0x8c) == 0) {
      pcVar3 = "gl_FragCoord.z";
    }
    else {
      pcVar3 = "clamp(oDepth, 0.0, 1.0)";
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"ps_out%u = vec4(%s, 1.0, 1.0, 1.0);\n",iVar4,
                  pcVar3);
    return;
  }
  return;
}

