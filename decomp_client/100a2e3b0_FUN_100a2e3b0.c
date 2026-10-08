
ulong FUN_100a2e3b0(ulong *param_1,string *param_2,int param_3,long param_4)

{
  string *psVar1;
  string *psVar2;
  char *pcVar3;
  char *pcVar4;
  __darwin_ct_rune_t _Var5;
  ulong uVar6;
  ulong uVar7;
  string *psVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  string *psVar13;
  string local_60;
  char local_5f [7];
  long local_58;
  char *local_50;
  string local_48;
  char local_47 [7];
  ulong local_40;
  char *local_38;
  
  std::string::__init((char *)&local_48,*param_1);
  std::string::string(&local_60,param_2);
  if (param_4 == 1) {
    if (((byte)local_48 & 1) == 0) {
      pcVar10 = local_47 + ((byte)local_48 >> 1);
      pcVar3 = local_47;
      pcVar4 = local_47;
    }
    else {
      pcVar10 = local_38 + local_40;
      pcVar3 = local_38;
      pcVar4 = local_38;
    }
    for (; pcVar3 != pcVar10; pcVar3 = pcVar3 + 1) {
      _Var5 = ___toupper((int)*pcVar3);
      *pcVar4 = (char)_Var5;
      pcVar4 = pcVar4 + 1;
    }
    if (((byte)local_60 & 1) == 0) {
      pcVar10 = local_5f + ((byte)local_60 >> 1);
      pcVar3 = local_5f;
      pcVar4 = local_5f;
    }
    else {
      pcVar10 = local_50 + local_58;
      pcVar3 = local_50;
      pcVar4 = local_50;
    }
    for (; pcVar3 != pcVar10; pcVar3 = pcVar3 + 1) {
      _Var5 = ___toupper((int)*pcVar3);
      *pcVar4 = (char)_Var5;
      pcVar4 = pcVar4 + 1;
    }
  }
  if (((byte)local_48 & 1) == 0) {
    local_38 = local_47;
    local_40 = (ulong)((byte)local_48 >> 1);
  }
  uVar7 = (ulong)param_3;
  if (((byte)*param_2 & 1) == 0) {
    psVar13 = param_2 + 1;
    uVar6 = (ulong)((byte)*param_2 >> 1);
  }
  else {
    uVar6 = *(ulong *)(param_2 + 8);
    psVar13 = *(string **)(param_2 + 0x10);
  }
  uVar11 = 0xffffffffffffffff;
  uVar12 = uVar11;
  if (((uVar7 <= local_40) && (uVar6 <= local_40 - uVar7)) && (uVar12 = uVar7, uVar6 != 0)) {
    psVar8 = (string *)(local_38 + uVar7);
    uVar12 = uVar11;
    if (((long)uVar6 <= (long)(local_38 + local_40) - (long)psVar8) &&
       (uVar9 = (1 - uVar6) + local_40, uVar9 != uVar7)) {
      do {
        uVar7 = 1;
        if (*psVar8 == *psVar13) {
          do {
            if (uVar6 == uVar7) {
              if (psVar8 != (string *)(local_38 + local_40)) {
                uVar12 = (long)psVar8 - (long)local_38;
              }
              goto LAB_100a2e52f;
            }
            psVar1 = psVar13 + uVar7;
            psVar2 = psVar8 + uVar7;
            uVar7 = uVar7 + 1;
          } while (*psVar2 == *psVar1);
        }
        psVar8 = psVar8 + 1;
      } while (psVar8 != (string *)(local_38 + uVar9));
    }
  }
LAB_100a2e52f:
  std::string::~string(&local_60);
  std::string::~string(&local_48);
  return uVar12 & 0xffffffff;
}

