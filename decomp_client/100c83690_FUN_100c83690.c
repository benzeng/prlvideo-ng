
ulong * FUN_100c83690(long *param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  if ((*param_2 & 0x300) != 0) {
    uVar1 = param_2[4];
    puVar4 = (undefined8 *)(*param_1 + *(long *)(uVar1 + 8));
    if (puVar4 == (undefined8 *)0x0) {
      param_2 = *(ulong **)(uVar1 + 0x30);
    }
    else {
      if ((*param_2 & 0x100) == 0) {
        lVar3 = FUN_100c76990();
      }
      else {
        iVar2 = FUN_100bf7220(*puVar4);
        lVar3 = (long)iVar2;
      }
      if (0 < *(long *)(uVar1 + 0x20)) {
        plVar6 = *(long **)(uVar1 + 0x18);
        lVar5 = 0;
        do {
          if (*plVar6 == lVar3) {
            return (ulong *)(plVar6 + 1);
          }
          lVar5 = lVar5 + 1;
          plVar6 = plVar6 + 6;
        } while (lVar5 < *(long *)(uVar1 + 0x20));
      }
      param_2 = *(ulong **)(uVar1 + 0x28);
    }
    if ((param_2 == (ulong *)0x0) && (param_2 = (ulong *)0x0, param_3 != 0)) {
      FUN_100c62ee0(0xd,0x6e,0xa4,"tasn_utl.c",0x111);
      param_2 = (ulong *)0x0;
    }
  }
  return param_2;
}

