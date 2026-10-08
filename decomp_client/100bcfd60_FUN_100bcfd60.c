
void FUN_100bcfd60(long param_1,undefined8 param_2,int param_3)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  
  pbVar1 = *(byte **)(param_1 + 0x80);
  if ((*(long *)(pbVar1 + 0x1b8) != 0) && ((*pbVar1 & 0x20) == 0)) {
    FUN_100c58980(*(long *)(pbVar1 + 0x1b8),param_2);
    return;
  }
  lVar3 = (long)param_3;
  plVar2 = *(long **)(pbVar1 + 0x1c0);
  if (*plVar2 != 0) {
    FUN_100c65b10(*plVar2,param_2,lVar3);
    plVar2 = *(long **)(*(long *)(param_1 + 0x80) + 0x1c0);
  }
  if (plVar2[1] != 0) {
    FUN_100c65b10(plVar2[1],param_2,lVar3);
    plVar2 = *(long **)(*(long *)(param_1 + 0x80) + 0x1c0);
  }
  if (plVar2[2] != 0) {
    FUN_100c65b10(plVar2[2],param_2,lVar3);
    plVar2 = *(long **)(*(long *)(param_1 + 0x80) + 0x1c0);
  }
  if (plVar2[3] != 0) {
    FUN_100c65b10(plVar2[3],param_2,lVar3);
    plVar2 = *(long **)(*(long *)(param_1 + 0x80) + 0x1c0);
  }
  if (plVar2[4] != 0) {
    FUN_100c65b10(plVar2[4],param_2,lVar3);
    plVar2 = *(long **)(*(long *)(param_1 + 0x80) + 0x1c0);
  }
  if (plVar2[5] != 0) {
    FUN_100c65b10(plVar2[5],param_2,lVar3);
    return;
  }
  return;
}

