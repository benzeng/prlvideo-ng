
uint FUN_10035db70(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  
  if ((param_2 != 0) && ((*(ushort *)(param_2 + 0xb0) & 1) == 0)) {
    lVar7 = *(long *)(param_1 + 0x38);
    uVar1 = *(uint *)(lVar7 + 0x9830);
    if (uVar1 != 0) {
      uVar2 = *(undefined4 *)(*(long *)(param_2 + 0x28) + (param_3 & 0xffffffff) * 0xc);
      iVar3 = *(int *)(param_2 + 0x10);
      iVar4 = *(int *)(*(long *)(param_2 + 0x28) + 4 + (param_3 & 0xffffffff) * 0xc);
      uVar6 = 0;
      while( true ) {
        cVar5 = FUN_1002ad170(lVar7,uVar6,uVar2,iVar3 * iVar4);
        if (cVar5 != '\0') {
          return uVar6;
        }
        uVar6 = uVar6 + 1;
        if (uVar1 <= uVar6) break;
        lVar7 = *(long *)(param_1 + 0x38);
      }
    }
  }
  return 0xffffffff;
}

