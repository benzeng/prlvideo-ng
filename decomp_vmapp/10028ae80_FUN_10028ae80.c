
void FUN_10028ae80(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_2 + 0x38);
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x9c) != 0) {
    *(undefined4 *)(lVar2 + 0xd4) = 0;
    goto LAB_10028af45;
  }
  if ((*(byte *)(param_2 + 0x31) & 0x10) != 0) {
    FUN_1004033b0(param_1 + 0x3a148,param_2);
  }
  if ((*(byte *)(param_2 + 0xc0) & 0xfc) == 0) goto LAB_10028af45;
  cVar1 = *(char *)(*(long *)(lVar2 + 0x88) + 0x18);
  uVar5 = 0x30c00;
  if (cVar1 < -0x56) {
    if (cVar1 != -0x76) goto LAB_10028af1d;
  }
  else if (cVar1 < '*') {
    if ((cVar1 != -0x56) && (cVar1 != '\n')) {
LAB_10028af1d:
      uVar5 = 0x31100;
      if (cVar1 == -0x6f) {
        uVar5 = 0x30c00;
      }
    }
  }
  else if ((cVar1 != '*') && (cVar1 != '5')) goto LAB_10028af1d;
  FUN_1004103f0(uVar5,lVar2 + 0xc0,0x12,0);
LAB_10028af45:
  lVar3 = *(long *)(lVar2 + 0x98);
  plVar4 = *(long **)(lVar2 + 0xa0);
  *(long **)(lVar3 + 8) = plVar4;
  *plVar4 = lVar3;
  plVar4 = *(long **)(param_1 + 0x3a0c8);
  *(long *)(param_1 + 0x3a0c8) = lVar2 + 0x98;
  *(long *)(lVar2 + 0x98) = param_1 + 0x3a0c0;
  *(long **)(lVar2 + 0xa0) = plVar4;
  *plVar4 = lVar2 + 0x98;
  return;
}

