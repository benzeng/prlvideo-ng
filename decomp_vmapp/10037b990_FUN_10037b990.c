
int FUN_10037b990(long *param_1,long *param_2,int param_3,undefined8 param_4)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *extraout_RDX;
  char *pcVar6;
  char *extraout_RDX_00;
  char *extraout_RDX_01;
  char *extraout_RDX_02;
  char *extraout_RDX_03;
  int iVar7;
  char *pcVar8;
  
  lVar3 = (**(code **)(*param_1 + 0x18))();
  pcVar8 = "%s%s(gl_in[i].gl_ClipDistance[%d])";
  if (lVar3 == 0) {
    pcVar8 = "%s%s(gl_ClipDistance[%d])";
  }
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*param_2 + 0x29);
  }
  uVar4 = FUN_1003a78b0(8,uVar1);
  FUN_10038e8e0(param_4,"%s(",uVar4);
  lVar3 = *param_2;
  pcVar6 = extraout_RDX;
  if (lVar3 == 0) goto LAB_10037bc0a;
  if ((*(byte *)(lVar3 + 0x29) & 1) == 0) {
    pcVar6 = "";
    iVar7 = param_3;
  }
  else {
    lVar3 = *(long *)(lVar3 + 8);
    cVar2 = '\b';
    if (lVar3 != 0) {
      pcVar6 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
      if (*(long *)(lVar3 + 0x80) == 0) {
        pcVar6 = (char *)(lVar3 + 0x7c);
      }
      cVar2 = *pcVar6;
    }
    if (cVar2 == '\b') {
      pcVar6 = "";
    }
    else if (cVar2 == '\x02') {
      pcVar6 = "F2I";
    }
    else if (cVar2 == '\x01') {
      pcVar6 = "F2U";
    }
    else {
      pcVar6 = (char *)0x0;
    }
    iVar7 = param_3 + 1;
    FUN_10038e8e0(param_4,pcVar8,"",pcVar6,param_3);
    lVar3 = *param_2;
    pcVar6 = extraout_RDX_00;
    param_3 = iVar7;
    if (lVar3 == 0) goto LAB_10037bc0a;
    pcVar6 = ", ";
  }
  if ((*(byte *)(lVar3 + 0x29) & 2) != 0) {
    lVar3 = *(long *)(lVar3 + 8);
    if (lVar3 == 0) {
LAB_10037baeb:
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
      if (*(long *)(lVar3 + 0x80) == 0) {
        pcVar5 = (char *)(lVar3 + 0x7c);
      }
      cVar2 = *pcVar5;
      if (cVar2 == '\x01') {
        pcVar5 = "F2U";
      }
      else if (cVar2 == '\x02') {
        pcVar5 = "F2I";
      }
      else {
        if (cVar2 == '\b') goto LAB_10037baeb;
        pcVar5 = (char *)0x0;
      }
    }
    param_3 = iVar7 + 1;
    FUN_10038e8e0(param_4,pcVar8,pcVar6,pcVar5,iVar7);
    lVar3 = *param_2;
    pcVar6 = extraout_RDX_01;
    if (lVar3 == 0) goto LAB_10037bc0a;
    pcVar6 = ", ";
    iVar7 = param_3;
  }
  if ((*(byte *)(lVar3 + 0x29) & 4) != 0) {
    lVar3 = *(long *)(lVar3 + 8);
    if (lVar3 == 0) {
LAB_10037bb70:
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
      if (*(long *)(lVar3 + 0x80) == 0) {
        pcVar5 = (char *)(lVar3 + 0x7c);
      }
      cVar2 = *pcVar5;
      if (cVar2 == '\x01') {
        pcVar5 = "F2U";
      }
      else if (cVar2 == '\x02') {
        pcVar5 = "F2I";
      }
      else {
        if (cVar2 == '\b') goto LAB_10037bb70;
        pcVar5 = (char *)0x0;
      }
    }
    FUN_10038e8e0(param_4,pcVar8,pcVar6,pcVar5,iVar7);
    lVar3 = *param_2;
    pcVar6 = extraout_RDX_02;
    param_3 = iVar7 + 1;
    if (lVar3 == 0) goto LAB_10037bc0a;
    pcVar6 = ", ";
    iVar7 = iVar7 + 1;
  }
  param_3 = iVar7;
  if ((*(byte *)(lVar3 + 0x29) & 8) == 0) goto LAB_10037bc0a;
  lVar3 = *(long *)(lVar3 + 8);
  if (lVar3 == 0) {
LAB_10037bbe8:
    pcVar5 = "";
  }
  else {
    pcVar5 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
    if (*(long *)(lVar3 + 0x80) == 0) {
      pcVar5 = (char *)(lVar3 + 0x7c);
    }
    cVar2 = *pcVar5;
    if (cVar2 == '\x01') {
      pcVar5 = "F2U";
    }
    else if (cVar2 == '\x02') {
      pcVar5 = "F2I";
    }
    else {
      if (cVar2 == '\b') goto LAB_10037bbe8;
      pcVar5 = (char *)0x0;
    }
  }
  FUN_10038e8e0(param_4,pcVar8,pcVar6,pcVar5,iVar7);
  pcVar6 = extraout_RDX_03;
  param_3 = iVar7 + 1;
LAB_10037bc0a:
  FUN_10038e8e0(param_4,");\n",pcVar6);
  return param_3;
}

