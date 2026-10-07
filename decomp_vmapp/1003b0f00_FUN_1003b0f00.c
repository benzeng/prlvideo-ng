
void FUN_1003b0f00(long param_1,long param_2)

{
  ushort *puVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = *(char *)(*(long *)(param_2 + 0x40) + 0x78);
  if (cVar2 == '\a') {
    puVar1 = (ushort *)
             (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(*(long *)(param_2 + 0x40) + 0x68) * 0x40)
    ;
    *puVar1 = *puVar1 | 0x20;
  }
  else if (cVar2 == '\x0e') {
    lVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x20))();
    *(byte *)(lVar3 + 0x1f0) = *(byte *)(lVar3 + 0x1f0) | 1;
    return;
  }
  return;
}

