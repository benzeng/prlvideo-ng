
undefined1 FUN_10054bea0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int local_74;
  undefined1 local_70 [64];
  uint local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  if (*(long *)(param_1 + 0x28) != 0) {
    pcVar4 = "Failed to initialize the compressor: the descriptor is dirty";
    uVar5 = 0;
    uVar6 = 0;
LAB_10054bedf:
    FUN_1008e3970("","TransMem",uVar5,pcVar4);
    goto LAB_10054bfc3;
  }
  pcVar4 = *(char **)(param_1 + 0x58);
  uVar6 = 1;
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) goto LAB_10054bfc3;
  local_74 = 0;
  plVar3 = (long *)FUN_10060e060(pcVar4 + 1,&local_74);
  *(long **)(param_1 + 0x60) = plVar3;
  if (plVar3 != (long *)0x0) {
    local_74 = (**(code **)(*plVar3 + 0x30))(plVar3);
    if (-1 < local_74) {
      local_74 = (**(code **)(**(long **)(param_1 + 0x60) + 0x58))
                           (*(long **)(param_1 + 0x60),local_70);
      if (-1 < local_74) {
        if (local_30 < 0x11) {
          lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x18);
          if ((local_30 <= *(uint *)(lVar2 + 4)) &&
             (local_30 <= *(uint *)(*(long *)(*(long *)(param_1 + 0x58) + 0x20) + 4))) {
            local_74 = (**(code **)(**(long **)(param_1 + 0x60) + 0x48))
                                 (*(long **)(param_1 + 0x60),lVar2 + *(long *)(lVar2 + 0x10));
            if (-1 < local_74) {
              lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x20);
              local_74 = (**(code **)(**(long **)(param_1 + 0x60) + 0x50))
                                   (*(long **)(param_1 + 0x60),lVar2 + *(long *)(lVar2 + 0x10));
              if (-1 < local_74) {
                if (DAT_1011b55f8 < 2) goto LAB_10054bfc3;
                pcVar4 = "Compressor encryption engine successfully initialized";
                uVar5 = 2;
                uVar6 = 1;
                goto LAB_10054bedf;
              }
            }
            goto LAB_10054bf85;
          }
        }
        FUN_1008e3970("","TransMem",0,"Unexpected encryption block size %d");
      }
    }
  }
LAB_10054bf85:
  uVar6 = 0;
  FUN_1008e3970("","TransMem",0,"Failed to initialize the compressor encryption engine (%d)",
                local_74);
  if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
    *(undefined8 *)(param_1 + 0x60) = 0;
    uVar6 = 0;
  }
LAB_10054bfc3:
  if (lVar1 == local_28) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

