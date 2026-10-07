
int FUN_1002d2000(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar2 = -1;
  if (*(long *)(param_1 + 0x1478) != 0) {
    lVar3 = FUN_1007d87f0();
    uVar4 = *(long *)(param_1 + 0x1478) - lVar3;
    if (uVar4 < 0xffffffffffe0c001) {
      if (3 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[XHC] ProcessFrame");
      }
      *(long *)(param_1 + 0x1478) = lVar3;
      local_28 = 0;
      uStack_20 = 0x9c0001000000;
      FUN_1002d20c0(param_1,0,&local_28,1,0);
      plVar1 = (long *)(*(long *)(param_1 + 0x14a0) + 0xf0);
      *plVar1 = *plVar1 + 1;
      iVar2 = 200000;
    }
    else {
      iVar2 = (int)uVar4 + 0x1f4000;
    }
  }
  return iVar2;
}

