
undefined1 FUN_1000d60e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  
  plVar1 = *(long **)(param_1 + 0x30);
  pcVar2 = *(code **)(*plVar1 + 0x20);
  uVar3 = FUN_10008dcf0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1940));
  cVar4 = (*pcVar2)(plVar1,param_2,param_3,uVar3);
  uVar3 = 1;
  if (cVar4 == '\0') {
    uVar3 = 0;
    FUN_1008e3970("","vm",0,"CSwapMem::CheckPhysAddr(%llu, %llu) failed",param_2,param_3);
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0x80020000;
      uVar3 = 0;
    }
  }
  return uVar3;
}

