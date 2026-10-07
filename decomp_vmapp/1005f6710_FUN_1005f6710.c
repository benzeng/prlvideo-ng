
int FUN_1005f6710(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar2 = FUN_1005fa270();
  if ((-1 < iVar2) && (iVar2 = 0, *(char *)(param_1 + 0x60) != '\0')) {
    lVar1 = *(long *)(param_1 + 0x58);
    for (lVar4 = *(long *)(lVar1 + 0x1128); lVar4 != *(long *)(lVar1 + 0x1130); lVar4 = lVar4 + 8) {
      iVar3 = FUN_1005faa70(param_1,lVar4);
      if (iVar3 < 0) {
        FUN_1008e3970("","vdisk",0,"Adding storage failed 0x%x");
        iVar2 = FUN_1005fa420(param_1);
        FUN_1008e3970("","vdisk",0,"Initial rollback failed 0x%x",iVar2);
        return iVar2;
      }
    }
  }
  return iVar2;
}

