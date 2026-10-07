
void FUN_1001a792a(double param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  double dVar5;
  uint local_a0;
  char local_88 [15];
  char local_79 [17];
  char local_68 [32];
  char *local_48;
  char *local_40;
  uint local_34;
  int local_30;
  uint local_2c;
  char *local_28;
  char *local_20;
  double local_18;
  uint local_c;
  
  iVar2 = _xmlXPathIsInf(param_1);
  if (iVar2 == -1) {
    if (10 < (int)param_3) {
      _snprintf(param_2,(long)(int)param_3,"-Infinity");
    }
  }
  else if (iVar2 == 1) {
    if (9 < (int)param_3) {
      _snprintf(param_2,(long)(int)param_3,"Infinity");
    }
  }
  else {
    iVar2 = _xmlXPathIsNaN(param_1);
    if (iVar2 == 0) {
      if (((param_1 != 0.0) || (NAN(param_1))) || (iVar2 = FUN_1001a4e82(param_1), iVar2 == 0)) {
        if ((double)(int)param_1 == param_1) {
          local_34 = (uint)param_1;
          if (local_34 == 0) {
            *param_2 = '0';
            local_48 = param_2 + 1;
          }
          else {
            local_48 = param_2;
            _snprintf(local_68,0x1d,"%d",(ulong)local_34);
            local_40 = local_68;
            for (; (*local_40 != '\0' && ((long)local_48 - (long)param_2 < (long)(int)param_3));
                local_48 = local_48 + 1) {
              *local_48 = *local_40;
              local_40 = local_40 + 1;
            }
          }
          if ((long)local_48 - (long)param_2 < (long)(int)param_3) {
            *local_48 = '\0';
          }
          else if (0 < (int)param_3) {
            local_48[-1] = '\0';
          }
        }
        else {
          local_18 = (double)(DAT_100b35d30 & (ulong)param_1);
          if (((local_18 <= DAT_100b4aec8) && (DAT_100b35968 <= local_18)) || (local_18 == 0.0)) {
            if (0.0 < local_18) {
              dVar5 = (double)_log10(local_18);
              local_30 = (int)dVar5 + 1;
            }
            else {
              local_30 = 0;
            }
            if (local_30 < 1) {
              local_a0 = 0xf;
            }
            else {
              local_a0 = 0xf - local_30;
            }
            local_2c = local_a0;
            iVar2 = _snprintf(local_88,0x17,"%0.*f",param_1,(ulong)local_a0);
            local_20 = local_88 + iVar2;
          }
          else {
            local_30 = 0x15;
            local_2c = 0xe;
            _snprintf(local_88,0x17,"%*.*e",param_1,0x15,0xe);
            local_20 = _strchr(local_79,0x65);
          }
          local_28 = local_20;
          pcVar4 = local_28;
          do {
            local_28 = pcVar4;
            pcVar4 = local_28 + -1;
          } while (*pcVar4 == '0');
          if (*pcVar4 != '.') {
            pcVar4 = local_28;
          }
          do {
            local_28 = pcVar4;
            *local_28 = *local_20;
            cVar1 = *local_28;
            local_20 = local_20 + 1;
            local_28 = local_28 + 1;
            pcVar4 = local_28;
          } while (cVar1 != '\0');
          lVar3 = -1;
          pcVar4 = local_88;
          do {
            if (lVar3 == 0) break;
            lVar3 = lVar3 + -1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          local_c = ~(uint)lVar3;
          if ((int)param_3 < (int)local_c) {
            local_88[(int)(param_3 - 1)] = '\0';
            local_c = param_3;
          }
          _memmove(param_2,local_88,(long)(int)local_c);
        }
      }
      else {
        _snprintf(param_2,(long)(int)param_3,"0");
      }
    }
    else if (4 < (int)param_3) {
      _snprintf(param_2,(long)(int)param_3,"NaN");
    }
  }
  return;
}

