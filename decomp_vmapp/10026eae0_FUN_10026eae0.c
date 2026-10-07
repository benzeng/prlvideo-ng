
void FUN_10026eae0(long param_1)

{
  long lVar1;
  int iVar2;
  
  if ((*(long *)(param_1 + 0x1278) != 0) &&
     ((*(uint *)(*(long *)(param_1 + 0x1278) + 0x10) & 1) != 0)) {
    lVar1 = param_1 + 0xa48;
    FUN_1003fea50(lVar1);
    do {
      FUN_1003fea80(lVar1,param_1 + 0x68);
      iVar2 = FUN_1003fea50(lVar1);
    } while (iVar2 != 0);
  }
  return;
}

