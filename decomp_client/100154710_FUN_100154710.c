
void FUN_100154710(long param_1,undefined1 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  FUN_100153430();
  lVar3 = *(long *)(param_1 + 0x10);
  iVar4 = *(int *)(lVar3 + 8);
  if (*(int *)(lVar3 + 0xc) != iVar4) {
    do {
      plVar1 = *(long **)(lVar3 + 0x10 + (long)iVar4 * 8);
      lVar2 = *plVar1;
      if (((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) && (lVar2 = plVar1[1], lVar2 != 0)) {
        FUN_100153200(param_1,lVar2,param_2);
        lVar3 = *(long *)(param_1 + 0x10);
      }
      iVar4 = *(int *)(lVar3 + 8);
    } while (*(int *)(lVar3 + 0xc) != iVar4);
  }
  FUN_100157480(param_1 + 0x10);
  return;
}

