
bool FUN_1002caf10(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  bool bVar7;
  
  plVar1 = (long *)(param_2 + 0x48);
  bVar7 = true;
  if (*(long **)(param_2 + 0x48) != plVar1) {
    iVar4 = *(int *)(param_2 + 8);
    if (iVar4 != 0) goto LAB_1002caf96;
    if ((*(byte *)(param_2 + 0x90) & 0x40) == 0) {
      if (*(int *)(param_2 + 0x58) < (int)(0x40U >> (*(byte *)(param_2 + 0x9c) & 0x1f))) {
        return false;
      }
      if (1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] Start stream %d",param_2 + 0xcf);
      }
    }
    while( true ) {
      iVar4 = *(int *)(param_2 + 8);
LAB_1002caf96:
      plVar5 = *(long **)(param_2 + 0x48);
      if (99 < iVar4 << (*(byte *)(param_2 + 0x9c) & 0x1f)) break;
      if (plVar5 == plVar1) goto LAB_1002cb072;
      if (((iVar4 != 0) && (*(uint *)((long)plVar5 + 0x494) < *(uint *)(plVar5 + 0x92))) &&
         (*(int *)(param_2 + 0x58) == 1)) break;
      if (1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] Feed stream %d/%d %d",param_2 + 0xcf,
                      *(undefined4 *)(param_2 + 0x58),iVar4,*(uint *)(plVar5 + 0x92));
      }
      lVar2 = *plVar5;
      plVar3 = (long *)plVar5[1];
      *(long **)(lVar2 + 8) = plVar3;
      *plVar3 = lVar2;
      *plVar5 = 0x112233;
      plVar5[1] = (long)&DAT_00445566;
      *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + -1;
      *(uint *)(plVar5 + 0x8e) = *(uint *)(plVar5 + 0x8e) | 4;
      FUN_1002d7ce0(param_2,plVar5);
    }
    if (plVar5 == plVar1) {
LAB_1002cb072:
      if (1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] End stream %d/%d",param_2 + 0xcf,
                      *(undefined4 *)(param_2 + 0x58),iVar4);
      }
    }
    else {
      iVar6 = *(int *)(param_2 + 0x58);
      if (100 < iVar6) {
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[%s] ISO output overflow %d/%d",param_2 + 0xcf,iVar6,iVar4);
          iVar6 = *(int *)(param_2 + 0x58);
        }
        do {
          plVar5 = (long *)0x0;
          if (*(long **)(param_2 + 0x48) != plVar1) {
            plVar5 = *(long **)(param_2 + 0x48);
          }
          lVar2 = *plVar5;
          plVar3 = (long *)plVar5[1];
          *(long **)(lVar2 + 8) = plVar3;
          *plVar3 = lVar2;
          *plVar5 = 0x112233;
          plVar5[1] = (long)&DAT_00445566;
          *(int *)(param_2 + 0x58) = iVar6 + -1;
          FUN_1002c8930();
          iVar6 = *(int *)(param_2 + 0x58);
        } while (100 < iVar6);
      }
    }
    bVar7 = (long *)*plVar1 == plVar1;
  }
  return bVar7;
}

