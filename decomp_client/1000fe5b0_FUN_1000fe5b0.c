
int FUN_1000fe5b0(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_1000e6b10(param_1);
    puVar3 = (uint *)*param_1;
  }
  lVar4 = *(long *)(puVar3 + 4);
  iVar7 = 0;
  if (lVar4 != 0) {
    iVar7 = 0;
    do {
      uVar1 = *param_2;
      lVar5 = 0;
      do {
        while( true ) {
          lVar6 = lVar4;
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 != uVar1) break;
          uVar2 = uVar1;
          if (param_2[1] <= *(uint *)(lVar6 + 0x1c)) goto LAB_1000fe622;
LAB_1000fe612:
          lVar4 = *(long *)(lVar6 + 0x10);
          if (*(long *)(lVar6 + 0x10) == 0) {
            if (lVar5 == 0) {
              return iVar7;
            }
            uVar2 = *(uint *)(lVar5 + 0x18);
            lVar6 = lVar5;
            goto LAB_1000fe63b;
          }
        }
        if (uVar2 < uVar1) goto LAB_1000fe612;
LAB_1000fe622:
        lVar4 = *(long *)(lVar6 + 8);
        lVar5 = lVar6;
      } while (*(long *)(lVar6 + 8) != 0);
LAB_1000fe63b:
      bVar8 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        bVar8 = param_2[1] < *(uint *)(lVar6 + 0x1c);
      }
      if (bVar8) {
        return iVar7;
      }
      FUN_1000ff220(*param_1);
      iVar7 = iVar7 + 1;
      lVar4 = *(long *)(*param_1 + 0x10);
    } while (lVar4 != 0);
  }
  return iVar7;
}

