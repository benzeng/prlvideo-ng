
void FUN_1007dcca0(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (*(long *)(param_2 + 8) != 0) {
    if (*(long *)(param_2 + 8) == param_1) {
      *(undefined8 *)(param_2 + 8) = 0;
      uVar3 = *(ushort *)(param_2 + 0x14);
      if ((uVar3 & 1) != 0) {
        cVar2 = FUN_1007dcb30(param_1,*(undefined4 *)(param_2 + 0x10),0xffffffff,"POLLIN");
        if (cVar2 == '\0') {
          return;
        }
        uVar3 = *(ushort *)(param_2 + 0x14);
      }
      if (((uVar3 & 4) == 0) ||
         (cVar2 = FUN_1007dcb30(param_1,*(undefined4 *)(param_2 + 0x10),0xfffffffe,"POLLOUT"),
         cVar2 != '\0')) {
        lVar5 = (long)*(int *)(param_1 + 0x1c);
        lVar4 = (long)*(int *)(param_1 + 0x18);
        if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18)) {
          lVar1 = *(long *)(param_1 + 0x10);
          lVar7 = lVar5;
          if ((lVar4 + -1) - lVar5 != -1) {
            uVar8 = lVar4 - lVar5;
            uVar9 = uVar8 & 0xfffffffffffffffe;
            if (uVar9 != 0) {
              lVar7 = (uVar8 & 0xfffffffffffffffe) + lVar5;
              plVar6 = (long *)(lVar5 * 0x20 + 0x38 + lVar1);
              do {
                if (plVar6[-4] == param_2) {
                  plVar6[-4] = 0;
                }
                if (*plVar6 == param_2) {
                  *plVar6 = 0;
                }
                plVar6 = plVar6 + 8;
                uVar9 = uVar9 - 2;
              } while (uVar9 != 0);
            }
            if (uVar8 + lVar5 == lVar7) {
              return;
            }
          }
          plVar6 = (long *)(lVar1 + 0x18 + lVar7 * 0x20);
          do {
            if (*plVar6 == param_2) {
              *plVar6 = 0;
            }
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 4;
          } while (lVar7 < lVar4);
        }
      }
    }
    else {
      FUN_1008e3970("","Std",0,"pollset_remove: entry is not initialized!");
      if (*(long *)(param_2 + 8) != param_1) {
        FUN_1008e3970("","Std",0,"ASSERT( %s ) occured in %s:%d [%s]","entry->pollset == pollset",
                      "pollset_mac.cpp",0xb8,"pollset_remove");
      }
    }
  }
  return;
}

