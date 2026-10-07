
void FUN_100298210(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  
  plVar1 = (long *)(param_1 + 0x137a0);
  plVar9 = *(long **)(param_1 + 0x137a0);
  if (plVar9 != plVar1) {
    plVar2 = (long *)(param_1 + 0x13770);
    do {
      if ((int)plVar9[-1] == 0) {
        FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","io->submitted",
                      "../Ahci/sata_hdd.cpp",0x550,"complete_cmd_list");
      }
      plVar7 = plVar9 + 2;
      while (plVar5 = (long *)plVar9[2], plVar5 != plVar7) {
        lVar6 = *plVar5;
        plVar4 = (long *)plVar5[1];
        *(long **)(lVar6 + 8) = plVar4;
        *plVar4 = lVar6;
        *plVar5 = (long)plVar5;
        plVar5[1] = (long)plVar5;
        iVar8 = *(int *)(param_1 + 0x13800);
        uVar3 = *(uint *)(plVar9 + -2);
        *(uint *)((long)plVar5 + -4) = uVar3;
        iVar8 = (int)plVar5[-1] * iVar8;
        if ((uVar3 & 0xc) != 0) {
          iVar8 = 0;
        }
        (*(code *)plVar5[7])(plVar5 + -3,iVar8);
      }
      plVar9[2] = (long)plVar7;
      plVar9[3] = (long)plVar7;
      lVar6 = *plVar9;
      plVar7 = (long *)plVar9[1];
      *(long **)(lVar6 + 8) = plVar7;
      *plVar7 = lVar6;
      lVar6 = *plVar2;
      *(long **)(lVar6 + 8) = plVar9;
      *plVar9 = lVar6;
      plVar9[1] = (long)plVar2;
      *plVar2 = (long)plVar9;
      plVar9 = (long *)*plVar1;
    } while (plVar9 != plVar1);
  }
  return;
}

