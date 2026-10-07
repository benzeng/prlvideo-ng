
undefined8 FUN_10071ee90(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 local_4c8 [4];
  ushort local_4c4;
  undefined1 local_438 [1024];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar5;
  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) {
    uVar8 = FUN_10071e690(0xfffffffd,0);
  }
  else {
    lVar4 = _opendir_INODE64(param_2);
    if (lVar4 == 0) {
      piVar7 = ___error();
      pcVar9 = _strerror(*piVar7);
      uVar8 = FUN_10071e690(0xfffffffc,"can\'t open directory %s - %s",param_2,pcVar9);
    }
    else {
      param_1[1] = param_1;
      *param_1 = param_1;
      lVar5 = _readdir_INODE64(lVar4);
      if (lVar5 != 0) {
        do {
          pcVar9 = (char *)(lVar5 + 0x15);
          iVar3 = _strcmp(pcVar9,"..");
          if ((iVar3 != 0) && (iVar3 = _strcmp(pcVar9,"."), iVar3 != 0)) {
            ___snprintf_chk(local_438,0x400,0,0x400,"%s/%s",param_2,pcVar9);
            iVar3 = _stat_INODE64(local_438,local_4c8);
            if (iVar3 == 0) {
              switch(param_3) {
              case 0:
switchD_10071efaf_caseD_0:
                puVar6 = _malloc(0x20);
                if (puVar6 == (undefined8 *)0x0) {
                  puVar6 = (undefined8 *)*param_1;
                  while (puVar6 != param_1) {
                    _free((void *)puVar6[3]);
                    puVar1 = (undefined8 *)*puVar6;
                    _free(puVar6);
                    puVar6 = puVar1;
                  }
                  param_1[1] = param_1;
                  *param_1 = param_1;
                }
                else {
                  puVar6[3] = 0;
                  puVar6[2] = 0;
                  puVar6[1] = 0;
                  *puVar6 = 0;
                  *(undefined4 *)(puVar6 + 2) = param_3;
                  pcVar9 = _strdup(pcVar9);
                  puVar6[3] = pcVar9;
                  if (pcVar9 != (char *)0x0) {
                    puVar1 = (undefined8 *)param_1[1];
                    puVar6[1] = puVar1;
                    *puVar6 = param_1;
                    *puVar1 = puVar6;
                    param_1[1] = puVar6;
                    break;
                  }
                  puVar1 = (undefined8 *)*param_1;
                  while (puVar1 != param_1) {
                    _free((void *)puVar1[3]);
                    puVar2 = (undefined8 *)*puVar1;
                    _free(puVar1);
                    puVar1 = puVar2;
                  }
                  param_1[1] = param_1;
                  *param_1 = param_1;
                  _free(puVar6);
                }
                _closedir(lVar4);
                uVar8 = FUN_10071e690(0xfffffffe,0);
                lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
                goto LAB_10071f12f;
              case 1:
                if ((local_4c4 & 0xf000) == 0x8000) goto switchD_10071efaf_caseD_0;
                break;
              case 2:
                if ((local_4c4 & 0xf000) == 0x4000) goto switchD_10071efaf_caseD_0;
                break;
              case 3:
                if ((local_4c4 & 0xf000) == 0xc000) goto switchD_10071efaf_caseD_0;
                break;
              case 4:
                if ((local_4c4 & 0xf000) == 0xa000) goto switchD_10071efaf_caseD_0;
                break;
              case 5:
                if ((local_4c4 & 0xf000) == 0x6000) goto switchD_10071efaf_caseD_0;
                break;
              case 6:
                if ((local_4c4 & 0xf000) == 0x2000) goto switchD_10071efaf_caseD_0;
                break;
              case 7:
                if ((local_4c4 & 0xf000) == 0x1000) goto switchD_10071efaf_caseD_0;
              }
            }
          }
          lVar5 = _readdir_INODE64(lVar4);
        } while (lVar5 != 0);
      }
      _closedir(lVar4);
      uVar8 = 0;
      lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
LAB_10071f12f:
  if (lVar5 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

