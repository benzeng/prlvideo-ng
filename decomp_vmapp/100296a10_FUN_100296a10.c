
void FUN_100296a10(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  lVar2 = param_1[7];
  if ((*(byte *)((long)param_1 + 0x31) & 0x10) != 0) {
    FUN_1004033b0(lVar1 + 0x137b8,param_1);
  }
  if (*(int *)((long)param_1 + 0x9c) == 0) {
    uVar5 = *(uint *)(param_1 + 0x18);
    if ((uVar5 & 0xfc) == 0) goto LAB_100296a8b;
  }
  else {
    FUN_1008e3970("","LocalDevices",0,"BEWARE, restart request for ncq");
    *(undefined4 *)(param_1 + 0x18) = 0xc;
    uVar5 = 0xc;
  }
  *(uint *)(lVar2 + 0x908) = *(uint *)(lVar2 + 0x908) | uVar5;
LAB_100296a8b:
  lVar3 = *(long *)(lVar2 + 0x918);
  plVar4 = *(long **)(lVar2 + 0x920);
  *(long **)(lVar3 + 8) = plVar4;
  *plVar4 = lVar3;
  plVar4 = *(long **)(lVar1 + 0x137a8);
  *(long *)(lVar1 + 0x137a8) = lVar2 + 0x918;
  *(long *)(lVar2 + 0x918) = lVar1 + 0x137a0;
  *(long **)(lVar2 + 0x920) = plVar4;
  *plVar4 = lVar2 + 0x918;
  return;
}

