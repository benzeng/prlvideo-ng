
undefined4 FUN_1008b3c9a(long param_1,undefined8 *param_2)

{
  xmlChar *pxVar1;
  undefined8 uVar2;
  undefined4 local_2c;
  char *local_10;
  
  if (param_2 == (undefined8 *)0x0) {
    local_2c = 0xffffffff;
  }
  else {
    local_10 = (char *)*param_2;
    if (((((((*local_10 < 'a') || ('z' < *local_10)) && ((*local_10 < 'A' || ('Z' < *local_10)))) &&
          ((((*local_10 < '0' || ('9' < *local_10)) && (*local_10 != '-')) &&
           (((*local_10 != '_' && (*local_10 != '.')) &&
            ((*local_10 != '!' &&
             (((*local_10 != '~' && (*local_10 != '*')) &&
              ((*local_10 != '\'' && ((*local_10 != '(' && (*local_10 != ')')))))))))))))) &&
         ((*local_10 != '%' ||
          ((((local_10[1] < '0' || ('9' < local_10[1])) &&
            (((local_10[1] < 'a' || ('f' < local_10[1])) &&
             ((local_10[1] < 'A' || ('F' < local_10[1])))))) ||
           (((local_10[2] < '0' || ('9' < local_10[2])) &&
            (((local_10[2] < 'a' || ('f' < local_10[2])) &&
             ((local_10[2] < 'A' || ('F' < local_10[2])))))))))))) &&
        ((((((*local_10 != ';' && (*local_10 != '?')) && (*local_10 != ':')) &&
           ((*local_10 != '@' && (*local_10 != '&')))) && (*local_10 != '=')) &&
         (((*local_10 != '+' && (*local_10 != '$')) && (*local_10 != ',')))))) &&
       (((param_1 == 0 || ((*(uint *)(param_1 + 0x48) & 1) == 0)) ||
        ((((*local_10 != '{' &&
           ((((*local_10 != '}' && (*local_10 != '|')) && (*local_10 != '\\')) &&
            ((*local_10 != '^' && (*local_10 != '[')))))) && (*local_10 != ']')) &&
         (*local_10 != '`')))))) {
      local_2c = 3;
    }
    else {
      if (*local_10 == '%') {
        local_10 = local_10 + 3;
      }
      else {
        local_10 = local_10 + 1;
      }
      while ((((('`' < *local_10 && (*local_10 < '{')) || (('@' < *local_10 && (*local_10 < '['))))
              || (((('/' < *local_10 && (*local_10 < ':')) || (*local_10 == '-')) ||
                  (((((*local_10 == '_' || (*local_10 == '.')) || (*local_10 == '!')) ||
                    ((*local_10 == '~' || (*local_10 == '*')))) ||
                   ((*local_10 == '\'' || ((*local_10 == '(' || (*local_10 == ')')))))))))) ||
             ((((*local_10 == '%' &&
                ((('/' < local_10[1] && (local_10[1] < ':')) ||
                 ((('`' < local_10[1] && (local_10[1] < 'g')) ||
                  (('@' < local_10[1] && (local_10[1] < 'G')))))))) &&
               ((('/' < local_10[2] && (local_10[2] < ':')) ||
                ((('`' < local_10[2] && (local_10[2] < 'g')) ||
                 (('@' < local_10[2] && (local_10[2] < 'G')))))))) ||
              (((((*local_10 == ';' || (*local_10 == '/')) || (*local_10 == '?')) ||
                ((((*local_10 == ':' || (*local_10 == '@')) || (*local_10 == '&')) ||
                 (((*local_10 == '=' || (*local_10 == '+')) ||
                  ((*local_10 == '$' ||
                   (((*local_10 == ',' || (*local_10 == '[')) || (*local_10 == ']')))))))))) ||
               (((param_1 != 0 && (((byte)*(undefined4 *)(param_1 + 0x48) & 1) == 1)) &&
                ((*local_10 == '{' ||
                 (((*local_10 == '}' || (*local_10 == '|')) ||
                  ((*local_10 == '\\' ||
                   ((((*local_10 == '^' || (*local_10 == '[')) || (*local_10 == ']')) ||
                    (*local_10 == '`'))))))))))))))))) {
        if (*local_10 == '%') {
          local_10 = local_10 + 3;
        }
        else {
          local_10 = local_10 + 1;
        }
      }
      if (param_1 != 0) {
        if (*(long *)(param_1 + 8) != 0) {
          (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 8));
        }
        if ((*(uint *)(param_1 + 0x48) >> 1 & 1) == 0) {
          uVar2 = _xmlURIUnescapeString(*param_2,(int)local_10 - (int)*param_2,0);
          *(undefined8 *)(param_1 + 8) = uVar2;
        }
        else {
          pxVar1 = _xmlStrndup((xmlChar *)*param_2,(int)local_10 - (int)*param_2);
          *(xmlChar **)(param_1 + 8) = pxVar1;
        }
      }
      *param_2 = local_10;
      local_2c = 0;
    }
  }
  return local_2c;
}

