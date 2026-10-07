
undefined8 FUN_1008b8c40(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x40);
  iVar2 = FUN_100885600(*(undefined8 *)(param_1 + 0xa0));
  iVar10 = iVar2 + -1;
  *(int *)(param_1 + 0xb4) = iVar10;
  plVar4 = (long *)FUN_100885620(*(undefined8 *)(param_1 + 0xa0),iVar10);
  iVar3 = (**(code **)(param_1 + 0x50))(param_1,plVar4,plVar4);
  plVar6 = plVar4;
  if (iVar3 == 0) {
    if (iVar2 < 2) {
      *(undefined4 *)(param_1 + 0xb8) = 0x15;
      *(long **)(param_1 + 0xc0) = plVar4;
                    /* WARNING: Could not recover jumptable at 0x0001008b8ccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)(0,param_1);
      return uVar5;
    }
    iVar10 = iVar2 + -2;
    *(int *)(param_1 + 0xb4) = iVar10;
    plVar6 = (long *)FUN_100885620(*(undefined8 *)(param_1 + 0xa0),iVar10);
  }
  do {
    plVar7 = plVar6;
    if (plVar7 == plVar4) {
      do {
        if (iVar10 < 0) {
          return 1;
        }
        *(int *)(param_1 + 0xb4) = iVar10;
        if (((int)plVar7[3] == 0) && ((*(byte *)(*(long *)(param_1 + 0x28) + 0x19) & 0x40) != 0)) {
          lVar8 = FUN_1008b7420(plVar7);
          if (lVar8 == 0) {
            *(undefined4 *)(param_1 + 0xb8) = 6;
            *(long **)(param_1 + 0xc0) = plVar7;
            iVar2 = (*UNRECOVERED_JUMPTABLE)(0,param_1);
            if (iVar2 == 0) {
              return 0;
            }
          }
          else {
            iVar2 = FUN_1008bebd0(plVar7,lVar8);
            if (iVar2 < 1) {
              *(undefined4 *)(param_1 + 0xb8) = 7;
              *(long **)(param_1 + 0xc0) = plVar7;
              iVar2 = (*UNRECOVERED_JUMPTABLE)(0,param_1);
              if (iVar2 == 0) goto LAB_1008b9055;
            }
          }
          FUN_1008924e0(lVar8);
        }
        *(undefined4 *)(plVar7 + 3) = 1;
        uVar9 = *(long *)(param_1 + 0x28) + 8U &
                (*(long *)(*(long *)(param_1 + 0x28) + 0x18) << 0x3e) >> 0x3f;
        iVar2 = FUN_1008b9080(**(undefined8 **)(*plVar7 + 0x20),uVar9);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0xb8) = 0xd;
LAB_1008b8fbb:
          *(long **)(param_1 + 0xc0) = plVar7;
          iVar2 = (**(code **)(param_1 + 0x40))(0,param_1);
          if (iVar2 == 0) {
            return 0;
          }
        }
        else if (0 < iVar2) {
          *(undefined4 *)(param_1 + 0xb8) = 9;
          goto LAB_1008b8fbb;
        }
        iVar2 = FUN_1008b9080(*(undefined8 *)(*(long *)(*plVar7 + 0x20) + 8),uVar9);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0xb8) = 0xe;
LAB_1008b900b:
          *(long **)(param_1 + 0xc0) = plVar7;
          iVar2 = (**(code **)(param_1 + 0x40))(0,param_1);
          if (iVar2 == 0) {
            return 0;
          }
        }
        else if (iVar2 < 0) {
          *(undefined4 *)(param_1 + 0xb8) = 10;
          goto LAB_1008b900b;
        }
        *(long **)(param_1 + 200) = plVar7;
        *(long **)(param_1 + 0xc0) = plVar7;
        iVar2 = (*UNRECOVERED_JUMPTABLE)(1,param_1);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = iVar10 + -1;
        bVar1 = iVar10 < 1;
        iVar10 = iVar2;
      } while (bVar1);
    }
    else {
      do {
        if (iVar10 < 0) {
          return 1;
        }
        *(int *)(param_1 + 0xb4) = iVar10;
        if ((int)plVar7[3] == 0) {
          lVar8 = FUN_1008b7420(plVar4);
          if (lVar8 == 0) {
            *(undefined4 *)(param_1 + 0xb8) = 6;
            *(long **)(param_1 + 0xc0) = plVar4;
            iVar2 = (*UNRECOVERED_JUMPTABLE)(0,param_1);
            if (iVar2 == 0) {
              return 0;
            }
          }
          else {
            iVar2 = FUN_1008bebd0(plVar7,lVar8);
            if (iVar2 < 1) {
              *(undefined4 *)(param_1 + 0xb8) = 7;
              *(long **)(param_1 + 0xc0) = plVar7;
              iVar2 = (*UNRECOVERED_JUMPTABLE)(0,param_1);
              if (iVar2 == 0) {
LAB_1008b9055:
                FUN_1008924e0(lVar8);
                return 0;
              }
            }
          }
          FUN_1008924e0(lVar8);
        }
        *(undefined4 *)(plVar7 + 3) = 1;
        uVar9 = *(long *)(param_1 + 0x28) + 8U &
                (*(long *)(*(long *)(param_1 + 0x28) + 0x18) << 0x3e) >> 0x3f;
        iVar2 = FUN_1008b9080(**(undefined8 **)(*plVar7 + 0x20),uVar9);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0xb8) = 0xd;
LAB_1008b8e0b:
          *(long **)(param_1 + 0xc0) = plVar7;
          iVar2 = (**(code **)(param_1 + 0x40))(0,param_1);
          if (iVar2 == 0) {
            return 0;
          }
        }
        else if (0 < iVar2) {
          *(undefined4 *)(param_1 + 0xb8) = 9;
          goto LAB_1008b8e0b;
        }
        iVar2 = FUN_1008b9080(*(undefined8 *)(*(long *)(*plVar7 + 0x20) + 8),uVar9);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0xb8) = 0xe;
LAB_1008b8e5b:
          *(long **)(param_1 + 0xc0) = plVar7;
          iVar2 = (**(code **)(param_1 + 0x40))(0,param_1);
          if (iVar2 == 0) {
            return 0;
          }
        }
        else if (iVar2 < 0) {
          *(undefined4 *)(param_1 + 0xb8) = 10;
          goto LAB_1008b8e5b;
        }
        *(long **)(param_1 + 200) = plVar4;
        *(long **)(param_1 + 0xc0) = plVar7;
        iVar2 = (*UNRECOVERED_JUMPTABLE)(1,param_1);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = iVar10 + -1;
        bVar1 = iVar10 < 1;
        iVar10 = iVar2;
      } while (bVar1);
    }
    plVar6 = (long *)FUN_100885620(*(undefined8 *)(param_1 + 0xa0),iVar10);
    plVar4 = plVar7;
  } while( true );
}

