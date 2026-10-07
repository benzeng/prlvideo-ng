
void FUN_1008c8740(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  int iVar11;
  
  iVar4 = FUN_100885600(param_2);
  if (0 < iVar4) {
    uVar5 = (int)param_3 + 2;
    iVar4 = 0;
    do {
      puVar7 = (undefined8 *)FUN_100885620(param_2,iVar4);
      iVar6 = FUN_100821ab0(*puVar7);
      if (iVar6 == 0xa5) {
        FUN_100880ec0(param_1,"%*sUser Notice:\n",param_3,"");
        plVar1 = (long *)puVar7[1];
        plVar2 = (long *)*plVar1;
        if (plVar2 != (long *)0x0) {
          iVar11 = 0;
          FUN_100880ec0(param_1,"%*sOrganization: %s\n",uVar5,"",*(undefined8 *)(*plVar2 + 8));
          iVar6 = FUN_100885600(plVar2[1]);
          pcVar10 = "";
          if (1 < iVar6) {
            pcVar10 = "s";
          }
          FUN_100880ec0(param_1,"%*sNumber%s: ",uVar5,"",pcVar10);
          iVar6 = FUN_100885600(plVar2[1]);
          if (0 < iVar6) {
            do {
              uVar8 = FUN_100885620(plVar2[1],iVar11);
              if (iVar11 != 0) {
                FUN_10087d870(param_1,", ");
              }
              uVar8 = FUN_1008c3c50(0,uVar8);
              FUN_10087d870(param_1,uVar8);
              FUN_10081e1a0(uVar8);
              iVar11 = iVar11 + 1;
              iVar6 = FUN_100885600(plVar2[1]);
            } while (iVar11 < iVar6);
          }
          FUN_10087d870(param_1,"\n");
        }
        lVar3 = plVar1[1];
        if (lVar3 != 0) {
          uVar8 = *(undefined8 *)(lVar3 + 8);
          pcVar10 = "%*sExplicit Text: %s\n";
          uVar9 = (ulong)uVar5;
LAB_1008c8910:
          FUN_100880ec0(param_1,pcVar10,uVar9,"",uVar8);
        }
      }
      else {
        if (iVar6 == 0xa4) {
          uVar8 = *(undefined8 *)(puVar7[1] + 8);
          pcVar10 = "%*sCPS: %s\n";
          uVar9 = param_3;
          goto LAB_1008c8910;
        }
        FUN_100880ec0(param_1,"%*sUnknown Qualifier: ",uVar5,"");
        FUN_1008993b0(param_1,*puVar7);
        FUN_10087d870(param_1,"\n");
      }
      iVar4 = iVar4 + 1;
      iVar6 = FUN_100885600(param_2);
    } while (iVar4 < iVar6);
  }
  return;
}

