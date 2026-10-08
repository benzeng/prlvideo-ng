
bool FUN_1005d0ae0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  
  uVar2 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  cVar1 = FUN_1005b7970(uVar2);
  if (cVar1 == '\0') {
    bVar4 = false;
  }
  else {
    lVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    if (*(int *)(lVar3 + 0x38) == 0x80f) {
      lVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
      bVar4 = *(int *)(lVar3 + 0x50) != 4;
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}

