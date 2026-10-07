
void FUN_10058fbd0(char *param_1,ulong param_2,ulong param_3,long param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
  if (uVar2 < param_3) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
    if ((param_2 < uVar2) && (param_5 != 0)) {
      piVar3 = (int *)(param_4 + 0xc);
      iVar4 = 0;
      do {
        if (*piVar3 == *(int *)(param_1 + 8)) {
          iVar1 = piVar3[-1];
          if (iVar1 == *(int *)(param_1 + 4)) {
            if (*param_1 == '\0') {
              piVar3[-1] = -1;
              piVar3[-3] = -1;
              piVar3[-2] = -1;
            }
            else {
              FUN_1008e3970("","vdisk",0,
                            "Error: found already deleted snap id %u for storage %u in group blocks: lba_start=%llu, lba_end=%llu, block_num=%u"
                            ,iVar1,*piVar3,param_2,param_3,iVar4);
              FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",
                            0x857,"DecreaseSnap");
            }
          }
          else if (*(int *)(param_1 + 4) < iVar1) {
            piVar3[-1] = iVar1 + -1;
          }
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 8;
      } while (param_5 != iVar4);
    }
  }
  return;
}

