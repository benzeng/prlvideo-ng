
void FUN_1003b0f40(long param_1,long param_2)

{
  char cVar1;
  byte *pbVar2;
  long lVar3;
  
  cVar1 = *(char *)(*(long *)(param_2 + 0x40) + 0x78);
  if (cVar1 == '\a') {
    pbVar2 = (byte *)((ulong)*(uint *)(*(long *)(param_2 + 0x40) + 0x68) * 0x40 +
                     *(long *)(param_1 + 0x10));
    if (*(char *)(param_2 + 0x4e) == '\x01') {
      *pbVar2 = *pbVar2 | 0x80;
    }
    else if (*(char *)(param_2 + 0x4e) == '\b') {
      *pbVar2 = *pbVar2 | 0x40;
      return;
    }
  }
  else if (cVar1 == '\x0e') {
    if (*(char *)(param_2 + 0x4e) == '\x01') {
      lVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x20))();
      *(byte *)(lVar3 + 0x1f0) = *(byte *)(lVar3 + 0x1f0) | 4;
      return;
    }
    if (*(char *)(param_2 + 0x4e) == '\b') {
      lVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x20))();
      *(byte *)(lVar3 + 0x1f0) = *(byte *)(lVar3 + 0x1f0) | 2;
      return;
    }
  }
  return;
}

