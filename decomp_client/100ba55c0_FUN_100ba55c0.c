
int FUN_100ba55c0(undefined4 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  void *pvVar8;
  size_t sVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  char cVar13;
  bool bVar14;
  bool bVar15;
  char local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  FUN_100ba5380(param_2,"<value>",7);
  iVar6 = -1;
  switch(*param_1) {
  case 1:
    ___snprintf_chk(local_78,0x20,0,0x20,"%d",param_1[8]);
    FUN_100ba5380(param_2,"<int>",5);
    sVar9 = _strlen(local_78);
    FUN_100ba5380(param_2,local_78,sVar9 & 0xffffffff);
    pcVar12 = "</int>";
    uVar10 = 6;
    break;
  default:
    goto switchD_100ba561c_caseD_2;
  case 3:
    pcVar12 = *(char **)(param_1 + 8);
    if (*pcVar12 == '\0') {
      pcVar12 = "<string/>";
    }
    else {
      FUN_100ba5380(param_2,"<string>",8);
      cVar13 = *pcVar12;
      if (cVar13 != '\0') {
        do {
          pcVar12 = pcVar12 + 1;
          if (cVar13 < '<') {
            if (cVar13 == '\"') {
              iVar5 = FUN_100ba5380(param_2,"&quot;",6);
            }
            else if (cVar13 == '&') {
              iVar5 = FUN_100ba5380(param_2,"&amp;",5);
            }
            else {
LAB_100ba573a:
              if ((int)param_2[3] != 0) goto switchD_100ba561c_caseD_2;
              lVar2 = param_2[2];
              pvVar8 = (void *)*param_2;
              pcVar7 = (char *)param_2[1];
              if (lVar2 == (long)pcVar7 - (long)pvVar8) {
                if ((lVar2 == 0) && (pvVar8 == (void *)0x0)) {
                  pcVar7 = _malloc(0x1000);
                  *param_2 = (long)pcVar7;
                  if (pcVar7 == (char *)0x0) {
                    *(undefined4 *)(param_2 + 3) = 1;
                    goto switchD_100ba561c_caseD_2;
                  }
                  param_2[2] = 0x1000;
                }
                else {
                  pvVar8 = _realloc(pvVar8,lVar2 + 0x1000);
                  if (pvVar8 == (void *)0x0) {
                    *(undefined4 *)(param_2 + 3) = 1;
                    goto switchD_100ba561c_caseD_2;
                  }
                  param_2[2] = param_2[2] + 0x1000;
                  if (pvVar8 == (void *)*param_2) {
                    pcVar7 = (char *)param_2[1];
                    goto LAB_100ba57b7;
                  }
                  *param_2 = (long)pvVar8;
                  pcVar7 = (char *)((long)pvVar8 + lVar2);
                }
                param_2[1] = (long)pcVar7;
              }
LAB_100ba57b7:
              *pcVar7 = cVar13;
              param_2[1] = param_2[1] + 1;
              iVar5 = 0;
            }
          }
          else if (cVar13 == '<') {
            iVar5 = FUN_100ba5380(param_2,"&lt;",4);
          }
          else {
            if (cVar13 != '>') goto LAB_100ba573a;
            iVar5 = FUN_100ba5380(param_2,"&gt;",4);
          }
        } while ((iVar5 == 0) && (cVar13 = *pcVar12, cVar13 != '\0'));
        iVar6 = iVar5;
        if (iVar5 != 0) goto switchD_100ba561c_caseD_2;
      }
      pcVar12 = "</string>";
    }
    goto LAB_100ba59f7;
  case 4:
    if (param_1[8] == 0) {
      pcVar12 = "<boolean>0</boolean>";
      uVar10 = 0x14;
    }
    else {
      pcVar12 = "<boolean>1</boolean>";
      uVar10 = 0x14;
    }
    break;
  case 5:
    uVar11 = *(ulong *)(param_1 + 2);
    uVar10 = *(undefined8 *)(param_1 + 8);
    pvVar8 = _malloc(uVar11 * 2);
    if (pvVar8 != (void *)0x0) {
      iVar6 = 0;
      uVar4 = FUN_100ba6730(uVar10,uVar11 & 0xffffffff,pvVar8,0);
      FUN_100ba5380(param_2,"<base64>",8);
      iVar5 = FUN_100ba5380(param_2,pvVar8,uVar4);
      if (iVar5 == 0) {
        iVar6 = FUN_100ba5380(param_2,"</base64>",9);
      }
      _free(pvVar8);
    }
    goto switchD_100ba561c_caseD_2;
  case 6:
    iVar6 = FUN_100ba5380(param_2,"<array><data>",0xd);
    bVar15 = iVar6 == 0;
    if ((bVar15) && (*(long *)(param_1 + 2) != 0)) {
      uVar11 = 1;
      do {
        iVar6 = FUN_100ba55c0(*(undefined8 *)(*(long *)(param_1 + 8) + -8 + uVar11 * 8),param_2);
        bVar15 = iVar6 == 0;
        if (!bVar15) break;
        bVar14 = uVar11 < *(ulong *)(param_1 + 2);
        uVar11 = uVar11 + 1;
      } while (bVar14);
    }
    if (!bVar15) goto switchD_100ba561c_caseD_2;
    pcVar12 = "</data></array>";
    uVar10 = 0xf;
    goto LAB_100ba5a23;
  case 7:
    puVar1 = (undefined8 *)(param_1 + 8);
    if ((undefined8 *)*(undefined4 **)(param_1 + 8) == puVar1) {
      pcVar12 = "<struct/>";
    }
    else {
      FUN_100ba5380(param_2,"<struct>",8);
      for (puVar3 = (undefined8 *)*puVar1; puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
        FUN_100ba5380(param_2,"<member><name>",0xe);
        pcVar12 = (char *)puVar3[2];
        sVar9 = _strlen(pcVar12);
        FUN_100ba5380(param_2,pcVar12,sVar9 & 0xffffffff);
        FUN_100ba5380(param_2,"</name>",7);
        FUN_100ba55c0(puVar3[3],param_2);
        FUN_100ba5380(param_2,"</member>",9);
      }
      pcVar12 = "</struct>";
    }
    uVar10 = 9;
LAB_100ba5a23:
    FUN_100ba5380(param_2,pcVar12,uVar10);
    iVar6 = 0;
    goto switchD_100ba561c_caseD_2;
  case 9:
    ___snprintf_chk(*(undefined8 *)(param_1 + 8),local_78,0x40,0,0x40,"%f");
    FUN_100ba5380(param_2,"<double>",8);
    sVar9 = _strlen(local_78);
    FUN_100ba5380(param_2,local_78,sVar9 & 0xffffffff);
    pcVar12 = "</double>";
LAB_100ba59f7:
    uVar10 = 9;
  }
  iVar6 = FUN_100ba5380(param_2,pcVar12,uVar10);
switchD_100ba561c_caseD_2:
  FUN_100ba5380(param_2,"</value>",8);
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

