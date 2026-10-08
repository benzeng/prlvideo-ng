
undefined8 FUN_100ca4d50(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  
  lVar4 = FUN_100c9f650(param_2);
  uVar7 = 0;
  if ((lVar4 != 0) && (*param_1 == 0)) {
    iVar2 = FUN_100c60800(lVar4);
    uVar7 = 1;
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        lVar5 = FUN_100c60820(lVar4,iVar2);
        pcVar1 = *(char **)(lVar5 + 8);
        lVar5 = *param_1;
        if (lVar5 == 0) {
          lVar5 = FUN_100c83880();
          *param_1 = lVar5;
          uVar7 = 0;
          if (lVar5 == 0) break;
        }
        iVar3 = _strcmp("unused",pcVar1);
        puVar6 = &DAT_102254f60;
        ppuVar8 = &PTR_s_Unused_102254f68;
        if (iVar3 != 0) {
          iVar3 = _strcmp("keyCompromise",pcVar1);
          puVar6 = &DAT_102254f78;
          ppuVar8 = &PTR_s_Key_Compromise_102254f80;
          if (iVar3 != 0) {
            iVar3 = _strcmp("CACompromise",pcVar1);
            puVar6 = &DAT_102254f90;
            ppuVar8 = &PTR_s_CA_Compromise_102254f98;
            if (iVar3 != 0) {
              iVar3 = _strcmp("affiliationChanged",pcVar1);
              puVar6 = &DAT_102254fa8;
              ppuVar8 = &PTR_s_Affiliation_Changed_102254fb0;
              if (iVar3 != 0) {
                iVar3 = _strcmp("superseded",pcVar1);
                puVar6 = &DAT_102254fc0;
                ppuVar8 = &PTR_s_Superseded_102254fc8;
                if (iVar3 != 0) {
                  iVar3 = _strcmp("cessationOfOperation",pcVar1);
                  puVar6 = &DAT_102254fd8;
                  ppuVar8 = &PTR_s_Cessation_Of_Operation_102254fe0;
                  if (iVar3 != 0) {
                    iVar3 = _strcmp("certificateHold",pcVar1);
                    puVar6 = &DAT_102254ff0;
                    ppuVar8 = &PTR_s_Certificate_Hold_102254ff8;
                    if (iVar3 != 0) {
                      iVar3 = _strcmp("privilegeWithdrawn",pcVar1);
                      puVar6 = &DAT_102255008;
                      ppuVar8 = &PTR_s_Privilege_Withdrawn_102255010;
                      if (iVar3 != 0) {
                        iVar3 = _strcmp("AACompromise",pcVar1);
                        puVar6 = &DAT_102255020;
                        ppuVar8 = &PTR_s_AA_Compromise_102255028;
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
        iVar3 = FUN_100c751a0(lVar5,*puVar6,1);
        uVar7 = 0;
        if ((iVar3 == 0) || (uVar7 = 0, *ppuVar8 == (undefined *)0x0)) break;
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100c60800(lVar4);
        uVar7 = 1;
        if (iVar3 <= iVar2) break;
      } while( true );
    }
    FUN_100c60790(lVar4,FUN_100c9f0c0);
  }
  return uVar7;
}

