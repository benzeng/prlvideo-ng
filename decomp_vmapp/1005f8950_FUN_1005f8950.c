
int FUN_1005f8950(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = param_1 + 0xa8;
  cVar2 = FUN_1007ea210(param_1 + 0x62);
  if ((cVar2 != '\0') || (lVar4 = FUN_1005f87c0(param_1,lVar4,param_1 + 0x62), lVar4 != 0)) {
    for (lVar1 = *(long *)(lVar4 + 0x38); lVar1 != lVar4 + 0x30; lVar1 = *(long *)(lVar1 + 8)) {
      FUN_1005f8840(param_1,lVar1 + 0x10);
    }
  }
  iVar3 = FUN_1005f6cd0(param_1);
  if (iVar3 < 0) {
    FUN_1008e3970("","vdisk",0,"Cache file rebuild failed, err = 0x%X",iVar3);
  }
  return iVar3;
}

