
undefined * FUN_1008e0a30(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return (undefined *)0x0;
  }
  if (param_2 == 0) {
    return (undefined *)0x0;
  }
  iVar1 = FUN_10084bf60(PTR_PTR_1011b4728,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_10084bf60(PTR_PTR_1011b4730,param_2);
    lVar2 = 0;
    if (iVar1 == 0) goto LAB_1008e0b93;
  }
  iVar1 = FUN_10084bf60(PTR_PTR_1011b4740,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_10084bf60(PTR_PTR_1011b4748,param_2);
    lVar2 = 1;
    if (iVar1 == 0) goto LAB_1008e0b93;
  }
  iVar1 = FUN_10084bf60(PTR_PTR_1011b4758,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_10084bf60(PTR_PTR_1011b4760,param_2);
    lVar2 = 2;
    if (iVar1 == 0) goto LAB_1008e0b93;
  }
  iVar1 = FUN_10084bf60(PTR_PTR_1011b4770,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_10084bf60(PTR_PTR_1011b4778,param_2);
    lVar2 = 3;
    if (iVar1 == 0) goto LAB_1008e0b93;
  }
  iVar1 = FUN_10084bf60(PTR_PTR_1011b4788,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_10084bf60(PTR_PTR_1011b4790,param_2);
    lVar2 = 4;
    if (iVar1 == 0) goto LAB_1008e0b93;
  }
  iVar1 = FUN_10084bf60(PTR_PTR_1011b47a0,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_10084bf60(PTR_PTR_1011b47a8,param_2);
    lVar2 = 5;
    if (iVar1 == 0) goto LAB_1008e0b93;
  }
  iVar1 = FUN_10084bf60(PTR_PTR_1011b47b8,param_1);
  if (iVar1 != 0) {
    return (undefined *)0x0;
  }
  iVar1 = FUN_10084bf60(PTR_PTR_1011b47c0,param_2);
  lVar2 = 6;
  if (iVar1 != 0) {
    return (undefined *)0x0;
  }
LAB_1008e0b93:
  return (&PTR_s_8192_1011b4720)[lVar2 * 3];
}

