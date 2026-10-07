
long * FUN_100598790(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *extraout_RAX;
  char *pcVar7;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uVar5 = (int)*(undefined8 *)(param_1 + 0x60) - 1;
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) +
                             ((ulong)uVar5 + *(long *)(param_1 + 0x58) >> 9) * 8) +
                   ((ulong)((int)*(long *)(param_1 + 0x58) + uVar5) & 0x1ff) * 8);
  if ((lVar6 != 0) &&
     (lVar6 = ___dynamic_cast(lVar6,&PTR_vtable_10111dd60,&PTR_vtable_100bca8b0,0xffffffffffffffff),
     lVar6 != 0)) {
    return (long *)(ulong)*(uint *)(*(long *)(lVar6 + 0x20) + 0x48);
  }
  pcVar7 = "";
  FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","compImg != NULL","Storage.cpp");
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  pcVar7[0] = '\0';
  pcVar7[1] = '\0';
  pcVar7[2] = '\0';
  pcVar7[3] = '\0';
  lStack_40 = lVar6;
  FUN_1007d6870(&uStack_50);
  *(undefined8 *)(pcVar7 + 0xc) = uStack_48;
  *(undefined8 *)(pcVar7 + 4) = uStack_50;
  pcVar7[0x14] = -1;
  pcVar7[0x15] = -1;
  pcVar7[0x16] = -1;
  pcVar7[0x17] = -1;
  pcVar7[0x18] = '\0';
  pcVar7[0x19] = '\0';
  pcVar7[0x28] = '\0';
  pcVar7[0x29] = '\0';
  pcVar7[0x2a] = '\0';
  pcVar7[0x2b] = '\0';
  pcVar7[0x2c] = '\0';
  pcVar7[0x2d] = '\0';
  pcVar7[0x2e] = '\0';
  pcVar7[0x2f] = '\0';
  pcVar7[0x20] = '\0';
  pcVar7[0x21] = '\0';
  pcVar7[0x22] = '\0';
  pcVar7[0x23] = '\0';
  pcVar7[0x24] = '\0';
  pcVar7[0x25] = '\0';
  pcVar7[0x26] = '\0';
  pcVar7[0x27] = '\0';
  pcVar7[0x30] = -1;
  pcVar7[0x31] = -1;
  pcVar7[0x32] = -1;
  pcVar7[0x33] = -1;
  FUN_1007d6870(&plStack_60);
  *(undefined8 *)(pcVar7 + 0x40) = uStack_58;
  *(long **)(pcVar7 + 0x38) = plStack_60;
  if (*(long *)(pcVar7 + 0x58) != 0) {
    lVar1 = *(long *)(pcVar7 + 0x48);
    plVar2 = *(long **)(pcVar7 + 0x50);
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    plStack_60 = *(long **)(lVar1 + 8);
    *plStack_60 = lVar3;
    pcVar7[0x58] = '\0';
    pcVar7[0x59] = '\0';
    pcVar7[0x5a] = '\0';
    pcVar7[0x5b] = '\0';
    pcVar7[0x5c] = '\0';
    pcVar7[0x5d] = '\0';
    pcVar7[0x5e] = '\0';
    pcVar7[0x5f] = '\0';
    while (plVar2 != (long *)(pcVar7 + 0x48)) {
      plVar4 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar4;
      plStack_60 = extraout_RAX;
    }
  }
  if (lVar6 != lStack_40) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return plStack_60;
}

