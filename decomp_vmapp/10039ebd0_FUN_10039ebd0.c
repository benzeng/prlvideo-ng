
void FUN_10039ebd0(undefined8 param_1,uint param_2,int param_3,long param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint local_48 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar4 = param_2 >> 0x10 & 3;
  local_48[0] = uVar4;
  local_48[1] = param_2 >> 0x12 & 3;
  local_48[2] = param_2 >> 0x14 & 3;
  local_48[3] = param_2 >> 0x16 & 3;
  if ((((local_48[3] != 3) || (uVar4 != 0)) || (local_48[1] != 1)) || (local_48[2] != 2)) {
    if (param_3 == 1) {
      iVar1 = 4;
      do {
        iVar2 = iVar1;
        if (iVar2 == 1) {
          FUN_10038e8e0(param_1,"%c",0x2e);
          iVar2 = 1;
          goto LAB_10039ecb7;
        }
        iVar1 = iVar2 + -1;
      } while (local_48[3] == local_48[iVar2 - 2]);
      FUN_10038e8e0(param_1,"%c",0x2e);
      if (iVar2 == 0) goto LAB_10039ed0e;
    }
    else {
      FUN_10038e8e0(param_1,"%c",0x2e);
      iVar2 = 4;
    }
LAB_10039ecb7:
    FUN_10038e8e0(param_1,"%c",(int)*(char *)(param_4 + (ulong)uVar4));
    if (iVar2 != 1) {
      iVar2 = iVar2 + -1;
      puVar3 = local_48;
      do {
        puVar3 = puVar3 + 1;
        FUN_10038e8e0(param_1,"%c",(int)*(char *)(param_4 + (ulong)*puVar3));
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
LAB_10039ed0e:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

