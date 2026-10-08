
char * _xmlURIUnescapeString(char *param_1,int param_2,char *param_3)

{
  char cVar1;
  xmlGenericErrorFunc pxVar2;
  int iVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  long lVar6;
  char *pcVar7;
  char *local_58;
  int local_44;
  char *local_30;
  char *local_28;
  char *local_20;
  
  if (param_1 == (char *)0x0) {
    local_58 = (char *)0x0;
  }
  else {
    local_44 = param_2;
    if (param_2 < 1) {
      lVar6 = -1;
      pcVar7 = param_1;
      do {
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_44 = ~(uint)lVar6 - 1;
    }
    if (local_44 < 0) {
      local_58 = (char *)0x0;
    }
    else {
      local_30 = param_3;
      if ((param_3 == (char *)0x0) &&
         (local_30 = (char *)(*(code *)_xmlMallocAtomic)((long)(local_44 + 1)),
         local_30 == (char *)0x0)) {
        ppxVar4 = ___xmlGenericError();
        pxVar2 = *ppxVar4;
        ppvVar5 = ___xmlGenericErrorContext();
        (*pxVar2)(*ppvVar5,"xmlURIUnescapeString: out of memory\n");
        local_58 = (char *)0x0;
      }
      else {
        local_28 = local_30;
        local_20 = param_1;
        while (0 < local_44) {
          if ((((local_44 < 3) || (*local_20 != '%')) ||
              (iVar3 = FUN_1008b28c6((int)local_20[1]), iVar3 == 0)) ||
             (iVar3 = FUN_1008b28c6((int)local_20[2]), iVar3 == 0)) {
            *local_28 = *local_20;
            local_20 = local_20 + 1;
            local_28 = local_28 + 1;
            local_44 = local_44 + -1;
          }
          else {
            pcVar7 = local_20 + 1;
            if ((*pcVar7 < '0') || ('9' < *pcVar7)) {
              if ((*pcVar7 < 'a') || ('f' < *pcVar7)) {
                if (('@' < *pcVar7) && (*pcVar7 < 'G')) {
                  *local_28 = *pcVar7 + -0x37;
                }
              }
              else {
                *local_28 = *pcVar7 + -0x57;
              }
            }
            else {
              *local_28 = *pcVar7 + -0x30;
            }
            pcVar7 = local_20 + 2;
            if ((*pcVar7 < '0') || ('9' < *pcVar7)) {
              if ((*pcVar7 < 'a') || ('f' < *pcVar7)) {
                if (('@' < *pcVar7) && (*pcVar7 < 'G')) {
                  *local_28 = *local_28 * '\x10' + *pcVar7 + -0x37;
                }
              }
              else {
                *local_28 = *local_28 * '\x10' + *pcVar7 + -0x57;
              }
            }
            else {
              *local_28 = *local_28 * '\x10' + *pcVar7 + -0x30;
            }
            local_20 = local_20 + 3;
            local_44 = local_44 + -3;
            local_28 = local_28 + 1;
          }
        }
        *local_28 = '\0';
        local_58 = local_30;
      }
    }
  }
  return local_58;
}

