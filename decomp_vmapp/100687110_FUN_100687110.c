
int FUN_100687110(long param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *local_38;
  
  pvVar5 = _valloc(0x1000000);
  if (pvVar5 == (void *)0x0) {
    FUN_1008e3970("","dimg",0,"Error allocating memory for filtering");
    iVar2 = -0x7ffffffe;
  }
  else {
    local_38 = (long *)0x0;
    iVar2 = FUN_100685960(param_2,*(uint *)(param_1 + 0x18) | 2,1,0,&local_38);
    if (iVar2 < 0) {
      FUN_1008e3970("","dimg",0,"Error creating file with code 0x%x",iVar2);
    }
    else {
      uVar8 = *(ulong *)(param_1 + 0x20);
      uVar10 = 0;
      uVar3 = (uint)(uVar8 >> 0xf);
      lVar11 = 0;
      lVar9 = 0;
      if (uVar3 != 0) {
        lVar11 = 0;
        lVar9 = 0;
        do {
          cVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x40))
                            (*(long **)(param_1 + 8),pvVar5,0x1000000,0,lVar11);
          if (cVar1 == '\0') {
            uVar4 = FUN_100768f60();
            pcVar6 = "Filter pread failed code %u";
            goto LAB_100687341;
          }
          iVar2 = (*param_3)(pvVar5,0x1000000,lVar9);
          if (iVar2 < 0) {
            pcVar6 = "Action returned 0x%x";
            goto LAB_1006873af;
          }
          cVar1 = (**(code **)(*local_38 + 0x48))(local_38,pvVar5,0x1000000,0,lVar11);
          if (cVar1 == '\0') {
            uVar4 = FUN_100768f60();
            pcVar6 = "Filter pwrite failed code %u";
            goto LAB_100687387;
          }
          lVar9 = lVar9 + 0x8000;
          lVar11 = lVar11 + 0x1000000;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar3);
        uVar8 = *(ulong *)(param_1 + 0x20);
      }
      if ((uVar8 & 0x7fff) != 0) {
        iVar7 = ((uint)uVar8 & 0x7fff) * *(int *)(param_1 + 0x38);
        cVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x40))
                          (*(long **)(param_1 + 8),pvVar5,iVar7,0,lVar11);
        if (cVar1 == '\0') {
          uVar4 = FUN_100768f60();
          pcVar6 = "Filter reminder pread failed code %u";
LAB_100687341:
          FUN_1008e3970("","dimg",0,pcVar6,uVar4);
          iVar2 = -0x7ffdefd7;
        }
        else {
          iVar2 = (*param_3)(pvVar5,iVar7,lVar9,param_4);
          if (iVar2 < 0) {
            pcVar6 = "Action reminder returned 0x%x";
LAB_1006873af:
            FUN_1008e3970("","dimg",0,pcVar6,iVar2);
          }
          else {
            cVar1 = (**(code **)(*local_38 + 0x48))(local_38,pvVar5,iVar7,0,lVar11);
            if (cVar1 == '\0') {
              uVar4 = FUN_100768f60();
              pcVar6 = "Filter reminder pwrite failed code %u";
LAB_100687387:
              FUN_1008e3970("","dimg",0,pcVar6,uVar4);
              iVar2 = -0x7ffdefd9;
            }
          }
        }
      }
      (**(code **)(*local_38 + 0x28))();
      (**(code **)(*local_38 + 0x10))();
    }
    _free(pvVar5);
  }
  return iVar2;
}

