
void FUN_100bf4a10(long *param_1,long *param_2)

{
  int iVar1;
  tm *ptVar2;
  size_t sVar3;
  undefined8 uVar4;
  size_t sVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 local_448 [16];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*param_1 != *param_2) {
    sVar5 = 0;
    if (((byte)DAT_102316088 & 1) == 0) {
      pcVar6 = local_438;
    }
    else {
      ptVar2 = _localtime(param_1 + 7);
      FUN_100c5d5b0(local_438,0x400,"[%02d:%02d:%02d] ",ptVar2->tm_hour,ptVar2->tm_min,
                    ptVar2->tm_sec);
      sVar5 = _strlen(local_438);
      pcVar6 = local_438 + sVar5;
    }
    FUN_100c5d5b0(pcVar6,(long)&local_38 - (long)pcVar6,"%5lu file=%s, line=%d, ",param_1[6],
                  param_1[2],(int)param_1[3]);
    sVar3 = _strlen(pcVar6);
    lVar7 = sVar3 + sVar5;
    pcVar6 = local_438 + lVar7;
    if (((byte)DAT_102316088 & 2) != 0) {
      uVar4 = FUN_100bf2c80(param_1 + 4);
      FUN_100c5d5b0(pcVar6,0x400 - lVar7,"thread=%lu, ",uVar4);
      sVar5 = _strlen(pcVar6);
      pcVar6 = local_438 + sVar5 + lVar7;
    }
    FUN_100c5d5b0(pcVar6,(long)&local_38 - (long)pcVar6,"number=%d, address=%08lX\n",(int)param_1[1]
                  ,*param_1);
    FUN_100c58a70(*param_2,local_438);
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    param_2[2] = param_2[2] + (long)(int)param_1[1];
    lVar7 = param_1[8];
    if (lVar7 != 0) {
      FUN_100bf2c60(local_448,lVar7);
      lVar8 = 0x3ff;
      lVar9 = 1;
      do {
        ___memset_chk(local_438,0x3e,lVar9,0x400);
        uVar4 = FUN_100bf2c80(lVar7);
        FUN_100c5d5b0(local_438 + lVar9,lVar8," thread=%lu, file=%s, line=%d, info=\"",uVar4,
                      *(undefined8 *)(lVar7 + 0x10),*(undefined4 *)(lVar7 + 0x18));
        sVar5 = _strlen(local_438);
        pcVar6 = *(char **)(lVar7 + 0x20);
        sVar3 = _strlen(pcVar6);
        iVar1 = (int)sVar5;
        if (0x7d - iVar1 < (int)sVar3) {
          _memcpy(local_438 + iVar1,pcVar6,(long)(0x7d - iVar1));
          iVar1 = 0x7d;
        }
        else {
          FUN_100c583f0(local_438 + iVar1,pcVar6,0x400 - (long)iVar1);
          sVar5 = _strlen(local_438);
          iVar1 = (int)sVar5;
        }
        FUN_100c5d5b0(local_438 + iVar1,0x400 - (long)iVar1,"\"\n");
        FUN_100c58a70(*param_2,local_438);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (lVar7 == 0) break;
        iVar1 = FUN_100bf2c50(lVar7,local_448);
        lVar8 = lVar8 + -1;
        lVar9 = lVar9 + 1;
      } while (iVar1 == 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

