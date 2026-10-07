
int FUN_100692990(long *param_1,long *param_2,long param_3,long param_4,long param_5,long param_6,
                 code *param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong local_78;
  
  uVar4 = (**(code **)(*param_2 + 0x78))(param_2);
  if (uVar4 == 0xffffffffffffffff) {
    FUN_1008e3970("","dimg",0,"Failed to get size of cloned image");
    (**(code **)(*param_1 + 0xf0))(param_1);
    iVar3 = -0x7ffdef9c;
  }
  else {
    lVar5 = *(long *)(*param_1 + -0x18);
    lVar10 = *(long *)((long)param_1 + lVar5 + 0x58);
    lVar5 = (**(code **)(*(long *)((long)param_1 + lVar5) + 0x160))((long)param_1 + lVar5);
    if (lVar10 == lVar5) {
      lVar10 = (ulong)(param_6 == 0) << 4;
      uVar6 = (**(code **)(*(long *)(*(long *)(*param_1 + -0x18) + (long)param_1) + 0x160))();
      uVar7 = FUN_100697940(param_1[4]);
      iVar8 = 0;
      lVar5 = param_3;
      local_78 = uVar4;
      do {
        *(undefined4 *)(param_5 + lVar10 * 4) = 0;
        uVar9 = (ulong)*(uint *)(param_4 + lVar10 * 4);
        if (uVar9 != 0) {
          uVar9 = *(uint *)(param_1[4] + 0xc) * uVar9 *
                  *(long *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
          plVar1 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
          cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,lVar5,uVar7,0,uVar9);
          if (cVar2 == '\0') {
            FUN_1008e3970("","dimg",0,
                          "Read data from source failed at offset 0x%llx filesize 0x%llx",uVar9,
                          uVar6);
            if (uVar9 < uVar6) {
              (**(code **)(*param_1 + 0xf0))(param_1);
              return -0x7ffdefd7;
            }
            (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x1a0))
                      ((long)param_1 + *(long *)(*param_1 + -0x18));
          }
          else {
            iVar3 = (*param_7)(lVar5,uVar7 & 0xffffffff,param_6,param_8);
            if (iVar3 < 0) {
              FUN_1008e3970("","dimg",0,"Action returned error 0x%x");
              (**(code **)(*param_1 + 0xf0))();
              return iVar3;
            }
            *(int *)(param_5 + lVar10 * 4) =
                 (int)((uVar4 / *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1) &
                       0xffffffff) / (ulong)*(uint *)(param_1[4] + 0xc));
            uVar4 = uVar4 + (uVar7 & 0xffffffff);
            lVar5 = lVar5 + (uVar7 & 0xffffffff);
            iVar8 = (int)lVar5 - (int)param_3;
            if ((0xffffff < (uint)(iVar8 + (int)uVar7)) &&
               (cVar2 = (**(code **)(*param_2 + 0x48))(), lVar5 = param_3, local_78 = uVar4,
               cVar2 == '\0')) {
              FUN_1008e3970("","dimg",0,"Data write to destination failed.");
              lVar5 = *param_1;
              goto LAB_100692d32;
            }
          }
        }
        param_6 = param_6 + (ulong)*(uint *)(param_1[4] + 0x10);
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < 0x400);
      iVar3 = 0;
      if (iVar8 != 0) {
        cVar2 = (**(code **)(*param_2 + 0x48))(param_2,param_3,iVar8,0,local_78);
        iVar3 = 0;
        if (cVar2 == '\0') {
          FUN_1008e3970("","dimg",0,"Final data write to destination failed.");
          lVar5 = *param_1;
LAB_100692d32:
          (**(code **)(lVar5 + 0xf0))(param_1);
          iVar3 = -0x7ffdefd9;
        }
      }
    }
    else {
      FUN_1008e3970("","dimg",0,"Error: data area end [%llu] is not equal to file size [%llu]",
                    *(undefined8 *)(*(long *)(*param_1 + -0x18) + 0x58 + (long)param_1),uVar4);
      (**(code **)(*param_1 + 0xf0))(param_1);
      iVar3 = -0x7ffdefef;
    }
  }
  return iVar3;
}

