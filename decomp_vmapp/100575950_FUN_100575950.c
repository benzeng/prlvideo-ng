
undefined8 FUN_100575950(long *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((char)param_1[0x25d] != '\0') {
    lVar4 = param_1[600];
    if (lVar4 != 0) {
LAB_1005759ef:
      uVar3 = FUN_1005f48e0(lVar4,param_2,param_3);
      return uVar3;
    }
    puVar2 = operator_new(0x38,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar2 == (undefined8 *)0x0) {
      param_1[600] = 0;
      *param_3 = -0x7ffffffe;
    }
    else {
      puVar2[1] = puVar2 + 1;
      puVar2[2] = puVar2 + 1;
      *puVar2 = &PTR_FUN_100bc72a0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[6] = param_1;
      param_1[600] = (long)puVar2;
      iVar1 = (**(code **)(*param_1 + 0x1f0))(param_1,puVar2);
      *param_3 = iVar1;
      if (-1 < iVar1) {
        lVar4 = param_1[600];
        goto LAB_1005759ef;
      }
    }
  }
  return 0;
}

