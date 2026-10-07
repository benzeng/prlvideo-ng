
long * FUN_1002b2060(void)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar1 = operator_new(0xe0,(nothrow_t *)PTR_nothrow_100ba21c8);
  plVar2 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_1002b3450(plVar1);
    if ((*(uint *)(DAT_1011c3698 + 0x5c0) & 0xffffff00) == 0x700) {
      uVar4 = 0x9c4;
      uVar3 = 0x9c4;
    }
    else {
      uVar4 = 0;
      uVar3 = 0;
    }
    (**(code **)(*plVar1 + 0x48))(plVar1,uVar4,uVar3);
    plVar2 = plVar1;
  }
  return plVar2;
}

