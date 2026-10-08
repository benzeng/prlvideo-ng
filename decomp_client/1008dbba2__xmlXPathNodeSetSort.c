
void _xmlXPathNodeSetSort(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    local_18 = iVar1;
    while (local_18 = local_18 / 2, 0 < local_18) {
      for (local_20 = local_18; local_20 < iVar1; local_20 = local_20 + 1) {
        local_1c = local_20 - local_18;
        while ((-1 < local_1c &&
               (iVar3 = _xmlXPathCmpNodes(*(xmlNodePtr *)
                                           (*(long *)(param_1 + 2) + (long)local_1c * 8),
                                          *(xmlNodePtr *)
                                           (*(long *)(param_1 + 2) + (long)(local_18 + local_1c) * 8
                                           )), iVar3 == -1))) {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 2) + (long)local_1c * 8);
          *(undefined8 *)(*(long *)(param_1 + 2) + (long)local_1c * 8) =
               *(undefined8 *)(*(long *)(param_1 + 2) + (long)(local_18 + local_1c) * 8);
          *(undefined8 *)(*(long *)(param_1 + 2) + (long)(local_18 + local_1c) * 8) = uVar2;
          local_1c = local_1c - local_18;
        }
      }
    }
  }
  return;
}

