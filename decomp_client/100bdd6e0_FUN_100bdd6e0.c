
void FUN_100bdd6e0(long param_1)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x88);
  uVar3 = *(short *)(lVar2 + 0x360) * 2;
  if (0x3c < uVar3) {
    uVar3 = 0x3c;
  }
  *(ushort *)(lVar2 + 0x360) = uVar3;
  if ((*(long *)(lVar2 + 0x350) == 0) && (*(int *)(lVar2 + 0x358) == 0)) {
    *(undefined2 *)(lVar2 + 0x360) = 1;
  }
  _gettimeofday((timeval *)(lVar2 + 0x350),(void *)0x0);
  plVar1 = (long *)(*(long *)(param_1 + 0x88) + 0x350);
  *plVar1 = *plVar1 + (ulong)*(ushort *)(*(long *)(param_1 + 0x88) + 0x360);
  uVar4 = FUN_100be39f0(param_1);
  FUN_100c58d60(uVar4,0x2d,0,*(long *)(param_1 + 0x88) + 0x350);
  return;
}

