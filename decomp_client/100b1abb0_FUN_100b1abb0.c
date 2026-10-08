
int FUN_100b1abb0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long local_48;
  long *local_38;
  
  plVar2 = (long *)param_1[4];
  if (plVar2 == (long *)0x0) {
    FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL != si","DiskImageComp.cpp",
                  0xc41,"FilterImage");
  }
  iVar6 = FUN_100b0de30(*(long *)(*param_1 + -0x18) + (long)param_1,param_2);
  if (iVar6 < 0) {
    pcVar11 = "Image cloning failed (0x%x)";
LAB_100b1ae94:
    FUN_100df99c0("","dimg",0,pcVar11,iVar6);
    (**(code **)(*param_1 + 0xf0))(param_1);
    return iVar6;
  }
  cVar5 = (**(code **)(*param_1 + 0x1c8))(param_1);
  if (cVar5 == '\0') {
    return 0;
  }
  local_38 = (long *)0x0;
  iVar6 = FUN_100b0dfd0(param_2,*(uint *)(*(long *)(*param_1 + -0x18) + 0x18 + (long)param_1) | 2,0,
                        0,&local_38);
  if (iVar6 < 0) {
    pcVar11 = "Error opening cloned file with code 0x%x";
    goto LAB_100b1ae94;
  }
  pvVar8 = _valloc(0x1002000);
  if (pvVar8 == (void *)0x0) {
    FUN_100df99c0("","dimg",0,"Error allocating memory for filtering for Expanding disk");
    iVar6 = -0x7ffffffe;
  }
  else {
    lVar1 = (long)pvVar8 + 0x1001000;
    ___bzero(pvVar8,0x1002000);
    uVar3 = plVar2[8];
    cVar5 = (**(code **)(*local_38 + 0x40))(local_38,lVar1,0x1000,0,0);
    if (cVar5 == '\0') {
      FUN_100df99c0("","dimg",0,"Read table from destination failed");
      _free(pvVar8);
      iVar6 = -0x7ffdefd7;
    }
    else {
      (**(code **)(*param_1 + 0x100))(param_1);
      if ((*(uint *)(plVar2 + 0x10) & 1) != 0) {
        *(uint *)(plVar2 + 0x10) = *(uint *)(plVar2 + 0x10) & 0xfffffffe;
        iVar7 = (**(code **)(*plVar2 + 0x20))();
        if (iVar7 < 0) {
          FUN_100df99c0("","dimg",0,"SaveHasData() write failed. 0x%X");
        }
      }
      *(byte *)((long)pvVar8 + 0x1001034) = *(byte *)((long)pvVar8 + 0x1001034) & 0xfe;
      cVar5 = (**(code **)(*local_38 + 0x48))(local_38,lVar1,0x40,0,0);
      if (cVar5 == '\0') {
        pcVar11 = "Unable update dst header";
LAB_100b1af1b:
        FUN_100df99c0("","dimg",0,pcVar11);
        iVar6 = -0x7ffdefd9;
      }
      else if (uVar3 != 0) {
        lVar9 = (long)pvVar8 + 0x1000000;
        local_48 = 0;
        uVar12 = 0;
        uVar10 = uVar3;
        do {
          uVar13 = 0x1000;
          if (uVar10 < 0x1000) {
            uVar13 = uVar10 & 0xffffffff;
          }
          ___bzero(lVar9,0x1000);
          plVar4 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
          cVar5 = (**(code **)(*plVar4 + 0x40))(plVar4,lVar9,uVar13,0,uVar12);
          if (cVar5 == '\0') {
            FUN_100df99c0("","dimg",0,"Read table from source failed");
            iVar6 = -0x7ffdefd7;
            break;
          }
          iVar6 = (**(code **)(*param_1 + 0x1f8))
                            (param_1,local_38,pvVar8,lVar9,lVar1,local_48,param_3,param_4);
          if (iVar6 < 0) {
            FUN_100df99c0("","dimg",0,"Chunk processing failed 0x%x",iVar6);
            break;
          }
          cVar5 = (**(code **)(*local_38 + 0x48))(local_38,lVar1,uVar13,0,uVar12);
          if (cVar5 == '\0') {
            pcVar11 = "Write table to destination failed";
            goto LAB_100b1af1b;
          }
          local_48 = (ulong)((int)uVar13 * *(uint *)(plVar2 + 2) >> 2) + local_48;
          if (uVar12 == 0) {
            local_48 = local_48 + (ulong)*(uint *)(plVar2 + 2) * -0x10;
          }
          uVar12 = uVar12 + 0x1000;
          uVar10 = uVar10 - 0x1000;
        } while (uVar12 < uVar3);
      }
      (**(code **)(*param_1 + 0x108))(param_1);
      _free(pvVar8);
      if (-1 < iVar6) goto LAB_100b1af52;
    }
  }
  (**(code **)(*param_1 + 0xf0))(param_1);
LAB_100b1af52:
  (**(code **)(*local_38 + 0x28))();
  (**(code **)(*local_38 + 0x10))();
  return iVar6;
}

