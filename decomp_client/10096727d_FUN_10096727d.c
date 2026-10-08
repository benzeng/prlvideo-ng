
void FUN_10096727d(long param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *local_48;
  int local_40;
  int local_3c;
  int local_38;
  xmlHashTablePtr local_28;
  uint local_1c;
  long *local_18;
  int local_c;
  
  local_40 = 0;
  bVar1 = false;
  local_28 = (xmlHashTablePtr)0x0;
  if ((((param_2 != (int *)0x0) && (*param_2 == 0x11)) &&
      (((uint)(int)*(short *)((long)param_2 + 0x62) >> 5 & 1) == 0)) &&
     (*(int *)(param_1 + 0x44) == 0)) {
    iVar2 = FUN_100965cb6(param_2);
    for (local_48 = *(void **)(param_2 + 0xc); local_48 != (void *)0x0;
        local_48 = *(void **)((long)local_48 + 0x40)) {
      local_40 = local_40 + 1;
    }
    lVar3 = (*(code *)_xmlMalloc)((long)local_40 * 8);
    if (lVar3 == 0) {
      FUN_100960bbc(param_1,"building choice\n");
    }
    else {
      local_3c = 0;
      if (iVar2 == 0) {
        local_28 = _xmlHashCreate(10);
      }
      local_1c = (uint)(iVar2 == 0);
      for (local_48 = *(void **)(param_2 + 0xc); local_48 != (void *)0x0;
          local_48 = *(void **)((long)local_48 + 0x40)) {
        uVar4 = FUN_100966fad(param_1,local_48,0);
        *(undefined8 *)((long)local_3c * 8 + lVar3) = uVar4;
        if ((*(long *)((long)local_3c * 8 + lVar3) == 0) ||
           (**(long **)((long)local_3c * 8 + lVar3) == 0)) {
          local_1c = 0;
        }
        else if (local_1c == 1) {
          local_18 = *(long **)((long)local_3c * 8 + lVar3);
          while ((*local_18 != 0 && (local_1c == 1))) {
            if (*(int *)*local_18 == 3) {
              iVar2 = _xmlHashAddEntry2(local_28,(xmlChar *)"#text",(xmlChar *)0x0,local_48);
              if (iVar2 != 0) {
                local_1c = 0xffffffff;
              }
            }
            else if ((*(int *)*local_18 == 4) && (*(long *)(*local_18 + 0x10) != 0)) {
              if ((*(long *)(*local_18 + 0x18) == 0) || (**(char **)(*local_18 + 0x18) == '\0')) {
                local_c = _xmlHashAddEntry2(local_28,*(xmlChar **)(*local_18 + 0x10),(xmlChar *)0x0,
                                            local_48);
              }
              else {
                local_c = _xmlHashAddEntry2(local_28,*(xmlChar **)(*local_18 + 0x10),
                                            *(xmlChar **)(*local_18 + 0x18),local_48);
              }
              if (local_c != 0) {
                local_1c = 0xffffffff;
              }
            }
            else if (*(int *)*local_18 == 4) {
              if ((*(long *)(*local_18 + 0x18) == 0) || (**(char **)(*local_18 + 0x18) == '\0')) {
                local_c = _xmlHashAddEntry2(local_28,(xmlChar *)"#any",(xmlChar *)0x0,local_48);
              }
              else {
                local_c = _xmlHashAddEntry2(local_28,(xmlChar *)"#any",
                                            *(xmlChar **)(*local_18 + 0x18),local_48);
              }
              if (local_c != 0) {
                local_1c = 0xffffffff;
              }
            }
            else {
              local_1c = 0xffffffff;
            }
            local_18 = local_18 + 1;
          }
        }
        local_3c = local_3c + 1;
      }
      for (local_3c = 0; local_3c < local_40; local_3c = local_3c + 1) {
        if (*(long *)((long)local_3c * 8 + lVar3) != 0) {
          for (local_38 = 0; local_38 < local_3c; local_38 = local_38 + 1) {
            if ((*(long *)((long)local_38 * 8 + lVar3) != 0) &&
               (iVar2 = FUN_100966d2f(param_1,*(undefined8 *)((long)local_3c * 8 + lVar3),
                                      *(undefined8 *)((long)local_38 * 8 + lVar3)), iVar2 == 0)) {
              bVar1 = true;
            }
          }
        }
      }
      for (local_3c = 0; local_3c < local_40; local_3c = local_3c + 1) {
        if (*(long *)((long)local_3c * 8 + lVar3) != 0) {
          (*(code *)_xmlFree)(*(undefined8 *)((long)local_3c * 8 + lVar3));
        }
      }
      (*(code *)_xmlFree)(lVar3);
      if (bVar1) {
        *(ushort *)((long)param_2 + 0x62) = *(ushort *)((long)param_2 + 0x62) | 4;
      }
      if (local_1c == 1) {
        *(ushort *)((long)param_2 + 0x62) = *(ushort *)((long)param_2 + 0x62) | 0x10;
        *(xmlHashTablePtr *)(param_2 + 10) = local_28;
      }
      else if (local_28 != (xmlHashTablePtr)0x0) {
        _xmlHashFree(local_28,(xmlHashDeallocator)0x0);
      }
      *(ushort *)((long)param_2 + 0x62) = *(ushort *)((long)param_2 + 0x62) | 0x20;
    }
  }
  return;
}

