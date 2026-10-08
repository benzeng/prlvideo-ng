
undefined4 FUN_1008c0ddb(undefined8 param_1,int *param_2,xmlChar *param_3)

{
  int iVar1;
  int *local_28;
  int local_14;
  xmlChar *local_10;
  
  local_10 = _xmlSplitQName3(param_3,&local_14);
  local_28 = param_2;
  if (local_10 == (xmlChar *)0x0) {
    for (; local_28 != (int *)0x0; local_28 = *(int **)(local_28 + 6)) {
      if (*local_28 == 2) {
        if ((*(long *)(local_28 + 10) == 0) &&
           (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 2),param_3), iVar1 != 0)) {
          return 1;
        }
      }
      else if (((*local_28 == 4) && (*(long *)(local_28 + 4) != 0)) &&
              (**(int **)(local_28 + 4) == 2)) {
        if ((*(long *)(*(long *)(local_28 + 4) + 0x28) == 0) &&
           (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 4) + 8),param_3), iVar1 != 0)) {
          return 1;
        }
      }
      else if (((*local_28 != 4) || (*(long *)(local_28 + 4) == 0)) ||
              (**(int **)(local_28 + 4) != 1)) {
        FUN_1008b74a8(0,0x207,"Internal: MIXED struct corrupted\n",0);
        return 0;
      }
    }
  }
  else {
    for (; local_28 != (int *)0x0; local_28 = *(int **)(local_28 + 6)) {
      if (*local_28 == 2) {
        if (((*(long *)(local_28 + 10) != 0) &&
            (iVar1 = _xmlStrncmp(*(xmlChar **)(local_28 + 10),param_3,local_14), iVar1 == 0)) &&
           (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 2),local_10), iVar1 != 0)) {
          return 1;
        }
      }
      else if (((*local_28 == 4) && (*(long *)(local_28 + 4) != 0)) &&
              (**(int **)(local_28 + 4) == 2)) {
        if (((*(long *)(*(long *)(local_28 + 4) + 0x28) != 0) &&
            (iVar1 = _xmlStrncmp(*(xmlChar **)(*(long *)(local_28 + 4) + 0x28),param_3,local_14),
            iVar1 == 0)) &&
           (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 4) + 8),local_10), iVar1 != 0))
        {
          return 1;
        }
      }
      else if (((*local_28 != 4) || (*(long *)(local_28 + 4) == 0)) ||
              (**(int **)(local_28 + 4) != 1)) {
        FUN_1008b74a8(param_1,0x207,"Internal: MIXED struct corrupted\n",0);
        return 0;
      }
    }
  }
  return 0;
}

