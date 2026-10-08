
undefined8 FUN_100bdd400(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar5 = FUN_100bdd330();
  if ((lVar5 == 0) || (0 < local_20)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if (local_18 < 1) {
      lVar5 = *(long *)(param_1 + 0x88);
      uVar2 = *(short *)(lVar5 + 0x360) * 2;
      if (0x3c < uVar2) {
        uVar2 = 0x3c;
      }
      *(ushort *)(lVar5 + 0x360) = uVar2;
      if ((*(long *)(lVar5 + 0x350) == 0) && (*(int *)(lVar5 + 0x358) == 0)) {
        *(undefined2 *)(lVar5 + 0x360) = 1;
      }
      _gettimeofday((timeval *)(lVar5 + 0x350),(void *)0x0);
      plVar1 = (long *)(*(long *)(param_1 + 0x88) + 0x350);
      *plVar1 = *plVar1 + (ulong)*(ushort *)(*(long *)(param_1 + 0x88) + 0x360);
      uVar6 = FUN_100be39f0(param_1);
      FUN_100c58d60(uVar6,0x2d,0,*(long *)(param_1 + 0x88) + 0x350);
      iVar3 = FUN_100bdd810(param_1);
      uVar6 = 0xffffffff;
      if (-1 < iVar3) {
        lVar5 = *(long *)(param_1 + 0x88);
        uVar4 = *(int *)(lVar5 + 0x340) + 1;
        uVar7 = 1;
        if (uVar4 < 3) {
          uVar7 = uVar4;
        }
        *(uint *)(lVar5 + 0x340) = uVar7;
        if (*(int *)(param_1 + 0x29c) == 0) {
          if ((*(long *)(lVar5 + 0x350) == 0) && (*(int *)(lVar5 + 0x358) == 0)) {
            *(undefined2 *)(lVar5 + 0x360) = 1;
          }
          _gettimeofday((timeval *)(lVar5 + 0x350),(void *)0x0);
          plVar1 = (long *)(*(long *)(param_1 + 0x88) + 0x350);
          *plVar1 = *plVar1 + (ulong)*(ushort *)(*(long *)(param_1 + 0x88) + 0x360);
          uVar6 = FUN_100be39f0(param_1);
          FUN_100c58d60(uVar6,0x2d,0,*(long *)(param_1 + 0x88) + 0x350);
          uVar6 = FUN_100be13e0(param_1);
        }
        else {
          *(undefined4 *)(param_1 + 0x29c) = 0;
          uVar6 = FUN_100be1ad0(param_1);
        }
      }
    }
  }
  return uVar6;
}

