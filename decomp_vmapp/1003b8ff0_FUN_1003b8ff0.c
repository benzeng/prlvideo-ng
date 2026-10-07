
undefined8 FUN_1003b8ff0(long param_1,long param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  byte *pbVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"TypeInfo[ %d ]: ",*(undefined4 *)(param_2 + 0x78));
  lVar6 = *(long *)(param_2 + 0x80);
  pbVar1 = (byte *)(param_2 + 0x7c);
  pbVar5 = (byte *)(lVar6 + 0x48);
  if (lVar6 == 0) {
    pbVar5 = pbVar1;
  }
  switch(*pbVar5) {
  case 1:
    uVar8 = *(undefined8 *)(param_1 + 8);
    pcVar7 = "uint";
    break;
  case 2:
    uVar8 = *(undefined8 *)(param_1 + 8);
    pcVar7 = "int";
    break;
  default:
    if ((*pbVar5 & 4) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"b");
      lVar6 = *(long *)(param_2 + 0x80);
    }
    pbVar5 = (byte *)(lVar6 + 0x48);
    if (lVar6 == 0) {
      pbVar5 = pbVar1;
    }
    if ((*pbVar5 & 2) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"i");
      lVar6 = *(long *)(param_2 + 0x80);
    }
    pbVar5 = (byte *)(lVar6 + 0x48);
    if (lVar6 == 0) {
      pbVar5 = pbVar1;
    }
    if ((*pbVar5 & 1) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"u");
      lVar6 = *(long *)(param_2 + 0x80);
    }
    pbVar5 = (byte *)(lVar6 + 0x48);
    if (lVar6 == 0) {
      pbVar5 = pbVar1;
    }
    if ((*pbVar5 & 8) == 0) goto LAB_1003b9117;
    uVar8 = *(undefined8 *)(param_1 + 8);
    pcVar7 = "f";
    break;
  case 4:
    uVar8 = *(undefined8 *)(param_1 + 8);
    pcVar7 = "bool";
    break;
  case 8:
    uVar8 = *(undefined8 *)(param_1 + 8);
    pcVar7 = "float";
  }
  FUN_10038e8e0(uVar8,pcVar7);
LAB_1003b9117:
  uVar8 = *(undefined8 *)(param_1 + 8);
  for (lVar6 = **(long **)(param_2 + 0x50); lVar6 != 0; lVar6 = **(long **)(lVar6 + 0x18)) {
    pcVar7 = " Out(";
    if ((*(byte *)(lVar6 + 0x2d) & 1) != 0) {
      pcVar7 = " In(";
    }
    FUN_10038e8e0(uVar8,"%sRNum=%d Mask=%x Name=%d)",pcVar7,*(undefined1 *)(lVar6 + 0x2a),
                  *(undefined1 *)(lVar6 + 0x29),*(undefined1 *)(lVar6 + 0x28));
    uVar8 = *(undefined8 *)(param_1 + 8);
  }
  FUN_10038e8e0(uVar8,"\n");
  for (plVar4 = (long *)**(undefined8 **)(param_2 + 0x68); plVar4 != (long *)0x0;
      plVar4 = *(long **)plVar4[3]) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    lVar6 = *plVar4;
    uVar9 = 0;
    if (*(long *)(lVar6 + 0x38) != 0) {
      uVar9 = *(undefined4 *)(*(long *)(lVar6 + 0x38) + 0x20);
    }
    uVar2 = *(undefined4 *)(lVar6 + 0x30);
    uVar3 = *(undefined4 *)(lVar6 + 0x34);
    lVar6 = FUN_1003a7de0(*(undefined2 *)(lVar6 + 0x4c));
    FUN_10038e8e0(uVar8,"\t%d.%d.%d %s.%d ",uVar9,uVar3,uVar2,*(undefined8 *)(lVar6 + 8),
                  (int)((ulong)((long)plVar4 - *(long *)(*plVar4 + 0x40)) >> 6));
    FUN_1003b94a0(param_1,plVar4);
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"\n");
  }
  return 0;
}

