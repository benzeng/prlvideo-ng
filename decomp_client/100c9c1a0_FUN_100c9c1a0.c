
undefined8 FUN_100c9c1a0(long param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  size_t sVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  int iVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 uVar13;
  
  if ((param_2 == (char *)0x0) || (pcVar12 = param_2, *param_2 == '\0')) {
    uVar13 = 0x71;
    uVar11 = 0xcc;
LAB_100c9c371:
    FUN_100c62ee0(0xb,100,uVar13,"by_dir.c",uVar11);
    uVar13 = 0;
  }
  else {
    do {
      for (; (*param_2 != '\0' && (*param_2 != ':')); param_2 = param_2 + 1) {
      }
      iVar3 = (int)((long)param_2 - (long)pcVar12);
      if (iVar3 != 0) {
        uVar4 = (long)param_2 - (long)pcVar12 & 0xffffffff;
        iVar2 = FUN_100c60800(*(undefined8 *)(param_1 + 8));
        iVar10 = 0;
        if (0 < iVar2) {
          iVar10 = 0;
          do {
            puVar5 = (undefined8 *)FUN_100c60820(*(undefined8 *)(param_1 + 8),iVar10);
            pcVar9 = (char *)*puVar5;
            sVar6 = _strlen(pcVar9);
            if ((sVar6 == (long)iVar3) && (iVar2 = _strncmp(pcVar9,pcVar12,uVar4), iVar2 == 0))
            break;
            iVar10 = iVar10 + 1;
            iVar2 = FUN_100c60800(*(undefined8 *)(param_1 + 8));
          } while (iVar10 < iVar2);
        }
        iVar2 = FUN_100c60800(*(undefined8 *)(param_1 + 8));
        if (iVar2 <= iVar10) {
          if (*(long *)(param_1 + 8) == 0) {
            lVar7 = FUN_100c60010();
            *(long *)(param_1 + 8) = lVar7;
            if (lVar7 == 0) {
              uVar13 = 0x41;
              uVar11 = 0xe5;
              goto LAB_100c9c371;
            }
          }
          plVar8 = (long *)FUN_100bf3540(0x18,"by_dir.c",0xe9);
          if (plVar8 == (long *)0x0) {
            return 0;
          }
          *(undefined4 *)(plVar8 + 1) = param_3;
          lVar7 = FUN_100c5ff30(FUN_100c9c3e0);
          plVar8[2] = lVar7;
          pcVar9 = (char *)FUN_100bf3540(iVar3 + 1,"by_dir.c",0xee);
          *plVar8 = (long)pcVar9;
          if (pcVar9 == (char *)0x0) goto LAB_100c9c38d;
          if (plVar8[2] != 0) {
            _strncpy(pcVar9,pcVar12,uVar4);
            *(undefined1 *)(*plVar8 + (long)iVar3) = 0;
            iVar3 = FUN_100c604e0(*(undefined8 *)(param_1 + 8),plVar8);
            if (iVar3 != 0) goto LAB_100c9c340;
            pcVar9 = (char *)*plVar8;
            if (pcVar9 == (char *)0x0) goto LAB_100c9c38d;
          }
          FUN_100bf3910(pcVar9);
LAB_100c9c38d:
          if (plVar8[2] != 0) {
            FUN_100c60790(plVar8[2],FUN_100c9c440);
          }
          FUN_100bf3910(plVar8);
          return 0;
        }
      }
LAB_100c9c340:
      uVar13 = 1;
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      pcVar12 = param_2;
    } while (cVar1 != '\0');
  }
  return uVar13;
}

