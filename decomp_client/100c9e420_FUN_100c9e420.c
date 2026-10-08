
undefined8 FUN_100c9e420(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_88;
  int *local_80;
  int local_78 [26];
  
  local_78[0] = FUN_100bf7220(*param_1);
  if (local_78[0] == 0) {
    return 0;
  }
  local_80 = local_78;
  if (local_78[0] < 0) {
LAB_100c9e4ce:
    uVar5 = 0;
  }
  else {
    plVar3 = (long *)FUN_100bf7eb0(&local_80,&PTR_DAT_10230b350,0x28,8,FUN_100c9e7e0);
    if (plVar3 == (long *)0x0) {
      if ((DAT_102318448 == 0) || (iVar2 = FUN_100c60360(DAT_102318448,local_78), iVar2 == -1))
      goto LAB_100c9e4ce;
      lVar4 = FUN_100c60820(DAT_102318448,iVar2);
    }
    else {
      lVar4 = *plVar3;
    }
    uVar5 = 0;
    if (lVar4 != 0) {
      piVar1 = (int *)param_1[2];
      local_88 = *(undefined8 *)(piVar1 + 2);
      if (*(long *)(lVar4 + 8) == 0) {
        uVar5 = (**(code **)(lVar4 + 0x20))(0,&local_88,(long)*piVar1);
      }
      else {
        uVar5 = FUN_100c81490(0,&local_88,(long)*piVar1);
      }
    }
  }
  return uVar5;
}

