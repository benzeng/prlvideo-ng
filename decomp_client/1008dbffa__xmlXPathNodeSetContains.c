
undefined4 _xmlXPathNodeSetContains(int *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int local_1c;
  
  if ((param_1 != (int *)0x0) && (param_2 != (long *)0x0)) {
    if ((int)param_2[1] == 0x12) {
      for (local_1c = 0; local_1c < *param_1; local_1c = local_1c + 1) {
        if (*(int *)(*(long *)(*(long *)(param_1 + 2) + (long)local_1c * 8) + 8) == 0x12) {
          plVar1 = *(long **)(*(long *)(param_1 + 2) + (long)local_1c * 8);
          if (param_2 == plVar1) {
            return 1;
          }
          if (((*param_2 != 0) && (*plVar1 == *param_2)) &&
             (iVar2 = _xmlStrEqual((xmlChar *)param_2[3],(xmlChar *)plVar1[3]), iVar2 != 0)) {
            return 1;
          }
        }
      }
    }
    else {
      for (local_1c = 0; local_1c < *param_1; local_1c = local_1c + 1) {
        if (*(long **)(*(long *)(param_1 + 2) + (long)local_1c * 8) == param_2) {
          return 1;
        }
      }
    }
  }
  return 0;
}

