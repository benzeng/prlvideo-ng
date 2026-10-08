
undefined4 FUN_1008b5288(long param_1,long *param_2,int param_3)

{
  char cVar1;
  xmlGenericErrorFunc pxVar2;
  undefined1 *puVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  long lVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined4 local_50;
  char *local_30;
  int local_28;
  int local_24;
  
  if (param_2 == (long *)0x0) {
    local_50 = 0xffffffff;
  }
  else {
    local_30 = (char *)*param_2;
    while( true ) {
      while (((((('`' < *local_30 && (*local_30 < '{')) || (('@' < *local_30 && (*local_30 < '['))))
               || (((('/' < *local_30 && (*local_30 < ':')) || (*local_30 == '-')) ||
                   (((*local_30 == '_' || (*local_30 == '.')) ||
                    ((*local_30 == '!' ||
                     (((*local_30 == '~' || (*local_30 == '*')) ||
                      ((*local_30 == '\'' || ((*local_30 == '(' || (*local_30 == ')'))))))))))))))
              || ((*local_30 == '%' &&
                  ((((('/' < local_30[1] && (local_30[1] < ':')) ||
                     (('`' < local_30[1] && (local_30[1] < 'g')))) ||
                    (('@' < local_30[1] && (local_30[1] < 'G')))) &&
                   ((('/' < local_30[2] && (local_30[2] < ':')) ||
                    ((('`' < local_30[2] && (local_30[2] < 'g')) ||
                     (('@' < local_30[2] && (local_30[2] < 'G')))))))))))) ||
             (((((((*local_30 == ':' || (*local_30 == '@')) || (*local_30 == '&')) ||
                 ((*local_30 == '=' || (*local_30 == '+')))) || (*local_30 == '$')) ||
               (*local_30 == ',')) ||
              (((param_1 != 0 && (((byte)*(undefined4 *)(param_1 + 0x48) & 1) == 1)) &&
               ((((*local_30 == '{' ||
                  (((*local_30 == '}' || (*local_30 == '|')) || (*local_30 == '\\')))) ||
                 (((*local_30 == '^' || (*local_30 == '[')) || (*local_30 == ']')))) ||
                (*local_30 == '`'))))))))) {
        if (*local_30 == '%') {
          local_30 = local_30 + 3;
        }
        else {
          local_30 = local_30 + 1;
        }
      }
      while (*local_30 == ';') {
        local_30 = local_30 + 1;
        while ((((((((('`' < *local_30 && (*local_30 < '{')) ||
                     (('@' < *local_30 && (*local_30 < '[')))) ||
                    ((('/' < *local_30 && (*local_30 < ':')) || (*local_30 == '-')))) ||
                   ((*local_30 == '_' || (*local_30 == '.')))) ||
                  ((*local_30 == '!' ||
                   (((*local_30 == '~' || (*local_30 == '*')) ||
                    ((*local_30 == '\'' || ((*local_30 == '(' || (*local_30 == ')')))))))))) ||
                 (((*local_30 == '%' &&
                   ((('/' < local_30[1] && (local_30[1] < ':')) ||
                    ((('`' < local_30[1] && (local_30[1] < 'g')) ||
                     (('@' < local_30[1] && (local_30[1] < 'G')))))))) &&
                  ((('/' < local_30[2] && (local_30[2] < ':')) ||
                   ((('`' < local_30[2] && (local_30[2] < 'g')) ||
                    (('@' < local_30[2] && (local_30[2] < 'G')))))))))) ||
                ((((((*local_30 == ':' || (*local_30 == '@')) || (*local_30 == '&')) ||
                   ((*local_30 == '=' || (*local_30 == '+')))) || (*local_30 == '$')) ||
                 (*local_30 == ',')))) ||
               (((param_1 != 0 && (((byte)*(undefined4 *)(param_1 + 0x48) & 1) == 1)) &&
                (((*local_30 == '{' ||
                  (((*local_30 == '}' || (*local_30 == '|')) || (*local_30 == '\\')))) ||
                 ((((*local_30 == '^' || (*local_30 == '[')) || (*local_30 == ']')) ||
                  (*local_30 == '`'))))))))) {
          if (*local_30 == '%') {
            local_30 = local_30 + 3;
          }
          else {
            local_30 = local_30 + 1;
          }
        }
      }
      if (*local_30 != '/') break;
      local_30 = local_30 + 1;
    }
    if (param_1 != 0) {
      local_24 = 0;
      local_28 = (int)local_30 - (int)*param_2;
      if (param_3 != 0) {
        local_28 = local_28 + 1;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        lVar6 = -1;
        pcVar8 = *(char **)(param_1 + 0x30);
        do {
          if (lVar6 == 0) break;
          lVar6 = lVar6 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        local_24 = ~(uint)lVar6 - 1;
        local_28 = local_28 + local_24;
      }
      puVar3 = (undefined1 *)(*(code *)_xmlMallocAtomic)((long)(local_28 + 1));
      if (puVar3 == (undefined1 *)0x0) {
        ppxVar4 = ___xmlGenericError();
        pxVar2 = *ppxVar4;
        ppvVar5 = ___xmlGenericErrorContext();
        (*pxVar2)(*ppvVar5,"xmlParseURIPathSegments: out of memory\n");
        *param_2 = (long)local_30;
        return 0xffffffff;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        puVar7 = *(undefined1 **)(param_1 + 0x30);
        puVar9 = puVar3;
        for (lVar6 = (long)local_24; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      if (param_3 != 0) {
        puVar3[local_24] = 0x2f;
        local_24 = local_24 + 1;
      }
      puVar3[local_24] = 0;
      if (local_30 != (char *)*param_2 && -1 < (long)local_30 - *param_2) {
        if ((*(uint *)(param_1 + 0x48) >> 1 & 1) == 0) {
          _xmlURIUnescapeString(*param_2,(int)local_30 - (int)*param_2,puVar3 + local_24);
        }
        else {
          puVar7 = (undefined1 *)*param_2;
          puVar9 = puVar3 + local_24;
          for (lVar6 = (long)local_30 - *param_2; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar3[(long)(local_30 + ((long)local_24 - *param_2))] = 0;
        }
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x30));
      }
      *(undefined1 **)(param_1 + 0x30) = puVar3;
    }
    *param_2 = (long)local_30;
    local_50 = 0;
  }
  return local_50;
}

