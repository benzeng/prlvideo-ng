
ulong FUN_100ae61c0(long param_1,int *param_2)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  if (0 < (long)*(int *)(lVar1 + 4)) {
    piVar3 = (int *)(lVar1 + 0x1c + *(long *)(lVar1 + 0x10));
    uVar2 = 0;
    do {
      if ((((piVar3[-1] <= *param_2) &&
           (*param_2 <= (int)((uint)*(ushort *)(piVar3 + -6) + piVar3[-1]))) &&
          (*piVar3 <= param_2[1])) &&
         (param_2[1] <= (int)((uint)*(ushort *)((long)piVar3 + -0x16) + *piVar3))) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 8;
    } while ((long)uVar2 < (long)*(int *)(lVar1 + 4));
  }
  return 0xffffffff;
}

