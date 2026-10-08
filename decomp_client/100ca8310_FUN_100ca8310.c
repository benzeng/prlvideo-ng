
undefined8 FUN_100ca8310(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_858;
  size_t local_840;
  undefined1 local_838 [2048];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  pcVar1 = (char *)param_1[1];
  iVar3 = _strcmp(pcVar1,"language");
  if (iVar3 == 0) {
    if (*param_2 == 0) {
      lVar8 = FUN_100bf7360(param_1[2],0);
      *param_2 = lVar8;
      uVar11 = 1;
      lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
      if (lVar8 == 0) {
        FUN_100c62ee0(0x22,0x96,0x6e,"v3_pci.c",0x5b);
        FUN_100c642a0(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
        uVar11 = 0;
      }
      goto LAB_100ca8994;
    }
    uVar11 = 0x9b;
    uVar10 = 0x55;
LAB_100ca845f:
    FUN_100c62ee0(0x22,0x96,uVar11,"v3_pci.c",uVar10);
    uVar11 = 0;
    FUN_100c642a0(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
LAB_100ca8497:
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
    goto LAB_100ca8994;
  }
  iVar3 = _strcmp(pcVar1,"pathlen");
  if (iVar3 == 0) {
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (*param_3 == 0) {
      iVar3 = FUN_100c9f5e0(param_1,param_3);
      uVar11 = 1;
      if (iVar3 != 0) goto LAB_100ca8994;
      uVar11 = 0x9c;
      uVar10 = 0x68;
    }
    else {
      uVar11 = 0x9d;
      uVar10 = 0x62;
    }
    FUN_100c62ee0(0x22,0x96,uVar11,"v3_pci.c",uVar10);
    uVar11 = 0;
    FUN_100c642a0(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
    goto LAB_100ca8994;
  }
  iVar3 = _strcmp(pcVar1,"policy");
  uVar11 = 1;
  if (iVar3 != 0) goto LAB_100ca8497;
  piVar4 = (int *)*param_4;
  bVar2 = false;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_100c83900();
    *param_4 = (long)piVar4;
    if (piVar4 == (int *)0x0) {
      uVar11 = 0x41;
      uVar10 = 0x72;
      goto LAB_100ca845f;
    }
    bVar2 = true;
  }
  pcVar1 = (char *)param_1[2];
  iVar3 = _strncmp(pcVar1,"hex:",4);
  if (iVar3 == 0) {
    pvVar5 = (void *)FUN_100c9fc70(pcVar1 + 4,&local_840);
    if (pvVar5 == (void *)0x0) {
      uVar11 = 0x71;
      uVar10 = 0x7e;
    }
    else {
      lVar7 = FUN_100bf36a0(*(undefined8 *)((int *)*param_4 + 2),
                            (int)local_840 + 1 + *(int *)*param_4,"v3_pci.c",0x84);
      if (lVar7 != 0) {
        *(long *)(*param_4 + 8) = lVar7;
        _memcpy((void *)((long)*(int *)*param_4 + *(long *)((int *)*param_4 + 2)),pvVar5,local_840);
        piVar4 = (int *)*param_4;
        iVar3 = *piVar4 + (int)local_840;
        *piVar4 = iVar3;
        *(undefined1 *)(*(long *)(piVar4 + 2) + (long)iVar3) = 0;
        FUN_100bf3910(pvVar5);
        goto LAB_100ca8497;
      }
      FUN_100bf3910(pvVar5);
      *(undefined8 *)(*param_4 + 8) = 0;
      *(undefined4 *)*param_4 = 0;
      uVar11 = 0x41;
      uVar10 = 0x93;
    }
LAB_100ca8931:
    FUN_100c62ee0(0x22,0x96,uVar11,"v3_pci.c",uVar10);
    FUN_100c642a0(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  else {
    iVar3 = _strncmp(pcVar1,"file:",5);
    if (iVar3 != 0) {
      iVar3 = _strncmp(pcVar1,"text:",5);
      if (iVar3 == 0) {
        sVar6 = _strlen(pcVar1 + 5);
        local_840 = sVar6;
        lVar7 = FUN_100bf36a0(*(undefined8 *)(piVar4 + 2),(int)sVar6 + 1 + *piVar4,"v3_pci.c",0xbb);
        if (lVar7 != 0) {
          *(long *)(*param_4 + 8) = lVar7;
          _memcpy((void *)((long)*(int *)*param_4 + *(long *)((int *)*param_4 + 2)),
                  (void *)(param_1[2] + 5),sVar6);
          piVar4 = (int *)*param_4;
          iVar3 = *piVar4 + (int)sVar6;
          *piVar4 = iVar3;
          *(undefined1 *)(*(long *)(piVar4 + 2) + (long)iVar3) = 0;
          goto LAB_100ca8497;
        }
        *(undefined8 *)(*param_4 + 8) = 0;
        *(undefined4 *)*param_4 = 0;
        uVar11 = 0x41;
        uVar10 = 0xc9;
      }
      else {
        uVar11 = 0x98;
        uVar10 = 0xcf;
      }
      goto LAB_100ca8931;
    }
    lVar7 = FUN_100c59dd0(pcVar1 + 5,"r");
    if (lVar7 == 0) {
      uVar11 = 0x20;
      uVar10 = 0x9d;
      goto LAB_100ca8931;
    }
    lVar8 = 0;
    local_858 = 0;
    do {
      while( true ) {
        iVar3 = FUN_100c588a0(lVar7,local_838,0x800);
        if (iVar3 < 1) break;
        lVar8 = FUN_100bf36a0(*(undefined8 *)((int *)*param_4 + 2),iVar3 + 1 + *(int *)*param_4,
                              "v3_pci.c",0xa7);
        lVar9 = local_858;
        if (lVar8 == 0) goto LAB_100ca8889;
        *(long *)(*param_4 + 8) = lVar8;
        _memcpy((void *)((long)*(int *)*param_4 + *(long *)((int *)*param_4 + 2)),local_838,
                (long)iVar3);
        piVar4 = (int *)*param_4;
        lVar9 = (long)*piVar4 + (long)iVar3;
        *piVar4 = (int)lVar9;
        *(undefined1 *)(*(long *)(piVar4 + 2) + lVar9) = 0;
      }
      if (iVar3 != 0) {
        FUN_100c59480(lVar7);
        uVar11 = 0x20;
        uVar10 = 0xb4;
        goto LAB_100ca8931;
      }
      iVar3 = FUN_100c58820(lVar7,8);
      lVar9 = lVar8;
    } while (iVar3 != 0);
LAB_100ca8889:
    local_858 = lVar9;
    FUN_100c59480(lVar7);
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (local_858 != 0) goto LAB_100ca8994;
    FUN_100c62ee0(0x22,0x96,0x41,"v3_pci.c",0xd4);
    FUN_100c642a0(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
  }
  uVar11 = 0;
  if (bVar2) {
    FUN_100c83920(*param_4);
    *param_4 = 0;
  }
LAB_100ca8994:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

