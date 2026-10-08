
int FUN_10021c600(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_10024a1e0();
  if (-1 < iVar2) {
    iVar2 = 0;
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar1 = FUN_10018c770(uVar3);
    if (cVar1 != '\0') {
      iVar2 = -0x7ffffff7;
    }
  }
  return iVar2;
}

