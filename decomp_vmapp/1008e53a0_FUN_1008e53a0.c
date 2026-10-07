
undefined1 FUN_1008e53a0(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long local_48;
  uint local_40;
  int local_34;
  
  iVar4 = (**(code **)(*param_2 + 0x20))(param_2);
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      local_48 = 0;
      local_40 = 0;
      cVar3 = (**(code **)(*param_2 + 0x28))(param_2,iVar4,&local_48,2);
      uVar2 = local_40;
      lVar1 = local_48;
      if (cVar3 == '\0') {
        return 0;
      }
      if ((local_48 != 0) && (local_40 != 0)) {
        uVar7 = 0;
        do {
          local_34 = 0;
          cVar3 = (**(code **)(**(long **)(*param_1 + 0x10) + 0x10))
                            (*(long **)(*param_1 + 0x10),uVar7 + lVar1,uVar2 - (int)uVar7,&local_34)
          ;
          if (cVar3 == '\0') {
            return 0;
          }
          uVar6 = (int)uVar7 + local_34;
          uVar7 = (ulong)uVar6;
        } while (uVar6 < uVar2);
      }
      iVar4 = iVar4 + 1;
      iVar5 = (**(code **)(*param_2 + 0x20))(param_2);
    } while (iVar4 < iVar5);
  }
  return 1;
}

