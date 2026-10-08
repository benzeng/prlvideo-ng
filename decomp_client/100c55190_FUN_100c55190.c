
undefined8 FUN_100c55190(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    FUN_100c62ee0(0x26,0x7b,0x43,"eng_list.c",0x117);
    uVar3 = 0;
  }
  else {
    FUN_100bf2780(9,0x1e,"eng_list.c",0x11a);
    plVar2 = &DAT_1023162c0;
    do {
      lVar1 = *plVar2;
      if (lVar1 == param_1) break;
      plVar2 = (long *)(lVar1 + 0xd0);
    } while (lVar1 != 0);
    if (lVar1 == 0) {
      FUN_100c62ee0(0x26,0x79,0x69,"eng_list.c",0xa6);
      FUN_100c62ee0(0x26,0x7b,0x6e,"eng_list.c",0x11c);
      uVar3 = 0;
    }
    else {
      lVar1 = *(long *)(param_1 + 0xd0);
      if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(param_1 + 200);
      }
      if (*(long *)(param_1 + 200) != 0) {
        *(long *)(*(long *)(param_1 + 200) + 0xd0) = lVar1;
      }
      if (DAT_1023162c0 == param_1) {
        DAT_1023162c0 = *(long *)(param_1 + 0xd0);
      }
      if (DAT_1023162c8 == param_1) {
        DAT_1023162c8 = *(long *)(param_1 + 200);
      }
      FUN_100c549e0(param_1,0);
      uVar3 = 1;
    }
    FUN_100bf2780(10,0x1e,"eng_list.c",0x11f);
  }
  return uVar3;
}

