
void FUN_1002968c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  
  lVar1 = *(long *)(param_2 + 0x38);
  if ((*(byte *)(param_2 + 0x31) & 0x10) != 0) {
    FUN_1004033b0(param_1 + 0x137b8,param_2);
  }
  if (*(int *)(param_2 + 0x9c) == 0) {
    uVar4 = *(uint *)(param_2 + 0xc0);
    if ((uVar4 & 0xfc) == 0) goto LAB_100296932;
  }
  else {
    FUN_1008e3970("","LocalDevices",0,"BEWARE, restart request for ncq");
    *(undefined4 *)(param_2 + 0xc0) = 0xc;
    uVar4 = 0xc;
  }
  *(uint *)(lVar1 + 0x908) = *(uint *)(lVar1 + 0x908) | uVar4;
LAB_100296932:
  lVar2 = *(long *)(lVar1 + 0x918);
  plVar3 = *(long **)(lVar1 + 0x920);
  *(long **)(lVar2 + 8) = plVar3;
  *plVar3 = lVar2;
  plVar3 = *(long **)(param_1 + 0x137a8);
  *(long *)(param_1 + 0x137a8) = lVar1 + 0x918;
  *(long *)(lVar1 + 0x918) = param_1 + 0x137a0;
  *(long **)(lVar1 + 0x920) = plVar3;
  *plVar3 = lVar1 + 0x918;
  return;
}

