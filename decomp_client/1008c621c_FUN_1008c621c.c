
xmlChar * FUN_1008c621c(long param_1)

{
  xmlChar *local_88;
  xmlChar local_78 [108];
  int local_c;
  
  local_c = 0;
  if ((((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0x41) ||
       (0x5a < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))) &&
      ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0x61 ||
       (0x7a < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))))) &&
     ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '_' &&
      (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ':')))) {
    local_88 = (xmlChar *)0x0;
  }
  else {
    while ((local_c < 100 &&
           ((((0x40 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20) &&
              (**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0x5b)) ||
             ((0x60 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20) &&
              (**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0x7b)))) ||
            ((((0x2f < **(byte **)(*(long *)(param_1 + 0x38) + 0x20) &&
               (**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0x3a)) ||
              (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ':')) ||
             ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '-' ||
              (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '_'))))))))) {
      if ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0x41) ||
         (0x5a < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))) {
        local_78[local_c] = **(xmlChar **)(*(long *)(param_1 + 0x38) + 0x20);
      }
      else {
        local_78[local_c] = **(char **)(*(long *)(param_1 + 0x38) + 0x20) + ' ';
      }
      local_c = local_c + 1;
      _xmlNextChar(param_1);
    }
    local_88 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),local_78,local_c);
  }
  return local_88;
}

