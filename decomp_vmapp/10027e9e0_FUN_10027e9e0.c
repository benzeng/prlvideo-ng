
ushort FUN_10027e9e0(long param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  
  uVar4 = 0;
  if ((*(int *)(param_1 + 8) != 0) &&
     (((*(uint *)(param_1 + 0xc) & 0x1000000) == 0 ||
      (uVar4 = 1, *(short *)(param_1 + 0x2a) != *(short *)(param_1 + 0x28))))) {
    if ((*(uint *)(param_1 + 0xc) & 0x20000000) == 0) {
      uVar4 = ~**(ushort **)(param_1 + 0x18);
    }
    else {
      sVar2 = *(short *)(param_1 + 0x2c);
      sVar3 = *(short *)(*(long *)(param_1 + 0x20) + 2);
      *(short *)(param_1 + 0x2c) = sVar3;
      cVar1 = *(char *)(param_1 + 0x2e);
      *(undefined1 *)(param_1 + 0x2e) = 1;
      if (cVar1 == '\0') {
        return 1;
      }
      uVar4 = -(ushort)((ushort)(~*(ushort *)
                                   (*(long *)(param_1 + 0x18) + 4 +
                                   (ulong)*(uint *)(param_1 + 4) * 2) + sVar3) <
                       (ushort)(sVar3 - sVar2));
    }
    uVar4 = uVar4 & 1;
  }
  return uVar4;
}

