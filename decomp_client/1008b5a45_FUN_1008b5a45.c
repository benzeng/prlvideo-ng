
undefined4 FUN_1008b5a45(long param_1,long *param_2)

{
  int iVar1;
  xmlChar *pxVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  char *local_18;
  
  if (param_2 == (long *)0x0) {
    local_2c = 0xffffffff;
  }
  else {
    local_18 = (char *)*param_2;
    iVar1 = FUN_1008b431d(param_1,param_2);
    if (((iVar1 == 0) && (*param_2 != 0)) &&
       ((*(char *)*param_2 == '\0' || ((*(char *)*param_2 == '/' || (*(char *)*param_2 == '?'))))))
    {
      local_2c = 0;
    }
    else {
      *param_2 = (long)local_18;
      if (((((((*local_18 < 'a') || ('z' < *local_18)) &&
             (((*local_18 < 'A' || ('Z' < *local_18)) && ((*local_18 < '0' || ('9' < *local_18))))))
            && (((((*local_18 != '-' && (*local_18 != '_')) && (*local_18 != '.')) &&
                 ((*local_18 != '!' && (*local_18 != '~')))) && (*local_18 != '*')))) &&
           (((*local_18 != '\'' && (*local_18 != '(')) && (*local_18 != ')')))) &&
          ((*local_18 != '%' ||
           (((((local_18[1] < '0' || ('9' < local_18[1])) &&
              ((local_18[1] < 'a' || ('f' < local_18[1])))) &&
             ((local_18[1] < 'A' || ('F' < local_18[1])))) ||
            (((local_18[2] < '0' || ('9' < local_18[2])) &&
             (((local_18[2] < 'a' || ('f' < local_18[2])) &&
              ((local_18[2] < 'A' || ('F' < local_18[2])))))))))))) &&
         ((((((*local_18 != '$' && (*local_18 != ',')) && (*local_18 != ';')) &&
            ((*local_18 != ':' && (*local_18 != '@')))) && (*local_18 != '&')) &&
          ((*local_18 != '=' && (*local_18 != '+')))))) {
        local_2c = 5;
      }
      else {
        if (*local_18 == '%') {
          local_18 = local_18 + 3;
        }
        else {
          local_18 = local_18 + 1;
        }
        while (((((((('`' < *local_18 && (*local_18 < '{')) ||
                    (('@' < *local_18 && (*local_18 < '[')))) ||
                   ((('/' < *local_18 && (*local_18 < ':')) || (*local_18 == '-')))) ||
                  ((*local_18 == '_' || (*local_18 == '.')))) ||
                 ((*local_18 == '!' ||
                  (((*local_18 == '~' || (*local_18 == '*')) ||
                   ((*local_18 == '\'' || ((*local_18 == '(' || (*local_18 == ')')))))))))) ||
                (((*local_18 == '%' &&
                  ((('/' < local_18[1] && (local_18[1] < ':')) ||
                   ((('`' < local_18[1] && (local_18[1] < 'g')) ||
                    (('@' < local_18[1] && (local_18[1] < 'G')))))))) &&
                 ((('/' < local_18[2] && (local_18[2] < ':')) ||
                  ((('`' < local_18[2] && (local_18[2] < 'g')) ||
                   (('@' < local_18[2] && (local_18[2] < 'G')))))))))) ||
               ((((((*local_18 == '$' || (*local_18 == ',')) || (*local_18 == ';')) ||
                  ((*local_18 == ':' || (*local_18 == '@')))) || (*local_18 == '&')) ||
                ((*local_18 == '=' || (*local_18 == '+'))))))) {
          if (*local_18 == '%') {
            local_18 = local_18 + 3;
          }
          else {
            local_18 = local_18 + 1;
          }
        }
        if (param_1 != 0) {
          if (*(long *)(param_1 + 0x18) != 0) {
            (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x18));
          }
          *(undefined8 *)(param_1 + 0x18) = 0;
          if (*(long *)(param_1 + 0x20) != 0) {
            (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x20));
          }
          *(undefined8 *)(param_1 + 0x20) = 0;
          if (*(long *)(param_1 + 0x10) != 0) {
            (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x10));
          }
          if ((*(uint *)(param_1 + 0x48) >> 1 & 1) == 0) {
            uVar3 = _xmlURIUnescapeString(*param_2,(int)local_18 - (int)*param_2,0);
            *(undefined8 *)(param_1 + 0x10) = uVar3;
          }
          else {
            pxVar2 = _xmlStrndup((xmlChar *)*param_2,(int)local_18 - (int)*param_2);
            *(xmlChar **)(param_1 + 0x10) = pxVar2;
          }
        }
        *param_2 = (long)local_18;
        local_2c = 0;
      }
    }
  }
  return local_2c;
}

