
void FUN_100958afa(long param_1)

{
  long lVar1;
  long *plVar2;
  xmlNodePtr cur;
  int iVar3;
  undefined8 uVar4;
  long local_20;
  
  lVar1 = *(long *)(param_1 + 0x70);
  local_20 = *(long *)(param_1 + 0x70);
  plVar2 = *(long **)(param_1 + 0x20);
  do {
    if (*(int *)(local_20 + 8) == 5) {
      if (((*(long *)(local_20 + 0x18) == 0) && (*plVar2 != 0)) && (*(long *)(*plVar2 + 0x28) != 0))
      {
        uVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,*(undefined8 *)(local_20 + 0x10));
        *(undefined8 *)(local_20 + 0x18) = uVar4;
      }
      if (((*(long *)(local_20 + 0x18) == 0) || (*(int *)(*(long *)(local_20 + 0x18) + 8) != 0x11))
         || (*(long *)(*(long *)(local_20 + 0x18) + 0x18) == 0)) {
        if (local_20 != lVar1) {
          local_20 = *(long *)(local_20 + 0x30);
          goto LAB_100958c4e;
        }
LAB_100958da9:
        *(long *)(param_1 + 0x70) = lVar1;
        return;
      }
      FUN_100957ccc(param_1,local_20);
      local_20 = *(long *)(*(long *)(local_20 + 0x18) + 0x18);
    }
    else {
      if (*(int *)(local_20 + 8) == 1) {
        *(long *)(param_1 + 0x70) = local_20;
        FUN_1009585d6(param_1);
      }
      else if ((*(int *)(local_20 + 8) == 3) || (*(int *)(local_20 + 8) == 4)) {
        iVar3 = _xmlStrlen(*(xmlChar **)(local_20 + 0x50));
        FUN_100958817(param_1,*(undefined8 *)(local_20 + 0x50),iVar3);
      }
LAB_100958c4e:
      if (*(long *)(local_20 + 0x18) == 0) {
        if (*(int *)(local_20 + 8) == 1) {
          FUN_100958900(param_1);
        }
        if (*(long *)(local_20 + 0x30) == 0) {
          while( true ) {
            local_20 = *(long *)(local_20 + 0x28);
            if (*(int *)(local_20 + 8) == 1) {
              if (*(int *)(param_1 + 0xb0) == 0) {
                while ((cur = *(xmlNodePtr *)(local_20 + 0x20), cur != (xmlNodePtr)0x0 &&
                       (((cur->extra >> 1 ^ 1) & 1) != 0))) {
                  _xmlUnlinkNode(cur);
                  FUN_1009577bc(param_1,cur);
                }
              }
              *(long *)(param_1 + 0x70) = local_20;
              FUN_100958900(param_1);
            }
            if (((*(int *)(local_20 + 8) == 0x11) && (*(long *)(param_1 + 0xa8) != 0)) &&
               (*(long *)(*(long *)(param_1 + 0xa8) + 0x18) == local_20)) {
              local_20 = FUN_100957e5c(param_1);
            }
            if (local_20 == lVar1) goto LAB_100958d94;
            if (*(long *)(local_20 + 0x30) != 0) break;
            if ((local_20 == 0) || (local_20 == lVar1)) goto LAB_100958d94;
          }
          local_20 = *(long *)(local_20 + 0x30);
        }
        else {
          local_20 = *(long *)(local_20 + 0x30);
        }
      }
      else {
        local_20 = *(long *)(local_20 + 0x18);
      }
    }
LAB_100958d94:
    if ((local_20 == 0) || (local_20 == lVar1)) goto LAB_100958da9;
  } while( true );
}

