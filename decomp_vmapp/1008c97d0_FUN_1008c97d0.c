
undefined8 FUN_1008c97d0(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  
  lVar4 = FUN_1008c40d0(param_2);
  uVar7 = 0;
  if ((lVar4 != 0) && (*param_1 == 0)) {
    iVar2 = FUN_100885600(lVar4);
    uVar7 = 1;
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        lVar5 = FUN_100885620(lVar4,iVar2);
        pcVar1 = *(char **)(lVar5 + 8);
        lVar5 = *param_1;
        if (lVar5 == 0) {
          lVar5 = FUN_1008a8300();
          *param_1 = lVar5;
          uVar7 = 0;
          if (lVar5 == 0) break;
        }
        iVar3 = _strcmp("unused",pcVar1);
        puVar6 = &DAT_100be4950;
        ppuVar8 = &PTR_s_Unused_100be4958;
        if (iVar3 != 0) {
          iVar3 = _strcmp("keyCompromise",pcVar1);
          puVar6 = &DAT_100be4968;
          ppuVar8 = &PTR_s_Key_Compromise_100be4970;
          if (iVar3 != 0) {
            iVar3 = _strcmp("CACompromise",pcVar1);
            puVar6 = &DAT_100be4980;
            ppuVar8 = &PTR_s_CA_Compromise_100be4988;
            if (iVar3 != 0) {
              iVar3 = _strcmp("affiliationChanged",pcVar1);
              puVar6 = &DAT_100be4998;
              ppuVar8 = &PTR_s_Affiliation_Changed_100be49a0;
              if (iVar3 != 0) {
                iVar3 = _strcmp("superseded",pcVar1);
                puVar6 = &DAT_100be49b0;
                ppuVar8 = &PTR_s_Superseded_100be49b8;
                if (iVar3 != 0) {
                  iVar3 = _strcmp("cessationOfOperation",pcVar1);
                  puVar6 = &DAT_100be49c8;
                  ppuVar8 = &PTR_s_Cessation_Of_Operation_100be49d0;
                  if (iVar3 != 0) {
                    iVar3 = _strcmp("certificateHold",pcVar1);
                    puVar6 = &DAT_100be49e0;
                    ppuVar8 = &PTR_s_Certificate_Hold_100be49e8;
                    if (iVar3 != 0) {
                      iVar3 = _strcmp("privilegeWithdrawn",pcVar1);
                      puVar6 = &DAT_100be49f8;
                      ppuVar8 = &PTR_s_Privilege_Withdrawn_100be4a00;
                      if (iVar3 != 0) {
                        iVar3 = _strcmp("AACompromise",pcVar1);
                        puVar6 = &DAT_100be4a10;
                        ppuVar8 = &PTR_s_AA_Compromise_100be4a18;
                        uVar7 = 0;
                        if (iVar3 != 0) break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar3 = FUN_100899c20(lVar5,*puVar6,1);
        uVar7 = 0;
        if ((iVar3 == 0) || (uVar7 = 0, *ppuVar8 == (undefined *)0x0)) break;
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100885600(lVar4);
        uVar7 = 1;
        if (iVar3 <= iVar2) break;
      } while( true );
    }
    FUN_100885590(lVar4,FUN_1008c3b40);
  }
  return uVar7;
}

