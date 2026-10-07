
void FUN_10056ce40(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  
  if ((*(byte *)(param_1[5] + 8) & 0xfc) == 0) {
    (**(code **)(*(long *)param_1[4] + 0x100))();
  }
  lVar2 = param_1[4];
  iVar7 = *(int *)(lVar2 + 0x1278);
  if (iVar7 == 0) {
    FUN_1008e3970("","vdisk",0,"Error: async reqs sz is zero!");
    uVar10 = 0x70c;
  }
  else {
    if ((long *)*param_1 == param_1) {
      puVar3 = *(undefined8 **)(lVar2 + 0x1270);
      *(long **)(lVar2 + 0x1270) = param_1;
      *param_1 = lVar2 + 0x1268;
      param_1[1] = (long)puVar3;
      *puVar3 = param_1;
      iVar7 = iVar7 + -1;
      *(int *)(lVar2 + 0x1278) = iVar7;
      if (iVar7 != 0) {
        return;
      }
      uVar8 = *(uint *)(lVar2 + 0x1260);
      while (1 < uVar8) {
        plVar4 = *(long **)(lVar2 + 0x1248);
        lVar9 = 0;
        do {
          lVar5 = *(long *)((long)plVar4 + lVar9 + 0x10);
          plVar6 = *(long **)((long)plVar4 + lVar9 + 0x18);
          lVar1 = (long)plVar4 + lVar9 + 0x10;
          *(long **)(lVar5 + 8) = plVar6;
          *plVar6 = lVar5;
          *(long *)((long)plVar4 + lVar9 + 0x10) = lVar1;
          *(long *)((long)plVar4 + lVar9 + 0x18) = lVar1;
          lVar5 = *(long *)((long)plVar4 + lVar9 + 0x40);
          plVar6 = *(long **)((long)plVar4 + lVar9 + 0x48);
          lVar1 = (long)plVar4 + lVar9 + 0x40;
          *(long **)(lVar5 + 8) = plVar6;
          *plVar6 = lVar5;
          *(long *)((long)plVar4 + lVar9 + 0x40) = lVar1;
          *(long *)((long)plVar4 + lVar9 + 0x48) = lVar1;
          lVar9 = lVar9 + 0x60;
        } while (lVar9 != 0x1800);
        lVar9 = *plVar4;
        *(long *)(lVar9 + 8) = plVar4[1];
        *(long *)plVar4[1] = lVar9;
        *(long *)(lVar2 + 0x1258) = *(long *)(lVar2 + 0x1258) + -1;
        operator_delete(plVar4);
        lVar2 = param_1[4];
        uVar8 = *(int *)(lVar2 + 0x1260) - 1;
        *(uint *)(lVar2 + 0x1260) = uVar8;
      }
      return;
    }
    FUN_1008e3970("","vdisk",0,"Error: async req is in list!");
    uVar10 = 0x711;
  }
  FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",uVar10,
                "OnWaitCallback");
  return;
}

