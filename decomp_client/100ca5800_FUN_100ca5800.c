
undefined8 FUN_100ca5800(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_48 [12];
  
  if (param_2 - 1U < 9) {
LAB_100ca585f:
    *param_1 = param_2;
    uVar2 = 1;
  }
  else {
    local_48[0] = param_2;
    if (DAT_102318450 != 0) {
      iVar1 = FUN_100c60360(DAT_102318450,local_48);
      if ((iVar1 != -1) && (iVar1 != -10)) goto LAB_100ca585f;
    }
    FUN_100c62ee0(0x22,0x8d,0x92,"v3_purp.c",0x94);
    uVar2 = 0;
  }
  return uVar2;
}

