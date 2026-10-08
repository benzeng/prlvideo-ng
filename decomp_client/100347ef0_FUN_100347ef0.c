
bool FUN_100347ef0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar4 = false;
  }
  else if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    bVar4 = false;
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    bVar4 = false;
  }
  else {
    cVar1 = FUN_10018ffd0();
    if (cVar1 == '\0') {
      bVar4 = false;
    }
    else {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      iVar2 = FUN_10018a9d0(uVar3);
      bVar4 = iVar2 == 0x30000005;
    }
  }
  return bVar4;
}

