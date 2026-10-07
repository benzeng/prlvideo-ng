
char FUN_1003aa940(long *param_1)

{
  char cVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  
  if ((*(byte *)((long)param_1 + 0x39) & 1) == 0) {
    if ((*(byte *)((long)param_1 + 0x35) & 0x10) != 0) {
      return '\b';
    }
    if (((*(byte *)((long)param_1 + 0x35) & 4) != 0) &&
       ((*(ushort *)(*param_1 + 0x54) & 0x2000) != 0)) {
      return '\b';
    }
  }
  lVar2 = FUN_1003a7de0(*(undefined2 *)(*param_1 + 0x4c));
  uVar4 = (ulong)((long)param_1 - *(long *)(*param_1 + 0x40)) >> 6;
  if (((*(ushort *)(lVar2 + 0x1c) & 0xf) <= (uint)uVar4) ||
     (cVar3 = *(char *)(*param_1 + 0x4e), cVar3 == '\0')) {
    cVar1 = *(char *)(lVar2 + 0x10 + (uVar4 & 0xffffffff) * 2);
    cVar3 = '\x0f';
    if (cVar1 != '\0') {
      cVar3 = cVar1;
    }
  }
  return cVar3;
}

