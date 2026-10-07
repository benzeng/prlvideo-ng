
ulong FUN_100691f10(long *param_1,code *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  char local_35;
  undefined4 local_34;
  
  lVar6 = param_1[4];
  if (lVar6 == 0) {
    FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL != si","DiskImageComp.cpp",
                  0xb55,"ProcessBAT");
  }
  uVar5 = *(ulong *)(lVar6 + 0x40);
  local_34 = 0;
  local_35 = '\0';
  pvVar4 = _valloc(0x100000);
  if (pvVar4 == (void *)0x0) {
    FUN_1008e3970("","dimg",0,"Memory allocation failed for BAT reading.");
    uVar10 = 0x80000002;
  }
  else {
    uVar10 = 0;
    if (uVar5 != 0) {
      uVar9 = 0x100000;
      lVar6 = 0;
      uVar10 = 0x10;
      iVar7 = 0;
      do {
        uVar3 = (uint)uVar5;
        if (uVar9 <= uVar5) {
          uVar3 = uVar9;
        }
        uVar9 = uVar3;
        ___bzero(pvVar4,0x100000);
        plVar1 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
        cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,pvVar4,uVar9,&local_34,lVar6);
        if (cVar2 == '\0') {
          FUN_1008e3970("","dimg",0,"Failed to read BAT at offset %llu and size %u",lVar6,uVar9);
          uVar10 = 0x80021029;
          break;
        }
        uVar8 = (uVar9 >> 2) - uVar10;
        uVar3 = (*param_2)(param_1,iVar7,(void *)((long)pvVar4 + uVar10 * 4),uVar8 & 0xffffffff,
                           &local_35,param_3);
        uVar10 = (ulong)uVar3;
        if ((int)uVar3 < 0) {
          FUN_1008e3970("","dimg",0,"BAT processing function return error 0x%x",uVar10);
          break;
        }
        if ((local_35 != '\0') &&
           (plVar1 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1),
           cVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,pvVar4,local_34,0,lVar6), cVar2 == '\0')) {
          FUN_1008e3970("","dimg",0,"Failed to read BAT at offset %llu and size %u",lVar6,uVar9);
          uVar10 = 0x80021027;
          break;
        }
        lVar6 = lVar6 + (ulong)uVar9;
        iVar7 = (int)uVar8 + iVar7;
        uVar10 = 0;
        uVar5 = uVar5 - uVar9;
      } while (uVar5 != 0);
    }
    _free(pvVar4);
  }
  return uVar10;
}

