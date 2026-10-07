
undefined8 FUN_1005ab120(long *param_1,long *param_2,long param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  bool bVar17;
  long *local_68;
  ulong local_60;
  undefined4 local_58;
  code *local_50;
  ulong local_48;
  uint local_40;
  undefined4 uStack_3c;
  long local_38;
  
  uVar3 = (**(code **)(*param_1 + 0x348))();
  uVar4 = (**(code **)(*param_1 + 0x300))(param_1);
  uVar5 = (**(code **)(*param_1 + 0x330))(param_1);
  uVar6 = 0x80021011;
  if (uVar3 != 0) {
    plVar1 = param_2 + 1;
    uVar14 = 0;
    local_68 = plVar1;
    do {
      plVar7 = (long *)(**(code **)(*param_1 + 0x308))(param_1,uVar14);
      if (plVar7 == (long *)0x0) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","Stor","BlockGroup.cpp",0xe3
                      ,"FillStorages");
      }
      uVar8 = (**(code **)(*plVar7 + 0x18))(plVar7);
      uVar9 = (**(code **)(*plVar7 + 0x20))(plVar7);
      if (uVar5 <= uVar8) {
        FUN_1008e3970("","vdisk",0,"Error: storage start %llu is out of disk %llu",uVar8);
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","BlockGroup.cpp",0xea,
                      "FillStorages");
        return 0x80021011;
      }
      if ((uVar4 - 1 < uVar9) && (uVar5 < uVar9 - (uVar4 - 1))) {
        FUN_1008e3970("","vdisk",0,"Error: storage end %llu is out of disk %llu",uVar9);
        uVar9 = uVar5;
      }
      lVar13 = param_2[2];
      local_48 = uVar9;
      local_40 = uVar14;
      puVar10 = (undefined8 *)FUN_1005b5200(param_2,local_68,&local_38,&local_48);
      local_68 = (long *)*puVar10;
      if (local_68 == (long *)0x0) {
        local_68 = operator_new(0x30);
        local_68[5] = CONCAT44(uStack_3c,local_40);
        local_68[4] = local_48;
        local_68[1] = 0;
        *local_68 = 0;
        local_68[2] = local_38;
        *puVar10 = local_68;
        plVar7 = local_68;
        if (*(long *)*param_2 != 0) {
          *param_2 = *(long *)*param_2;
          plVar7 = (long *)*puVar10;
        }
        FUN_1000e8bb0(param_2[1],plVar7);
        lVar15 = param_2[2] + 1;
        param_2[2] = lVar15;
      }
      else {
        lVar15 = param_2[2];
      }
      if (lVar13 == lVar15) {
        FUN_1008e3970("","vdisk",0,"Error: duplicate storage end %llu",uVar9);
        return 0x80021011;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar3);
    uVar6 = 0;
    if (param_4 != 0) {
      lVar13 = 0;
      do {
        lVar15 = lVar13 * 0x40;
        *(long **)(param_3 + 0x10 + lVar15) = plVar1;
        *(long **)(param_3 + 0x18 + lVar15) = plVar1;
        if ((long *)*plVar1 != (long *)0x0) {
          uVar5 = (lVar13 + 1) * (ulong)uVar4 * 0x1000;
          plVar7 = (long *)*plVar1;
          plVar11 = plVar1;
          do {
            while (plVar12 = plVar7, (ulong)uVar4 * 0x1000 * lVar13 < (ulong)plVar12[4]) {
              plVar7 = (long *)*plVar12;
              plVar11 = plVar12;
              if ((long *)*plVar12 == (long *)0x0) goto LAB_1005ab3c3;
            }
            plVar2 = plVar12 + 1;
            plVar12 = plVar11;
            plVar7 = (long *)*plVar2;
          } while ((long *)*plVar2 != (long *)0x0);
LAB_1005ab3c3:
          if (plVar12 != plVar1) {
            plVar7 = (long *)(**(code **)(*param_1 + 0x308))(param_1,(int)plVar12[5]);
            uVar9 = (**(code **)(*plVar7 + 0x18))(plVar7);
            if (uVar9 < uVar5) {
              *(long **)(param_3 + 0x10 + lVar15) = plVar12;
              local_58 = 0xffffffff;
              local_50 = FUN_1005ab5a0;
              local_60 = uVar5;
              plVar11 = (long *)FUN_1005b53b0(plVar12,plVar1,&local_60,&local_50);
              plVar7 = plVar11;
              if (plVar11 != plVar1) {
                plVar12 = (long *)(**(code **)(*param_1 + 0x308))(param_1,(int)plVar11[5]);
                uVar9 = (**(code **)(*plVar12 + 0x18))(plVar12);
                if (uVar9 < uVar5) {
                  plVar12 = (long *)plVar11[1];
                  if ((long *)plVar11[1] == (long *)0x0) {
                    do {
                      plVar7 = (long *)plVar11[2];
                      bVar17 = (long *)*plVar7 != plVar11;
                      plVar11 = plVar7;
                    } while (bVar17);
                  }
                  else {
                    do {
                      plVar7 = plVar12;
                      plVar12 = (long *)*plVar7;
                    } while ((long *)*plVar7 != (long *)0x0);
                  }
                }
              }
              *(long **)(param_3 + 0x18 + lVar15) = plVar7;
            }
          }
        }
        uVar6 = 0;
        iVar16 = (int)lVar13;
        lVar13 = lVar13 + 1;
      } while (iVar16 != param_4 + -1);
    }
  }
  return uVar6;
}

