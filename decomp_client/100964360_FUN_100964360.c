
void FUN_100964360(long param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_1c = 0;
  do {
    if (*(int *)(param_1 + 0x50) <= local_24) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      return;
    }
    piVar1 = (int *)(*(long *)(param_1 + 0x58) + (long)local_24 * 0x28);
    if (local_1c < 5) {
      for (local_20 = 0; local_20 < local_24; local_20 = local_20 + 1) {
        piVar2 = (int *)(*(long *)(param_1 + 0x58) + (long)local_20 * 0x28);
        if ((*piVar1 == *piVar2) && (*(long *)(piVar1 + 2) == *(long *)(piVar2 + 2))) {
          iVar3 = _xmlStrEqual(*(xmlChar **)(piVar1 + 6),*(xmlChar **)(piVar2 + 6));
          if (iVar3 != 0) {
            iVar3 = _xmlStrEqual(*(xmlChar **)(piVar1 + 8),*(xmlChar **)(piVar2 + 8));
            if (iVar3 != 0) goto LAB_10096448c;
          }
        }
      }
      FUN_1009641b7(param_1,*piVar1,*(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar1 + 4),
                    *(undefined8 *)(piVar1 + 6),*(undefined8 *)(piVar1 + 8));
      local_1c = local_1c + 1;
    }
LAB_10096448c:
    if ((piVar1[1] & 1U) != 0) {
      if (*(long *)(piVar1 + 6) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(piVar1 + 6));
      }
      piVar1[6] = 0;
      piVar1[7] = 0;
      if (*(long *)(piVar1 + 8) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(piVar1 + 8));
      }
      piVar1[8] = 0;
      piVar1[9] = 0;
      piVar1[1] = 0;
    }
    local_24 = local_24 + 1;
  } while( true );
}

