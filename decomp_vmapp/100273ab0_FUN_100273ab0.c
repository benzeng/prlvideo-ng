
void FUN_100273ab0(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  uint uVar11;
  undefined8 *local_50;
  
  if (*(int *)(param_1 + 0x1b8) - 1U < 3) {
    uVar1 = *(undefined4 *)(param_1 + 0x1ec);
    uVar8 = FUN_1002eefa0(*(undefined8 *)(param_1 + 0x40));
    FUN_1007dc8d0(uVar8,param_1 + 0x198,uVar1);
  }
  local_50 = (undefined8 *)(param_1 + 0x40);
  bVar4 = false;
  do {
    uVar11 = 0xffffffff;
    do {
      while( true ) {
        while( true ) {
          uVar5 = uVar11;
          iVar6 = FUN_1002efb70(*local_50,1,uVar5);
          if (iVar6 == 3) {
            while (lVar9 = FUN_1002584f0(param_1 + 0x48), lVar9 != 0) {
              FUN_100273980(param_1,*(long *)(DAT_1011c3698 + 0x1938) + 0x3d828 +
                                    (ulong)*(uint *)(param_1 + 0x150) * 0x10);
              FUN_100258470(param_1 + 0x48,lVar9);
            }
          }
          else if (iVar6 == -0xfffc) {
            return;
          }
          if (!bVar4) break;
          bVar4 = true;
          uVar11 = uVar5;
          if (iVar6 == -0xfffd) {
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("","LocalDevices",2,"[Network %d] Unpause",
                            *(undefined4 *)(param_1 + 0x150));
            }
            plVar2 = *(long **)(param_1 + 0x188);
            if (plVar2 != (long *)0x0) {
              uVar11 = *(uint *)(*(long *)(param_1 + 0x160) + 0x10);
              if ((uVar11 & 7) == 0) {
                (**(code **)(*plVar2 + 0x38))();
              }
              else {
                (**(code **)(*plVar2 + 0x30))(plVar2,uVar11 >> 3 & 1);
              }
            }
            do {
              uVar11 = uVar5;
              iVar6 = FUN_100273760(param_1);
              uVar5 = 1000;
            } while (iVar6 != 0);
            bVar4 = false;
          }
        }
        bVar3 = false;
        do {
          bVar10 = bVar3;
          iVar7 = FUN_100273760(param_1);
          bVar3 = true;
        } while (iVar7 != 0);
        if (iVar6 == -0xfffe) break;
        uVar11 = 1000;
        if ((!bVar10) && (uVar11 = uVar5 * 2, 31999 < uVar5)) {
          uVar11 = 0xffffffff;
        }
      }
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","LocalDevices",2,"[Network %d] Pause",*(undefined4 *)(param_1 + 0x150));
      }
      bVar4 = true;
      uVar11 = 0xffffffff;
    } while (*(long **)(param_1 + 0x188) == (long *)0x0);
    (**(code **)(**(long **)(param_1 + 0x188) + 0x38))();
  } while( true );
}

