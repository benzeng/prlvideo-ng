
int FUN_10060e670(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_2;
  iVar1 = *(int *)(lVar5 + 8);
  if (*(int *)(lVar5 + 0xc) == iVar1) {
    FUN_1008e3970("","crypt",0,"Empty set of files sent to FilesEncryption");
    iVar3 = -0x7ffffffd;
  }
  else {
    iVar3 = 0;
    if (iVar1 != *(int *)(lVar5 + 0xc)) {
      lVar2 = lVar5 + 0x18 + (long)iVar1 * 8;
      lVar5 = lVar5 + 0x10 + (long)iVar1 * 8;
      do {
        lVar4 = lVar2;
        iVar3 = (**(code **)(*param_1 + 0xb0))(param_1,lVar5);
        if (iVar3 < 0) break;
        lVar2 = lVar4 + 8;
        lVar5 = lVar4;
      } while (lVar4 != *param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8);
      if (iVar3 < 0) {
        FUN_1008e3970("","crypt",0,"Error adding entry 0x%x",iVar3);
      }
    }
  }
  return iVar3;
}

