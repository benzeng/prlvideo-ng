
undefined8 FUN_100cb2560(undefined8 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  piVar1 = (int *)FUN_100cb0ee0(param_1,0xa7);
  uVar2 = 0;
  if ((piVar1 != (int *)0x0) && (uVar2 = 0, *piVar1 == 0x10)) {
    local_10 = *(undefined8 *)(*(long *)(piVar1 + 2) + 8);
    uVar2 = FUN_100c81490(0,&local_10,(long)**(int **)(piVar1 + 2),&DAT_102251590);
  }
  return uVar2;
}

