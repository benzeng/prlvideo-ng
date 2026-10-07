
undefined8 FUN_1002fde00(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 8;
  lVar5 = 0;
  do {
    uVar1 = *(undefined8 *)(&UNK_100bb6448 + lVar4);
    plVar2 = *(long **)((long)&PTR_s_glAccum_100bb6450 + lVar4);
    lVar3 = _dlsym(0xfffffffffffffffe,uVar1);
    *plVar2 = lVar3;
    if (lVar3 == 0) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","LocalDevices",2,"Can\'t find %s",uVar1);
      }
      *plVar2 = (long)FUN_1002fdf20;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x3b28);
  do {
    uVar1 = *(undefined8 *)((long)&PTR_s_glBindVertexArrayAPPLE_100bb9f70 + lVar5);
    plVar2 = *(long **)((long)&PTR_DAT_100bb9f78 + lVar5);
    lVar4 = _dlsym(0xfffffffffffffffe,uVar1);
    *plVar2 = lVar4;
    if (lVar4 == 0) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","LocalDevices",2,"Can\'t find %s",uVar1);
      }
      *plVar2 = (long)FUN_1002fdf20;
    }
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x100);
  return 1;
}

